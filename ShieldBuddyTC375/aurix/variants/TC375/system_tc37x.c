/*====================================================================
* Project:  Board Support Package (BSP)
* Function: Extended system control API implementation for TC37x
*           (based on PLS original sources)
*           (adapted by HighTec for correct frequency up stepping)
*
* Copyright HighTec EDV-Systeme GmbH 1982-2019
*====================================================================*/

#include <machine/intrinsics.h>
#include <machine/wdtcon.h>
#ifdef USE_IRQ
#include "interrupts.h"
#endif /* USE_IRQ */

#include "system_tc3x.h"

#include "tc_inc_path.h"

#include TC_INCLUDE(TCPATH/IfxScu_reg.h)
#include TC_INCLUDE(TCPATH/IfxScu_bf.h)
#include TC_INCLUDE(TCPATH/IfxCpu_reg.h)
#include TC_INCLUDE(TCPATH/IfxCpu_bf.h)
#include TC_INCLUDE(TCPATH/IfxStm_reg.h)
#include TC_INCLUDE(TCPATH/IfxStm_bf.h)
#include TC_INCLUDE(TCPATH/IfxDmu_reg.h)

/* Workaround for TLF35584 on TriBoard-TC3x9 */
#define USE_DISABLE_EXT_WDT		(1)

#if (USE_DISABLE_EXT_WDT == 1)
# include TC_INCLUDE(TCPATH/IfxPort_reg.h)
# include TC_INCLUDE(TCPATH/IfxQspi_reg.h)
#endif /* USE_DISABLE_EXT_WDT */

#define MAX_CORES		3


typedef struct _PllInitValue_t
{
	unsigned int valOSCCON;
	unsigned int valSYSPLLCON0;
	unsigned int valSYSPLLCON1;	/* first step K dividers */
	unsigned int valCCUCON0;
	unsigned int valCCUCON1;
	unsigned int valCCUCON2;
	unsigned int finalK;		/* final K2DIV value */
	unsigned int valPERPLLCON0;
	unsigned int valPERPLLCON1;
} PllInitValue_t;

static const PllInitValue_t g_PllInitValue_300_100;
#define PLL_VALUE_300_100 ((const PllInitValue_t *)(&g_PllInitValue_300_100))

static const PllInitValue_t g_PllInitValue_200_100;
#define PLL_VALUE_200_100 ((const PllInitValue_t *)(&g_PllInitValue_200_100))

static const PllInitValue_t g_PllInitValue_100_50;
#define PLL_VALUE_100_50  ((const PllInitValue_t *)(&g_PllInitValue_100_50))


#ifndef DEFAULT_PLL_VALUE  /* Use 300MHz for core, 100MHz for Fsys */
# define DEFAULT_PLL_VALUE		PLL_VALUE_300_100  /* Was PLL_VALUE_200_100 */
#endif

#ifndef EXTCLK
# define EXTCLK		(20000000)	/* external oscillator clock (20MHz) */
#endif



#pragma section ".rodata"
/* PLL settings for 20MHz ext. clock */
#if (20000000 == EXTCLK)

/* Fcpu=300/Fsys=100 MHz @ 20MHz ext. clock */
static const PllInitValue_t g_PllInitValue_300_100 =
{
	/* OSCCON,	SYSPLLCON0,	SYSPLLCON1,	CCUCON0,	CCUCON1,	CCUCON2,    finalK,	PERPLLCON0,	PERPLLCON1 */
	0x0005001C, 0x41057600, 0x00000005, 0x17230133, 0x21120213, 0x00001201, 1,		0x00053E00,	0x00000101
};

/* 200/100 MHz @ 20MHz ext. clock */
static const PllInitValue_t g_PllInitValue_200_100 =
{
	/* OSCCON,	SYSPLLCON0,	SYSPLLCON1,	CCUCON0,	CCUCON1,	CCUCON2,    finalK,	PERPLLCON0,	PERPLLCON1 */
	0x0005001C, 0x41057600, 0x00000005, 0x16220122, 0x21120212, 0x00001201, 2,		0x00053E00,	0x00000101
};

/* 100/50 MHz @ 20MHz ext. clock */
static const PllInitValue_t g_PllInitValue_100_50 =
{
	/* OSCCON,	SYSPLLCON0,	SYSPLLCON1,	CCUCON0,	CCUCON1,	CCUCON2,    finalK,	PERPLLCON0,	PERPLLCON1 */
	0x0005001C, 0x41058a00, 0x00000006, 0x16220122, 0x21120211, 0x00001201, 6,		0x00053E00,	0x00000101
};
#else
#error "ERROR: UNSUPPORTED EXTERNAL CLOCK!"
#endif /* PLL settings for 20MHz ext. clock */
#pragma section


static Ifx_SCU * const pSCU = (Ifx_SCU *)&MODULE_SCU;


#if (USE_DISABLE_EXT_WDT == 1)

#define WDT_CMD_SIZE			10

uint32 volatile RxVal;

/* MJB Not Used */
#ifdef _0_

