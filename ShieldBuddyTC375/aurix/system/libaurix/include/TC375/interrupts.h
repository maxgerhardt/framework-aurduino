/*====================================================================
* Project:  Board Support Package (BSP)
* Function: Handling of interrupts on TC37x
*
* Copyright HighTec EDV-Systeme GmbH 1982-2019
*====================================================================*/

#ifndef __INTERRUPTS_H__
#define __INTERRUPTS_H__

#if defined(__TC37XX__)
# include "intids_tc37x.h"
#endif /* __TC37XX__ */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* type of an Interrupt Service Routine (ISR) */
typedef void (*isrhnd_t)(int arg);

/* service provider for TOS field */
typedef enum _src_tos_t
{
	TOS_CPU0 = 0,
	TOS_CPU1,
	TOS_CPU2,
	TOS_DMA,
	TOS_MAX
} src_tos_t;


/*---------------------------------------------------------------------
	Function:	InterruptInit
	Purpose:	Initialisation of interrupt handling
	Arguments:	void
	Return:		void
---------------------------------------------------------------------*/
void InterruptInit(void);

/*---------------------------------------------------------------------
	Function:	InterruptInstall
	Purpose:	Install a service handler for an interrupt
				(TOS field set to ID of caller CPU)
	Arguments:	int irqNum       - number of interrupt
				isrhnd_t isrProc - pointer to service routine
				int prio         - priority (1-255)
				int arg          - argument for service routine
	Return:		void
---------------------------------------------------------------------*/
void InterruptInstall(int irqNum, isrhnd_t isrProc, int prio, int arg);

/*---------------------------------------------------------------------
	Function:	InterruptInstallTOS
	Purpose:	Install a service handler for an interrupt
	Arguments:	int irqNum       - number of interrupt
				isrhnd_t isrProc - pointer to service routine
				int prio         - priority (1-255) or DMA channel
				int tos	         - type of service (0-7)
				int arg          - argument for service routine
	Return:		void
---------------------------------------------------------------------*/
void InterruptInstallTOS(int irqNum, isrhnd_t isrProc, int prio, int tos, int arg);


#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __INTERRUPTS_H__ */
