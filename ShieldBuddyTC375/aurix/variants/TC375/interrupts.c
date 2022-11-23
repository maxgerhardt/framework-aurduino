/*====================================================================
* Project:  Board Support Package (BSP)
* Function: Handling of interrupts on TC2x
*
* Copyright HighTec EDV-Systeme GmbH 1982-2015
*====================================================================*/

#include <machine/wdtcon.h>
#include <machine/intrinsics.h>

#include "tc_inc_path.h"

#include TC_INCLUDE(TCPATH/IfxCpu_reg.h)
#include TC_INCLUDE(TCPATH/IfxCpu_bf.h)
#include TC_INCLUDE(TCPATH/IfxSrc_reg.h)

#include "cint.h"
#include "interrupts.h"



/* Service Request Control register TC375 */
typedef union _Ifx_SRC_t
{
	volatile unsigned int R;
	struct _bits
	{
		unsigned int SRPN:8;            /**< \brief [7:0] Service Request Priority Number (rw) */
		unsigned int reserved_8:2;      /**< \brief [9:8] \internal Reserved */
		unsigned int SRE:1;             /**< \brief [10:10] Service Request Enable (rw) */
		unsigned int TOS:3;             /**< \brief [13:11] Type of Service Control (rw) */
		unsigned int reserved_14:2;     /**< \brief [15:14] \internal Reserved */
		unsigned int ECC:5;             /**< \brief [20:16] Error Correction Code (rwh) */
		unsigned int reserved_21:3;     /**< \brief [23:21] \internal Reserved */
		unsigned int SRR:1;             /**< \brief [24:24] Service Request Flag (rh) */
		unsigned int CLRR:1;            /**< \brief [25:25] Request Clear Bit (w) */
		unsigned int SETR:1;            /**< \brief [26:26] Request Set Bit (w) */
		unsigned int IOV:1;             /**< \brief [27:27] Interrupt Trigger Overflow Bit (rh) */
		unsigned int IOVCLR:1;          /**< \brief [28:28] Interrupt Trigger Overflow Clear Bit (w) */
		unsigned int SWS:1;             /**< \brief [29:29] SW Sticky Bit (rh) */
		unsigned int SWSCLR:1;          /**< \brief [30:30] SW Sticky Clear Bit (w) */
		unsigned int reserved_31:1;     /**< \brief [31:31] \internal Reserved */
	} B;
} Ifx_SRC_t;


static Ifx_SRC_t * const tabSRC = (Ifx_SRC_t *)&MODULE_SRC;


/*---------------------------------------------------------------------
	Function:	InterruptInit
	Purpose:	Initialisation of interrupt handling
	Arguments:	void
	Return:		void
---------------------------------------------------------------------*/
void InterruptInit(void)
{
	/* initialise vector tables */
	_init_vectab();
	/* enable external interrupts */
	_enable();
}



/*---------------------------------------------------------------------
	Function:	InterruptInstall
	Purpose:	Install a service handler for an interrupt
	Arguments:	int irqNum       - number of interrupt
				isrhnd_t isrProc - pointer to service routine
				int prio         - priority (1-255)
				int arg          - argument for service routine
	Return:		void
---------------------------------------------------------------------*/
void InterruptInstall(int irqNum, isrhnd_t isrProc, int prio, int arg)
{
	unsigned int coreId = _mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK;

	if ((irqNum < 0) || (IRQ_ID_MAX_NUM <= irqNum))
	{
		return;
	}

	/* install the service routine */
	_install_int_handler(prio, isrProc, arg);

	/* set processor and priority values */
	tabSRC[irqNum].B.TOS  = ConvertCore2Tos[coreId];
	tabSRC[irqNum].B.SRPN = prio;
	/* ... and enable it */
	tabSRC[irqNum].B.SRE = 1;
}