static void disable_external_watchdogQSPI2(void)
{
	int i;
    uint8 Tq;
    float32 Tqf;
    Ifx_QSPI_GLOBALCON TempGLOBALCON;
    Ifx_QSPI_GLOBALCON1 TempGLOBALCON1;
    Ifx_QSPI_ECON TempECON;
    Ifx_QSPI_BACON TempBACON;
    Ifx_QSPI_SSOC TempSSOC;

	/* command sequence for disabling external watchdog */
	const unsigned short wdtdiscmd[WDT_CMD_SIZE] =
	{
		0x8756, 0x87de, 0x86ad, 0x8625,		/* unprotect register (PROTCFG) */
		0x8d27,								/* disable window watchdog */
		0x8A01,								/* disable err pin monitor */
		0x87be, 0x8668, 0x877d, 0x8795		/* protect register (PROTCFG) */
	};

	/* check that this disabling has not been already done (e.g. by the debugger) */
	if (QSPI2_GLOBALCON.B.EN)
	{
		/* don't do it again */
		return;
	}

	/* initialise QSPI2 interface */
	unlock_wdtcon();				/* remove ENDINIT protection */
	QSPI2_CLC.U = 0x8;				/* activate module, disable sleep mode */
	(void)QSPI2_CLC.U;				/* read back to get effective */
	P15_PDR0.U = 0x00000000;		/* fast speed (all pins) */
	QSPI2_PISEL.U = 0;				/* MRIS=0 ==> use MRST0A pin */
	lock_wdtcon();					/* re-enable ENDINIT protection */

	/* configure port pins */
	P14_IOCR0.B.PC2 = 0x13;		/* SLSO2 P14.2 */
	P15_IOCR0.B.PC3 = 0x13;		/* SCLK0 P15.3 */
	P15_IOCR4.B.PC6 = 0x13;		/* MTSR0 P15.6 */
	P15_IOCR4.B.PC7 = 0x02;		/* MRST0 P15.7 */

   	/* Input Pin Selection Option For QSPI2 MRST */
    QSPI2_PISEL.B.MRIS = 1U;  	/* P15.7 : QSPI2 - MRSTB */

   	/* ******************* */
   	/* BAUD RATE & SETTING */
   	/* ******************* */

    /* Setting for the baud rate: Example for 100KHz */
   	/* Using SCU-CCU-fBAUD2 = 200MHz */
   	/*  Global Clock Divider: */
   	/*  - GLOBALCON.Tq = 49 */
   	/*  Channel Divider */
    /*  - ECONx.Q = 9 */
    /*  Channel Bit Clock Timings: */
    /*  - ECON.A = 1 */
    /*  - ECON.B = 0 */
    /*  - ECON.C = 2 */
   	/* Calculated Baud rate: */
    /*  - fBRz = fBAUD2 / ((TQ+1)(Qz+1)(A + 1 + B + C)) */
    /*  - fBRz = 200,000000 / ((49+1)(9+1)(1 + 1 + 0 + 2)) */
    /*  - fBRz = 200,000000 / 2000 = 100KHz */

    /* (Tq+1) = 200,000,000 / (Qz+1)(A + 1 + B + C))(TargetBaud) */
    /* Tq = (200,000000 / (Qz+1)(A + 1 + B + C))(TargetBaud)) - 1 */
    /* Tq = (200,000000 / ((40 * TargetBaud)) - 1 */
    /* Tq = (5,000000 / TargetBaud)) - 1 */


    /* ********* */
   	/* GLOBALCON */
   	/* ********* */

    /* Work out Tq from the given baud rate */
    Tqf = ( ((float32) 5000000.0f) /  1000000ul );
    Tq = (uint8) Tqf;
    if (Tq != 0U)
	{
    	Tq--;
	}


   	/* GLOBALCON Registers */
    TempGLOBALCON.U = (uint32) 0U;
    TempGLOBALCON.B.CLKSEL = (uint8) 1u;	/* Clock is Fper */
    TempGLOBALCON.B.TQ     = (uint8) Tq;	/* Global Time Quantum Length - 49 == /(n+1) == /50 */
    TempGLOBALCON.B.SI     = (uint8) 0U;	/* Status Injection - 0 == disabled */
    TempGLOBALCON.B.EXPECT = (uint8) 15U;	/* Time-Out Value for the Expect Phase == 15 == 2097152 (2^21 = 2 Mega) */
    TempGLOBALCON.B.LB     = (uint8) 0U;	/* Loop-Back Control == 0 == Loop-Back inactive */
    TempGLOBALCON.B.DEL0   = (uint8) 0U;	/* Delayed Mode for SLSO0 == 0 == Delayed mode off */
    TempGLOBALCON.B.STROBE = (uint8) 0U;	/* Strobe Delay for SLSO0 in Delayed Mode == 0 == 1 Tq delay */
    TempGLOBALCON.B.SRF    = (uint8) 0U;	/* Stop on RxFIFO Full == 0U == Feature disabled */
    TempGLOBALCON.B.STIP   = (uint8) 0U;	/* Feature disabled == 0 == MRST = 0 when QSPI is de-selected in Slave Mode */
    TempGLOBALCON.B.EN     = (uint8) 0U;	/* Enable Bit == 0 == PAUSE requested */
    TempGLOBALCON.B.MS     = (uint8) 0U;	/* Master Slave Mode == 0 == Master Transmit and Receive */
    TempGLOBALCON.B.AREN   = (uint8) 0U;	/* Automatic Reset Enable == 0 == disabled */
    TempGLOBALCON.B.RESETS = (uint8) 0U;	/* Bits for resetting sub-modules per software == 0 == No reset triggered */

	/*  Load the GLOBALCON Register */
   	QSPI2_GLOBALCON.U = TempGLOBALCON.U;


   	/* ********** */
	/* GLOBALCON1 */
	/* ********** */

   	/* GLOBALCON Registers - 0x14000000U */
    TempGLOBALCON1.U = (uint32) 0U;
    TempGLOBALCON1.B.ERRORENS  = (uint16) 0U;	/* Error Enable Bits == 0 == All errors disabled */
    TempGLOBALCON1.B.TXEN      = (uint8) 0U;	/* Tx Interrupt Event En == 0 == Disabled */
    TempGLOBALCON1.B.RXEN      = (uint8) 0U;	/* RX Interrupt Event Enable == 0 == Disabled */
    TempGLOBALCON1.B.PT1EN     = (uint8) 0U;	/* Interrupt on PT1 Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.PT2EN     = (uint8) 0U;	/* Interrupt on PT2 Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.USREN     = (uint8) 0U;	/* Interrupt on USR Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.TXFIFOINT = (uint8) 0U;	/* Transmit FIFO Interrupt Threshold == 0 == 1 */
    TempGLOBALCON1.B.RXFIFOINT = (uint8) 0U;	/* Receive FIFO Interrupt Threshold == 0 == 0  */
    TempGLOBALCON1.B.PT1       = (uint8) 0U;	/* Phase Transition Event 1 == 0 == BUSY (end of WAIT phase) */
    TempGLOBALCON1.B.PT2       = (uint8) 0U;	/* Phase Transition Event 2 == 0 == BUSY (end of WAIT phase) */
    TempGLOBALCON1.B.TXFM      = (uint8) 1U;	/* TXFIFO Mode == 1 == Single Move Mode */
    TempGLOBALCON1.B.RXFM      = (uint8) 1U;	/* RXFIFO Mode == 1 == Single Move Mode */

	/*  Load the GLOBALCON1 Register */
   	QSPI2_GLOBALCON1.U = TempGLOBALCON1.U;


   	/* *********** */
   	/* ECON ENRTRY */
   	/* *********** */

   	/* ECON Entry */
   	TempECON.U = (uint32) 0U;
	TempECON.B.Q     = (uint8) 9U;		/* Time Quantum - 1 == 2 Tq */
   	TempECON.B.A     = (uint8) 1U;		/* Bit Segment1 - 0 == 1 x Q */
   	TempECON.B.B     = (uint8) 0U;		/* Bit Segment1 - 0 == 1 x Q */
   	TempECON.B.C     = (uint8) 2U;		/* Bit Segment1 - 1 == 1 x Q */
   	TempECON.B.CPH   = (uint8) 0U;		/* Clock Phase - 1 == Delay of one half SCLK clock cycle Enabled */
   	TempECON.B.CPOL  = (uint8) 0U;		/* Clock Polarity - 0 == Idle level of clock. Idle level low */
   	TempECON.B.PAREN = (uint8) 0U;		/* Enable Parity Check - 0 == Disabled */
   	TempECON.B.BE    = (uint8) 0U;		/* Big Endian - Disabled */

   	/* Load one of the ECON Registers (For use with Channel 1 SLSO1) */
   	QSPI2_ECON1.U  = TempECON.U;


   	/* ************ */
   	/* SLAVE SELECT */
   	/* ************ */

   	/* Slave Select Output Control Register - 0x00020000U */
   	TempSSOC.U = (uint32) 0U;
   	TempSSOC.B.AOL = (uint16) 0U;		/* Active Output Level for the SLSO Outputs */
   	TempSSOC.B.OEN = (uint16) 2U;		/* Enable Bits for the SLSO Outputs */

    /* Load The Slave Select Output Control Register */
   	QSPI2_SSOC.U = TempSSOC.U;

    /* Wait for the QSPI to become available */
    while (( QSPI2_STATUS.U & ((uint32)0xFFFU)) != ((uint32)0U) )
    {
    	QSPI2_FLAGSCLEAR.U = (uint32) 0xFFFU;
    }


    /* *********** */
    /* BACON ENTRY */
    /* *********** */

    /* Set up the BACONENTRY register - 0x17A10005U */
    TempBACON.U = (uint32) 0U;
    TempBACON.B.LAST   = (uint8) 1U;		/* .LAST   - 1  == Last Byte */
    TempBACON.B.IPRE   = (uint8) 2U;		/* .IPRE   - 2  == 16 Tbaud2 units */
    TempBACON.B.IDLE   = (uint8) 0U;		/* .IDLE   - 0  == 1 unit of IPRE */
    TempBACON.B.LPRE   = (uint8) 0U;		/* .LPRE   - 0  == 1 Tbaud2 units */
    TempBACON.B.LEAD   = (uint8) 0U;		/* .LEAD   - 0  == 1 unit of LPRE */
    TempBACON.B.TPRE   = (uint8) 0U;		/* .TPRE   - 0  == 1 Tbaud2 units */
    TempBACON.B.TRAIL  = (uint8) 1U;		/* .TRAIL  - 1  == 2 unit of TPRE */
    TempBACON.B.PARTYP = (uint8) 0U;		/* .PARTYP - 0  == Even Parity */
    TempBACON.B.UINT   = (uint8) 0U;		/* .UNIT   - 0  == User Interrupt at the PT1 Event - Disabled */
    TempBACON.B.MSB    = (uint8) 1U;		/* .MSB    - 1  == MSB First */
    TempBACON.B.BYTE   = (uint8) 0U;		/* .BYTE   - 0  == DL defines the data length in bits */
    TempBACON.B.DL     = (uint8) 15U;		/* .DL     - 15 == DL defines the data length in bits (n+1 = 16) */
    TempBACON.B.CS     = (uint8) 1U;		/* .CS     - 1  == Channel 1 Select */

    /* Load The BACON Entry Register */
    QSPI2_BACONENTRY.U = TempBACON.U;


    /* *********** */
    /* ENABLE QSPI */
    /* *********** */

    /* Enable QSPI1 */
    QSPI2_GLOBALCON.B.EN = (uint8) 1U;

	/* transfer all data */
	for (i = 0; i < WDT_CMD_SIZE; ++i)
	{
		/* clear TX flag (before writing) */
		QSPI2_FLAGSCLEAR.U = 1 << 9u;
		/* write new data */
		QSPI2_DATAENTRY0.U = (unsigned int)wdtdiscmd[i];
		/* wait until transfer is complete */
		while (!QSPI2_STATUS.B.TXF)
			;
		/* wait for receive is finished */
		while (!QSPI2_STATUS.B.RXF)
			;
		/* clear RX flag */
		QSPI2_FLAGSCLEAR.U = 1 << 10u;
		/* read and discard value */
		RxVal = QSPI2_RXEXIT.U;
	}

	/* wait until transfer is complete */
	while (!QSPI2_STATUS.B.TXF) { ; }

    /* Clear flag */
	QSPI2_FLAGSCLEAR.U = (((uint32)1U) << 10U);
	QSPI2_FLAGSCLEAR.U = (uint32)(((uint32)1U) << 9U);

}

#endif

/* Disable TLF35584 */
void disable_external_watchdog(void)
{
	int i;
    uint8 Tq;
    float32 Tqf;
    Ifx_QSPI_GLOBALCON TempGLOBALCON;
    Ifx_QSPI_GLOBALCON1 TempGLOBALCON1;
    Ifx_QSPI_ECON TempECON;
    Ifx_QSPI_BACON TempBACON;
    Ifx_QSPI_SSOC TempSSOC;

	/* command sequence for disabling external watchdog */
	const unsigned short wdtdiscmd[WDT_CMD_SIZE] =
	{
		0x8756, 0x87de, 0x86ad, 0x8625,		/* unprotect register (PROTCFG) */
		0x8d27,								/* disable window watchdog */
		0x8A01,								/* disable err pin monitor */
		0x87be, 0x8668, 0x877d, 0x8795		/* protect register (PROTCFG) */
	};

	/* check that this disabling has not been already done (e.g. by the debugger) */
	if (QSPI0_GLOBALCON.B.EN)
	{
		/* don't do it again */
		return;
	}

	/* initialise QSPI0 interface */
	unlock_wdtcon();				/* remove ENDINIT protection */
	QSPI0_CLC.U = 0x8;				/* activate module, disable sleep mode */
	(void)QSPI0_CLC.U;				/* read back to get effective */
	P20_PDR0.U = 0x00000000;		/* fast speed (all pins) */
	QSPI0_PISEL.U = 0;				/* MRIS=0 ==> use MRST0A pin */
	lock_wdtcon();					/* re-enable ENDINIT protection */

	/* configure port pins */
	P20_OUT.B.P13 = 1u;
	P20_OUT.B.P11 = 0u;
	P20_OUT.B.P14 = 1u;
	P20_IOCR12.B.PC13 = 0x10;		/* SLSO2 P20.13 */
	P20_IOCR8.B.PC11 = 0x10;		/* SCLK0 P20.11 */
	P20_IOCR12.B.PC14 = 0x10;		/* MTSR0 P20.14 */


	P20_IOCR12.B.PC13 = 0x13;		/* SLSO2 P20.13 */
	P20_IOCR8.B.PC11 = 0x13;		/* SCLK0 P20.11 */
	P20_IOCR12.B.PC14 = 0x13;		/* MTSR0 P20.14 */
	P20_IOCR12.B.PC12 = 0x02;		/* MRST0 P20.12 */

   	/* Input Pin Selection Option For QSPI0 MRST */
    QSPI0_PISEL.B.MRIS = 0U;  	    /* P20.12 : QSPI0 - MRSTA */

   	/* ******************* */
   	/* BAUD RATE & SETTING */
   	/* ******************* */

    /* Setting for the baud rate: Example for 100KHz */
   	/* Using SCU-CCU-fBAUD2 = 200MHz */
   	/*  Global Clock Divider: */
   	/*  - GLOBALCON.Tq = 49 */
   	/*  Channel Divider */
    /*  - ECONx.Q = 9 */
    /*  Channel Bit Clock Timings: */
    /*  - ECON.A = 1 */
    /*  - ECON.B = 0 */
    /*  - ECON.C = 2 */
   	/* Calculated Baud rate: */
    /*  - fBRz = fBAUD2 / ((TQ+1)(Qz+1)(A + 1 + B + C)) */
    /*  - fBRz = 200,000000 / ((49+1)(9+1)(1 + 1 + 0 + 2)) */
    /*  - fBRz = 200,000000 / 2000 = 100KHz */

    /* (Tq+1) = 200,000,000 / (Qz+1)(A + 1 + B + C))(TargetBaud) */
    /* Tq = (200,000000 / (Qz+1)(A + 1 + B + C))(TargetBaud)) - 1 */
    /* Tq = (200,000000 / ((40 * TargetBaud)) - 1 */
    /* Tq = (5,000000 / TargetBaud)) - 1 */


    /* ********* */
   	/* GLOBALCON */
   	/* ********* */

    /* Work out Tq from the given baud rate */
    Tqf = ( ((float32) 5000000.0f) /  500000ul );
    Tq = (uint8) Tqf;
    if (Tq != 0U)
	{
    	Tq--;
	}


   	/* GLOBALCON Registers */
    TempGLOBALCON.U = (uint32) 0U;
    TempGLOBALCON.B.CLKSEL = (uint8) 1u;	/* Clock is Fper */
    TempGLOBALCON.B.TQ     = (uint8) Tq;	/* Global Time Quantum Length - 49 == /(n+1) == /50 */
    TempGLOBALCON.B.SI     = (uint8) 0U;	/* Status Injection - 0 == disabled */
    TempGLOBALCON.B.EXPECT = (uint8) 15U;	/* Time-Out Value for the Expect Phase == 15 == 2097152 (2^21 = 2 Mega) */
    TempGLOBALCON.B.LB     = (uint8) 0U;	/* Loop-Back Control == 0 == Loop-Back inactive */
    TempGLOBALCON.B.DEL0   = (uint8) 0U;	/* Delayed Mode for SLSO0 == 0 == Delayed mode off */
    TempGLOBALCON.B.STROBE = (uint8) 0U;	/* Strobe Delay for SLSO0 in Delayed Mode == 0 == 1 Tq delay */
    TempGLOBALCON.B.SRF    = (uint8) 0U;	/* Stop on RxFIFO Full == 0U == Feature disabled */
    TempGLOBALCON.B.STIP   = (uint8) 0U;	/* Feature disabled == 0 == MRST = 0 when QSPI is de-selected in Slave Mode */
    TempGLOBALCON.B.EN     = (uint8) 0U;	/* Enable Bit == 0 == PAUSE requested */
    TempGLOBALCON.B.MS     = (uint8) 0U;	/* Master Slave Mode == 0 == Master Transmit and Receive */
    TempGLOBALCON.B.AREN   = (uint8) 0U;	/* Automatic Reset Enable == 0 == disabled */
    TempGLOBALCON.B.RESETS = (uint8) 0U;	/* Bits for resetting sub-modules per software == 0 == No reset triggered */

	/*  Load the GLOBALCON Register */
   	QSPI0_GLOBALCON.U = TempGLOBALCON.U;


   	/* ********** */
	/* GLOBALCON1 */
	/* ********** */

   	/* GLOBALCON Registers - 0x14000000U */
    TempGLOBALCON1.U = (uint32) 0U;
    TempGLOBALCON1.B.ERRORENS  = (uint16) 0U;	/* Error Enable Bits == 0 == All errors disabled */
    TempGLOBALCON1.B.TXEN      = (uint8) 0U;	/* Tx Interrupt Event En == 0 == Disabled */
    TempGLOBALCON1.B.RXEN      = (uint8) 0U;	/* RX Interrupt Event Enable == 0 == Disabled */
    TempGLOBALCON1.B.PT1EN     = (uint8) 0U;	/* Interrupt on PT1 Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.PT2EN     = (uint8) 0U;	/* Interrupt on PT2 Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.USREN     = (uint8) 0U;	/* Interrupt on USR Event Enable == 0 == All errors disabled */
    TempGLOBALCON1.B.TXFIFOINT = (uint8) 0U;	/* Transmit FIFO Interrupt Threshold == 0 == 1 */
    TempGLOBALCON1.B.RXFIFOINT = (uint8) 0U;	/* Receive FIFO Interrupt Threshold == 0 == 0  */
    TempGLOBALCON1.B.PT1       = (uint8) 0U;	/* Phase Transition Event 1 == 0 == BUSY (end of WAIT phase) */
    TempGLOBALCON1.B.PT2       = (uint8) 0U;	/* Phase Transition Event 2 == 0 == BUSY (end of WAIT phase) */
    TempGLOBALCON1.B.TXFM      = (uint8) 1U;	/* TXFIFO Mode == 1 == Single Move Mode */
    TempGLOBALCON1.B.RXFM      = (uint8) 1U;	/* RXFIFO Mode == 1 == Single Move Mode */

	/*  Load the GLOBALCON1 Register */
   	QSPI0_GLOBALCON1.U = TempGLOBALCON1.U;


   	/* *********** */
   	/* ECON ENRTRY */
   	/* *********** */

   	/* ECON Entry */
   	TempECON.U = (uint32) 0U;
	TempECON.B.Q     = (uint8) 9U;		/* Time Quantum - 1 == 2 Tq */
   	TempECON.B.A     = (uint8) 1U;		/* Bit Segment1 - 0 == 1 x Q */
   	TempECON.B.B     = (uint8) 0U;		/* Bit Segment1 - 0 == 1 x Q */
   	TempECON.B.C     = (uint8) 2U;		/* Bit Segment1 - 1 == 1 x Q */
   	TempECON.B.CPH   = (uint8) 0U;		/* Clock Phase - 1 == Delay of one half SCLK clock cycle Enabled */
   	TempECON.B.CPOL  = (uint8) 0U;		/* Clock Polarity - 0 == Idle level of clock. Idle level low */
   	TempECON.B.PAREN = (uint8) 0U;		/* Enable Parity Check - 0 == Disabled */
   	TempECON.B.BE    = (uint8) 0U;		/* Big Endian - Disabled */

   	/* Load one of the ECON Registers (For use with Channel 2 SLSO2) */
   	QSPI0_ECON2.U  = TempECON.U;


   	/* ************ */
   	/* SLAVE SELECT */
   	/* ************ */

   	/* Slave Select Output Control Register - 0x00020000U */
   	TempSSOC.U = (uint32) 0U;
   	TempSSOC.B.AOL = (uint16) 0U;		/* Active Output Level for the SLSO Outputs */
   	TempSSOC.B.OEN = (uint16) 4U;		/* Enable Bits for the SLSO Outputs */

    /* Load The Slave Select Output Control Register */
   	QSPI0_SSOC.U = TempSSOC.U;

    /* Wait for the QSPI to become available */
    while (( QSPI0_STATUS.U & ((uint32)0xFFFU)) != ((uint32)0U) )
    {
    	QSPI0_FLAGSCLEAR.U = (uint32) 0xFFFU;
    }


    /* *********** */
    /* BACON ENTRY */
    /* *********** */

    /* Set up the BACONENTRY register - 0x17A10005U */
    TempBACON.U = (uint32) 0U;
    TempBACON.B.LAST   = (uint8) 1U;		/* .LAST   - 1  == Last Byte */
    TempBACON.B.IPRE   = (uint8) 2U;		/* .IPRE   - 2  == 16 Tbaud2 units */
    TempBACON.B.IDLE   = (uint8) 0U;		/* .IDLE   - 0  == 1 unit of IPRE */
    TempBACON.B.LPRE   = (uint8) 0U;		/* .LPRE   - 0  == 1 Tbaud2 units */
    TempBACON.B.LEAD   = (uint8) 0U;		/* .LEAD   - 0  == 1 unit of LPRE */
    TempBACON.B.TPRE   = (uint8) 0U;		/* .TPRE   - 0  == 1 Tbaud2 units */
    TempBACON.B.TRAIL  = (uint8) 1U;		/* .TRAIL  - 1  == 2 unit of TPRE */
    TempBACON.B.PARTYP = (uint8) 0U;		/* .PARTYP - 0  == Even Parity */
    TempBACON.B.UINT   = (uint8) 0U;		/* .UNIT   - 0  == User Interrupt at the PT1 Event - Disabled */
    TempBACON.B.MSB    = (uint8) 1U;		/* .MSB    - 1  == MSB First */
    TempBACON.B.BYTE   = (uint8) 0U;		/* .BYTE   - 0  == DL defines the data length in bits */
    TempBACON.B.DL     = (uint8) 15U;		/* .DL     - 15 == DL defines the data length in bits (n+1 = 16) */
    TempBACON.B.CS     = (uint8) 2U;		/* .CS     - 2  == Channel 2 Select */

    /* Load The BACON Entry Register */
    QSPI0_BACONENTRY.U = TempBACON.U;


    /* *********** */
    /* ENABLE QSPI */
    /* *********** */

    /* Enable QSPI1 */
    QSPI0_GLOBALCON.B.EN = (uint8) 1U;

	/* transfer all data */
	for (i = 0; i < WDT_CMD_SIZE; ++i)
	{
		/* clear TX flag (before writing) */
		QSPI0_FLAGSCLEAR.U = 1 << 9u;
		/* write new data */
		QSPI0_DATAENTRY0.U = (unsigned int)wdtdiscmd[i];
		/* wait until transfer is complete */
		while (!QSPI0_STATUS.B.TXF)
			;
		/* wait for receive is finished */
		while (!QSPI0_STATUS.B.RXF)
			;
		/* clear RX flag */
		QSPI0_FLAGSCLEAR.U = 1 << 10u;
		/* read and discard value */
		RxVal = QSPI0_RXEXIT.U;
	}

	/* wait until transfer is complete */
	while (!QSPI0_STATUS.B.TXF) { ; }

    /* Clear flag */
	QSPI0_FLAGSCLEAR.U = (((uint32)1U) << 10U);
	QSPI0_FLAGSCLEAR.U = (uint32)(((uint32)1U) << 9U);

}

#endif /* USE_DISABLE_EXT_WDT */

#ifndef SYSTEM_DONT_SET_PLL

/* STM time scaling (for avoiding overflow) */
#define TIME_SCALE_DN		1000
#define TIME_SCALE_UP		(1000000 / TIME_SCALE_DN)

/* wait for <time> micro seconds */
/* beware of overflows: 100 us at (>=)43 MHz will overflow (if not scaled before multiplying) */
static void waitTC375(unsigned int time)
{
	unsigned int fSTM = (unsigned int)SYSTEM_GetStmClock();
	unsigned int stmWaitCount = (fSTM / TIME_SCALE_DN) * time / TIME_SCALE_UP;

	/* prepare compare register */
	STM0_CMP0.U = STM0_TIM0.U + stmWaitCount;
	STM0_CMCON.U = 31;
	/* Attention: keep this order, otherwise first match will trigger too soon */
	/* reset interrupt flag */
	STM0_ISCR.U = (IFX_STM_ISCR_CMP0IRR_MSK << IFX_STM_ISCR_CMP0IRR_OFF);
	/* enable compare match */
	STM0_ICR.B.CMP0EN = 1;
	/* wait for compare match */
	while (0 == STM0_ICR.B.CMP0IR)
		;
	STM0_ICR.B.CMP0EN = 0;
}

static void system_set_pll(const PllInitValue_t *pPllInitValue)
{
	unsigned int k;

#if 0 /* we are currently using the default settings */
	/* ToDo: adapt the correct values for TC3x */
	/* prepare flash waitstates */
	if (pPllInitValue == PLL_VALUE_300_100)
	{
		unlock_wdtcon();
		DMU_HF_PWAIT.B.RECC = (3 - 1);		/* 3 WS for ECC */
		DMU_HF_PWAIT.B.RFLASH = (9 - 1);	/* 9 WS for Flash */
		lock_wdtcon();
	}
	else if (pPllInitValue == PLL_VALUE_200_100)
	{
		unlock_wdtcon();
		DMU_HF_PWAIT.B.RECC = (2 - 1);		/* 2 WS for ECC */
		DMU_HF_PWAIT.B.RFLASH = (6 - 1);	/* 6 WS for Flash */
		lock_wdtcon();
	}
#endif

	unlock_safety_wdtcon();

	/* check whether we are running from backup clock (if not force it to this clock) */
	if (0 != pSCU->CCUCON0.B.CLKSEL)
	{
		Ifx_SCU_CCUCON0 ccucon0 = pSCU->CCUCON0;
		ccucon0.B.CLKSEL	= 0;	/* Select the EVR as fsource0/1/2 for the clock distribution */
		ccucon0.B.UP		= 1;	/* Update the ccucon0 register */

		while (pSCU->CCUCON0.B.LCK)
			;

		pSCU->CCUCON0.U = ccucon0.U;

		while (pSCU->CCUCON0.B.LCK)
			;
	}

	/* check: SYSPLL and PERPLL in powerdown mode; force it */
	if (0 == pSCU->SYSPLLSTAT.B.PWDSTAT)
	{
		/* power down (avoid glitches during update) */
		pSCU->SYSPLLCON0.B.PLLPWD = 0;
		/* wait until power down mode reached */
		while (0 == pSCU->SYSPLLSTAT.B.PWDSTAT)
			;
	}
	if (0 == pSCU->PERPLLSTAT.B.PWDSTAT)
	{
		/* power down (avoid glitches during update) */
		pSCU->PERPLLCON0.B.PLLPWD = 0;
		/* wait until power down mode reached */
		while (0 == pSCU->PERPLLSTAT.B.PWDSTAT)
			;
	}

	/* setup the oscillator */
	pSCU->OSCCON.U = pPllInitValue->valOSCCON;

	lock_safety_wdtcon();

	/* we need some delay here (Ifx sources use 5 ms) */
	/* without this delay startup on TriBoard-TC3x7 is not reliable */
	waitTC375(5000);

	/* wait until PLLLV and PLLHV flags are set */
	while ((pSCU->OSCCON.B.PLLLV == 0) || (pSCU->OSCCON.B.PLLHV == 0))
		;

	unlock_safety_wdtcon();
	/* setup SYSPLL (incl. power up) */
	pSCU->SYSPLLCON0.U = pPllInitValue->valSYSPLLCON0;				/* set P,N divider */
	/* setup PERPLL (incl. power up) */
	pSCU->PERPLLCON0.U = pPllInitValue->valPERPLLCON0;				/* set P,N divider */
	/* wait until power up is finished */
	while ((1 == pSCU->SYSPLLSTAT.B.PWDSTAT) || (1 == pSCU->PERPLLSTAT.B.PWDSTAT))
		;

	/* wait until SYSPLL K2 operation is stable */
	while (0 == pSCU->SYSPLLSTAT.B.K2RDY)
		;
	pSCU->SYSPLLCON1.U =  pPllInitValue->valSYSPLLCON1;				/* set K2 divider */
	/* wait until SYSPLL K2 operation is stable */
	while (0 == pSCU->SYSPLLSTAT.B.K2RDY)
		;

	/* wait until PERPLL K2 and K3 operation is stable */
	while ((0 == pSCU->PERPLLSTAT.B.K2RDY) || (0 == pSCU->PERPLLSTAT.B.K3RDY))
		;
	pSCU->PERPLLCON1.U = pPllInitValue->valPERPLLCON1;				/* set K2,K3 divider */
	/* wait until PERPLL K2 and K3 operation is stable */
	while ((0 == pSCU->PERPLLSTAT.B.K2RDY) || (0 == pSCU->PERPLLSTAT.B.K3RDY))
		;

	/* restart SYSPLL and PERPLL locking (with latest settings) */
	pSCU->SYSPLLCON0.B.RESLD = 1;
	pSCU->PERPLLCON0.B.RESLD = 1;
	/* wait for SYSPLL and PERPLL locked */
	while ((0 == pSCU->SYSPLLSTAT.B.LOCK) || (0 == pSCU->PERPLLSTAT.B.LOCK))
		;

	/* setup CCU dividers */
	while (pSCU->CCUCON1.B.LCK)
		;
	pSCU->CCUCON1.U = pPllInitValue->valCCUCON1;

	while (pSCU->CCUCON2.B.LCK)
		;
	pSCU->CCUCON2.U = pPllInitValue->valCCUCON2;

	while (pSCU->CCUCON0.B.LCK)
		;
	pSCU->CCUCON0.U =  pPllInitValue->valCCUCON0 | (1 << IFX_SCU_CCUCON0_UP_OFF);

	lock_safety_wdtcon();

	/* wait for SYSPLL locked */
	while ((0 == pSCU->SYSPLLSTAT.B.LOCK))
		;

	/* update K dividers for stepping up to final clock */
	k = pSCU->SYSPLLCON1.B.K2DIV;
	/* wait some time (100 us) */
	waitTC375(100);
	while (k > pPllInitValue->finalK)
	{
		Ifx_SCU_SYSPLLCON1 pllcon1 = pSCU->SYSPLLCON1;

		--k;
		/* prepare value to write */
		pllcon1.B.K2DIV = k;
		/* wait until K2 operation is stable */
		while (0 == pSCU->SYSPLLSTAT.B.K2RDY)
			;
		unlock_safety_wdtcon();
		pSCU->SYSPLLCON1 = pllcon1;
		lock_safety_wdtcon();
		/* wait some time (100 us) */
		waitTC375(100);
	}
}
#endif

/*! \brief System initialisation
 *  \param pPllInitValue ... address of PLL initialisation struct
 */
static void SYSTEM_InitExt(const PllInitValue_t *pPllInitValue)
{
#ifndef SYSTEM_DONT_SET_PLL
	/* initialise PLL (only done by CPU0) */
	if (0 == (_mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK))
		system_set_pll(pPllInitValue);
#endif

#ifdef USE_IRQ
	/* activate interrupt system */
	InterruptInit();
#endif /* USE_IRQ */
}

void SYSTEM_Init(void)
{
	SYSTEM_InitExt(DEFAULT_PLL_VALUE);

#if (USE_DISABLE_EXT_WDT == 1)
	disable_external_watchdog();
#endif /* USE_DISABLE_EXT_WDT */
}

unsigned long SYSTEM_GetExtClock(void)
{
	return EXTCLK;
}

static unsigned long system_GetPllClock(void)
{
	unsigned int frequency = EXTCLK;	/* fOSC */

	Ifx_SCU_SYSPLLCON0 pllcon0 = pSCU->SYSPLLCON0;
	Ifx_SCU_SYSPLLCON1 pllcon1 = pSCU->SYSPLLCON1;

	if (1)
	{
		/* normal mode */
		frequency *= (pllcon0.B.NDIV + 1);		/* fOSC*N */
		frequency /= (pllcon0.B.PDIV + 1);		/* .../P  */
		frequency /= (pllcon1.B.K2DIV + 1);		/* .../K2 */
	}

	return (unsigned long)frequency;
}

static unsigned long system_GetIntClock(void)
{
	unsigned long frequency = 0;
	switch (pSCU->CCUCON0.B.CLKSEL)
	{
		default:
		case 0:  /* back-up clock (typ. 100 MHz) */
			frequency = 100000000ul;
			break;
		case 1:	 /* fPLL */
			frequency = system_GetPllClock();
			break;
	}
	return frequency;
}

unsigned long SYSTEM_GetCpuClock(void)
{
	unsigned long frequency = system_GetIntClock();
	/* fCPU = fSRI */
	unsigned long divider = pSCU->CCUCON0.B.SRIDIV;
	unsigned long cpudiv = 0;
	if (0 == divider)
		return 0;
	frequency /= divider;

	/* determine correct CPU<n>DIV field */
	switch ((_mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK))
	{
		case 0 : cpudiv = pSCU->CCUCON6.B.CPU0DIV; break;
		case 1 : cpudiv = pSCU->CCUCON7.B.CPU1DIV; break;
		case 2 : cpudiv = pSCU->CCUCON8.B.CPU2DIV; break;
	}

	if (cpudiv != 0)
	{
		frequency *= (64 - cpudiv);
		frequency /= 64;
	}

	return frequency;
}

unsigned long SYSTEM_GetSysClock(void)
{
	unsigned long frequency = system_GetIntClock();
	unsigned long divider = pSCU->CCUCON0.B.SPBDIV;
	if (0 == divider)
		return 0;
	return (frequency / divider);
}

unsigned long SYSTEM_GetStmClock(void)
{
	unsigned long frequency = system_GetIntClock();
	unsigned long divider = pSCU->CCUCON0.B.STMDIV;
	if (0 == divider)
		return 0;
	return (frequency / divider);
}

unsigned long SYSTEM_GetCanClock(void)
{
	unsigned long frequency = system_GetIntClock();
	unsigned long divider = pSCU->CCUCON1.B.MCANDIV;
	if (0 == divider)
		return 0;
	return (frequency / divider);
}

void SYSTEM_EnableInterrupts(void)
{
	_enable();
}

void SYSTEM_DisableInterrupts(void)
{
	_disable();
}

void SYSTEM_EnableProtection(void)
{
	lock_wdtcon();
}

void SYSTEM_DisableProtection(void)
{
	unlock_wdtcon();
}

void SYSTEM_EnableProtectionExt(int Sel)
{
	if (Sel < MAX_CORES)
		lock_wdtcon();			/* CPU watchdog */
	else
		lock_safety_wdtcon();	/* safety watchdog */
}

void SYSTEM_DisableProtectionExt(int Sel)
{
	if (Sel < MAX_CORES)
		unlock_wdtcon();		/* CPU watchdog */
	else
		unlock_safety_wdtcon();	/* safety watchdog */
}

void SYSTEM_EnableSecProtection(void)
{
	lock_safety_wdtcon();
}

void SYSTEM_DisableSecProtection(void)
{
	unlock_safety_wdtcon();
}


int SYSTEM_Reset(void)
{
	/* AURIX 2G: SCU_SWRSTCON is NOT SE (ONLY E) protected (!?) */
	unlock_wdtcon();
	pSCU->SWRSTCON.B.SWRSTREQ = 1;
	while (1)
		;
	return 0;
}


int SYSTEM_IdleExt(int CoreId)
{
	Ifx_SCU_PMCSR0 *pmcsr = (Ifx_SCU_PMCSR0 *)&pSCU->PMCSR0;

	unlock_wdtcon();
	pmcsr[CoreId].U = 1;	/* request CPU idle mode */
	lock_wdtcon();
	return 0;
}

int SYSTEM_Idle(void)
{
	return SYSTEM_IdleExt(_mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK);
}

int SYSTEM_Sleep(void)
{
	Ifx_SCU_PMCSR0 *pmcsr = (Ifx_SCU_PMCSR0 *)&pSCU->PMCSR0;
	int CoreId = _mfcr(CPU_CORE_ID) & IFX_CPU_CORE_ID_CORE_ID_MSK;

	unlock_wdtcon();
	pmcsr[CoreId].U = 2;	/* request system sleep mode */
	lock_wdtcon();

	return 0;
}


int SYSTEM_IsCacheEnabled(void)
{
	unsigned int ui = _mfcr(CPU_PCON0);
	if (ui & 2)
		return 0;	/* Cache is in bypass mode */
	ui = _mfcr(CPU_PCON2);
	if (0 == (ui & (IFX_CPU_PCON2_PCACHE_SZE_MSK << IFX_CPU_PCON2_PCACHE_SZE_OFF)))
		return 0;	/* Cache size is 0 */
	return 1;
}

void SYSTEM_EnaDisCache(int Enable)
{
	unlock_wdtcon();
	if (Enable)
	{
		_mtcr(CPU_PCON0, 0);
		_mtcr(CPU_DCON0, 0);
	}
	else	/* disable */
	{
		_mtcr(CPU_PCON0, 2);
		_mtcr(CPU_PCON1, 3);
		_mtcr(CPU_DCON0, 2);
	}
	lock_wdtcon();
}

void SYSTEM_DbgBreak(void)
{
#ifdef DEBUG
	__asm volatile ("debug");
#else
	while (1)
		;
#endif
}
