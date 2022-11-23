/**
 \verbatim
 ******************************************************************************
 * Copyright (c) 2015 Hitex UK Ltd. All rights reserved.
 ******************************************************************************
 * Hitex UK Ltd. is supplying this file for use
 * exclusively with Infineon's microcontroller products. This file can be freely
 * distributed within development tools that are supporting such microcontroller
 * products.
 *
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * INFINEON SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL,
 * OR CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************
 \endverbatim
 ******************************************************************************
 *  Project     4269 Auxduino
 * \file 		Vadc.c
 * \brief 	    Vadc initialisation function definition
 * \details     Initialises VADC for spot readings
 * \author      Hitex (UK) Ltd
 * \date        \$LastChangedDate:: 2017-04-05 #$
 * \version     \$Revision: 1383 $
 * \attention   -
 ******************************************************************************
 */

 /*
 ******************************************************************************
 * Standard include files
 ******************************************************************************
 */

/*
 ******************************************************************************
 * Project include files
 ******************************************************************************
 */

/* MISRA RULE 19.15 VIOLATION:  The following exclusion was added because of the
 *                              inclusion of multiple headers, which are the
 *                              same. This could result in redefinitions of
 *                              types causing out of boundary scenarios.
 *                              The violation may only be turned off for header
 *                              files of external units.
 *                              Since all header files are protected against
 *                              multiple inclusion, no redefinitions can occur.
 */
/*lint -save -e537 */
#include "Ifx_Types.h"
#include "IfxCpu_Intrinsics.h"
#include "IfxScuWdt.h"
#include "IfxPort_reg.h"
#include "IfxVadc_reg.h"
#include "IfxSrc_reg.h"
#include "Vadc.h"
/*lint -restore */

/*
 ******************************************************************************
 * Types
 ******************************************************************************
 */


/*
 ******************************************************************************
 * Macro defines
 ******************************************************************************
 */

/*
 ******************************************************************************
 * Variable declarations
 ******************************************************************************
 */

/* Function pointers to individual channel reading functions */
ReadADxFuncsType const ReadADxFuncs[NoOfVadcChannels] = { (ReadADxFuncsType)ReadAD0, (ReadADxFuncsType)ReadAD1, (ReadADxFuncsType)ReadAD2, (ReadADxFuncsType)ReadAD3,
														  (ReadADxFuncsType)ReadAD4, (ReadADxFuncsType)ReadAD5, (ReadADxFuncsType)ReadAD6, (ReadADxFuncsType)ReadAD7,
														  (ReadADxFuncsType)ReadAD8, (ReadADxFuncsType)ReadAD9,	(ReadADxFuncsType)ReadAD10, (ReadADxFuncsType)ReadAD11,
														  (ReadADxFuncsType)ReadAD12,(ReadADxFuncsType)ReadAD13,(ReadADxFuncsType)ReadAD14,(ReadADxFuncsType)ReadAD15,
														  (ReadADxFuncsType)ReadAN26_MB,(ReadADxFuncsType)ReadAN1_S2G1,(ReadADxFuncsType)ReadAN2_S2G1,(ReadADxFuncsType)ReadAN1_S2G2,
														  (ReadADxFuncsType)ReadAN2_S2G2,(ReadADxFuncsType)ReadX2_AN4,(ReadADxFuncsType)ReadX2_AN5,(ReadADxFuncsType)ReadX2_AN6,
														  (ReadADxFuncsType)ReadX2_AN7
														};


/*
 ******************************************************************************
 * Routine implementation
 ******************************************************************************
 */

/**
 ******************************************************************************
 * \brief       Initialise the VADC for ShieldBuddy use
 * \details     Initialise the VADC for ShieldBuddy use with 16channels
 * 				using spot readings
 *
 * \param[in]   None
 * \param[in]   None
 * \param[out]  None
 *
 * \pre         None
 * \post        ADC working and calibrated
 * \attention   -
 ******************************************************************************
 */

void VadcInit(void)
{

	uint8 i;
	uint32 volatile dummy; /* To allow VADC_CLC read back */

    IfxScuWdt_clearCpuEndinit(IfxScuWdt_getCpuWatchdogPassword ());

    /* Load global module registers */
    VADC_CLC.U = 0x0000u; 	/* Enable module clock and ctrl. */
    dummy = VADC_CLC.U; 	/* Read back ensures write oper. */

    IfxScuWdt_setCpuEndinit(IfxScuWdt_getCpuWatchdogPassword ());

    /* Enable converter for group 5  */
    VADC_G5ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */

    /* Enable converter for group 4  */
    VADC_G4ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */
    VADC_G4ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */
    VADC_G3ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */
    VADC_G2ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */
    VADC_G0ARBCFG.U = 0x3u; /* ANONC = 11, analog converter ON */

    VADC_GLOBCFG.U = (1u << 31) /* SUCAL = 1, start-up calib. */ \
    				|(1u << 15) /* DIVWC = 1, enable write    */ \
					| 4 ; // 20MHz, 50ns units of sample time
    				//| 7; // 12.5MHz
    				//| 0x9u; 		/* DIVA = 9 (clock prescaler) = 11.11MHz */

    VADC_G5ARBPR.U = (1u << 26); /* AREN2 = 1, enable arb. slot 2 */
    VADC_G4ARBPR.U = (1u << 26); /* AREN2 = 1, enable arb. slot 2 */
    VADC_G0ARBPR.U = (1u << 26); /* AREN2 = 1, enable arb. slot 2 */
    VADC_G2ARBPR.U = (1u << 26); /* AREN2 = 1, enable arb. slot 2 */
    VADC_G3ARBPR.U = (1u << 26); /* AREN2 = 1, enable arb. slot 2 */

    /* Set default VADC resolution 10 bits */
    analogReadResolution(10u);

    VADC_BRSMR.U = 0x01u; /* ENGT = 1, enable conv. req. */

    /* Wait for calibration */
    while((VADC_G5ARBCFG.U & 0x30000000u) != 0x20000000u);
    while((VADC_G4ARBCFG.U & 0x30000000u) != 0x20000000u);
    while((VADC_G3ARBCFG.U & 0x30000000u) != 0x20000000u);
    while((VADC_G2ARBCFG.U & 0x30000000u) != 0x20000000u);
    while((VADC_G0ARBCFG.U & 0x30000000u) != 0x20000000u);

    /* CALS = 1, CAL = 0: calibr. done */

    /* Make an initial read of all channels */
    for(i = 0 ; i < NoOfVadcChannels; i++)
    {

    	dummy = analogRead(i);

    }
}


/**
 ******************************************************************************
 * \brief       Set VADC Resolution
 * \details     Set the ADC to 8, 10 or 12 bit resolution then
 *
 *
 * \param[in]   uint16 Resolution in bits
 * \param[in]   None
 * \param[out]  None
 *
 * \pre         ADC initialised
 * \post        ADC now at new resolution
 * \attention   Only 8, 10 and 12 inputs are allowed.  Anything else will
 * 				result in 10 bit res.
 ******************************************************************************
 */

void SetVadcRes(uint16 VadcResolution)
{

	VadcResultAlignmentType VadcResultAlignment;
	uint8 VadcSampleSTCS;

	/* Convert from bits to VADC format */
	switch(VadcResolution)
	{
		case 12:
			VadcResolution = VADC_12BitConversion;
			VadcSampleSTCS = Vadc12BitSampleTime; // From experimentation
		break;

		case 10:
			VadcResolution = VADC_10BitConversion;
			VadcSampleSTCS = Vadc10BitSampleTime;
		break;

		case 8:
			VadcResolution = VADC_8BitConversion;
			VadcSampleSTCS = Vadc8BitSampleTime;
		break;

		/* If not 12, 10 or 8 then use 10 bits */
		default:
			VadcResolution = VADC_10BitConversion;
			VadcSampleSTCS = Vadc10BitSampleTime;
		break;
	}


    /* Check whether to right align result based on resolution */
    if(VadcResolution != VADC_12BitConversion)
    {
    	/* 10 or 8-bit conversion so right align */
    	VadcResultAlignment = RightAlign;
    }
    else
    {
    	/* 12 bit so left align */
    	VadcResultAlignment = LeftAlign;

    }

    /* (= background source) */

    /* Set all channels to use the global results reg */
    /* AD8-AD11 */
    VADC_G0CHCTR0.U = (0u << 16) | (VadcResultAlignment << 21); /* Group0.0 RESREG = 0, result reg, right align result. */
    VADC_G0CHCTR1.U = (1u << 16) | (VadcResultAlignment << 21); /* Group0.1 RESREG = 1, result reg. right align result. */
    VADC_G0CHCTR2.U = (2u << 16) | (VadcResultAlignment << 21); /* Group0.2 RESREG = 2, result reg. right align result. */
    VADC_G0CHCTR3.U = (3u << 16) | (VadcResultAlignment << 21); /* Group0.3 RESREG = 3, result reg. right align result. */

    /* AD7-AD0 */
    VADC_G2CHCTR4.U = (4u << 16) | (VadcResultAlignment << 21); /* Group2.4 RESREG = 4, result reg. right align result. */
    VADC_G2CHCTR5.U = (5u << 16) | (VadcResultAlignment << 21); /* Group2.5 RESREG = 5, result reg. right align result. */

    VADC_G3CHCTR0.U = (0u << 16) | (VadcResultAlignment << 21); /* Group3.0 RESREG = 0, result reg. right align result. */
    VADC_G3CHCTR1.U = (1u << 16) | (VadcResultAlignment << 21); /* Group3.1 RESREG = 1, result reg. right align result. */

    VADC_G4CHCTR4.U = (4u << 16) | (VadcResultAlignment << 21); /* Group4.4 RESREG = 4, result reg. right align result. */
    VADC_G4CHCTR5.U = (5u << 16) | (VadcResultAlignment << 21); /* Group4.5 RESREG = 5, result reg. right align result. */
    VADC_G4CHCTR6.U = (6u << 16) | (VadcResultAlignment << 21); /* Group4.6 RESREG = 6, result reg. right align result. */
    VADC_G4CHCTR7.U = (7u << 16) | (VadcResultAlignment << 21); /* Group4.7 RESREG = 7, result reg. right align result. */

    VADC_G5CHCTR4.U = (4u << 16) | (VadcResultAlignment << 21); /* Group5.4 RESREG = 4, result reg. right align result. */
    VADC_G5CHCTR5.U = (5u << 16) | (VadcResultAlignment << 21); /* Group5.5 RESREG = 5, result reg. right align result. */
    VADC_G5CHCTR6.U = (6u << 16) | (VadcResultAlignment << 21); /* Group5.6 RESREG = 6, result reg. right align result. */
    VADC_G5CHCTR7.U = (7u << 16) | (VadcResultAlignment << 21); /* Group5.7 RESREG = 7, result reg. right align result. */

    /* Set conversion resolution */
    VADC_G5ICLASS0.U = (VadcResolution <<8) | VadcSampleSTCS; // One extra Fadci cycle sample time
    VADC_G4ICLASS0.U = (VadcResolution <<8) | VadcSampleSTCS; // One extra Fadci cycle sample time
    VADC_G3ICLASS0.U = (VadcResolution <<8) | VadcSampleSTCS; // One extra Fadci cycle sample time
    VADC_G2ICLASS0.U = (VadcResolution <<8) | VadcSampleSTCS; // One extra Fadci cycle sample time
    VADC_G0ICLASS0.U = (VadcResolution <<8) | VadcSampleSTCS; // One extra Fadci cycle sample time;

}


/*** Functions to read individual channels ***/

/**
 ******************************************************************************
 * \brief       Group of functions to read a single channel using Arduino
 * 				channel naming convention. ReadAD0() to ReadAD15()
 * \details     Reads a single channel specified by user
 *
 * \param[in]   None
 * \param[in]   None
 * \param[out]  Value read from channel
 *
 * \pre         ADC initialised
 * \post        -
 * \attention   These functions convert the channel denoted by the name.
 * 				The boys in Munich would weep if they saw this simplistic use
 * 				of their state of the art ADC.
 ******************************************************************************
 */

/* Introduce a delay to allow ADC busy flag to become valid */
#define WAIT_ADC() _isync();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();_nop();


uint16 ReadAD0(void)
{
	uint16 AdcResult;

	VADC_BRSSEL4.U = 0x80u; 			/* Select CH7 of group 4 for scan */
	VADC_BRSMR.U = 0x201u;  			/* LDEV = 1, generate a load event, ENGT = 1, enable conv. req.  */

	WAIT_ADC();
	while(VADC_G4ARBCFG.U & 0x40000000u )
	{ ; }

	AdcResult = (uint16)VADC_G4RES7.U;  /* Ignore top 16 bits - take result only */
	VADC_BRSSEL4.U = 0x00u; 			/* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD1(void)
{
	uint16 AdcResult;

	VADC_BRSSEL4.U = 0x40u; /* Select CH6 of group 4 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G4ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G4RES6.U;
	VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan  */

	return(AdcResult);

}

uint16 ReadAD2(void)
{
	uint16 AdcResult;

	VADC_BRSSEL4.U = 0x20u; /* Select CH5 of group 4 for scan  */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G4ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G4RES5.U;
	VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD3(void)
{
	uint16 AdcResult;

	VADC_BRSSEL4.U = 0x10u; /* Select CH4 of group 4 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G4ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G4RES4.U;
	VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD4(void)
{
	uint16 AdcResult;

	VADC_BRSSEL3.U = 0x02u; /* Select CH1 of group 3 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G3ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G3RES1.U;
	VADC_BRSSEL3.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD5(void)
{
	uint16 AdcResult;

	VADC_BRSSEL3.U = 0x01u; /* Select CH0 of group 3 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G3ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G3RES0.U;
	VADC_BRSSEL3.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD6(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x20u; /* Select CH5 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES5.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD7(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x10u; /* Select CH4 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES4.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD8(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x08u; /* Select CH3 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES3.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD9(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x04u; /* Select CH2 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES2.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD10(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x02u; /* Select CH1 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES1.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadAD11(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x01u; /* Select CH0 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES0.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAD12(void)
{
	uint16 AdcResult;

	VADC_BRSSEL5.U = 0x10u; /* Select CH4 of group 5 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G5ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G5RES4.U;
	VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAD13(void)
{
	uint16 AdcResult;

	VADC_BRSSEL5.U = 0x20u; /* Select CH5 of group 5 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G5ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G5RES5.U;
	VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAD14(void)
{
	uint16 AdcResult;

	VADC_BRSSEL5.U = 0x40u; /* Select CH6 of group 5 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G5ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G5RES6.U;
	VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAD15(void)
{
	uint16 AdcResult;

	VADC_BRSSEL5.U = 0x80u; /* Select CH7 of group 5 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G5ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G5RES7.U;
	VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}



uint16 ReadAN26_MB(void)
{
	uint16 AdcResult;

	VADC_BRSSEL3.U = 0x04u; /* Select CH2 of group 3 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G3ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G3RES2.U;
	VADC_BRSSEL3.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAN1_S2G1(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x01u; /* Select CH0 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES0.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAN2_S2G1(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x02u; /* Select CH1 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES1.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAN1_S2G2(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x04u; /* Select CH2 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES2.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadAN2_S2G2(void)
{
	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x08u; /* Select CH3 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES3.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadX2_AN4(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x10u; /* Select CH4 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES4.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadX2_AN5(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x20u; /* Select CH5 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES5.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadX2_AN6(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x40u; /* Select CH6 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES6.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}

uint16 ReadX2_AN7(void)
{
	uint16 AdcResult;

	VADC_BRSSEL0.U = 0x80u; /* Select CH7 of group 0 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G0ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G0RES7.U;
	VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}


uint16 ReadCiC2v5Reference(void)
{

	uint16 AdcResult;

	VADC_BRSSEL2.U = 0x01u; /* Select CH0 of group 2 for scan */
	VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
	WAIT_ADC();
	while(VADC_G2ARBCFG.U & 0x40000000u )
	{ ; }
	AdcResult = (uint16)VADC_G2RES0.U;
	VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */

	return(AdcResult);

}



// Not currently used
/* Experimental data reduction ADC read */
uint16 ReadAD0_DR(void)
{
            uint16 AdcResult;
            // VADC_SFR->G[HTX_VADC_GROUP4].RCR[HTX_VADC_RES7].B.DMM = StandardDataReductionMode;       /* = 0 */
            VADC_G4RCR7.B.DMM = (uint8) 0u;

            // VADC_SFR->G[HTX_VADC_GROUP4].RCR[HTX_VADC_RES7].B.DRCTR = Accumulate3Results;            /* = 2 */
            VADC_G4RCR7.B.DRCTR = (uint8) 2u;

            VADC_BRSSEL4.U = 0x80u;                  /* Select CH7 of group 4 for scan */

            do
            {
            	/* LDEV = 1, generate a load event, ENGT = 1, enable conv. req.  */
            	VADC_BRSMR.U = 0x201u;

            	/* Make sure busy flag is valid before trying to read it */
            	while(!(VADC_G4ARBCFG.U & 0x40000000u))
            	{ ; }

            	while(VADC_G4ARBCFG.U & 0x40000000u)
            	{ ; }

            } while (VADC_G4RESD7.B.VF == FALSE);

            /* Ignore top 16 bits - take result only */
            AdcResult = (uint16)VADC_G4RES7.B.RESULT;

            /* Divide by DRC reduction amount */
            AdcResult = AdcResult / (uint16) ((uint16)VADC_G4RCR7.B.DRCTR + (uint16) 1u);

            /* Remove channels from scan */
            VADC_BRSSEL4.U = 0x00u;

            return(AdcResult);
 }



// Not currently used
uint16 ReadAD(uint8 pin)
{

	uint16 AdcResult;

	switch(pin)
	{

		case 0:
		default:
			VADC_BRSSEL4.U = 0x80u; 			/* Select CH7 of group 4 for scan */
			VADC_BRSMR.U = 0x201u;  			/* LDEV = 1, generate a load event, ENGT = 1, enable conv. req.  */
			while(!(VADC_G4ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G4ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G4RES7.U;  /* Ignore top 16 bits - take result only */
			VADC_BRSSEL4.U = 0x00u; 			/* Remove channels from scan */
		break;

		case 1:
			VADC_BRSSEL4.U = 0x40u; /* Select CH6 of group 4 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G4ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G4ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G4RES6.U;
			VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan  */
		break;

		case 2:
			VADC_BRSSEL4.U = 0x20u; /* Select CH5 of group 4 for scan  */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G4ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G4ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G4RES5.U;
			VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan */
		break;

		case 3:
			VADC_BRSSEL4.U = 0x10u; /* Select CH4 of group 4 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G4ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G4ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G4RES4.U;
			VADC_BRSSEL4.U = 0x0u; /* Remove channels from scan */
		break;

		case 4:
			VADC_BRSSEL3.U = 0x02u; /* Select CH1 of group 3 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G3ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G3ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G3RES1.U;
			VADC_BRSSEL3.U = 0x0u; /* Remove channels from scan */
		break;

		case 5:
			VADC_BRSSEL3.U = 0x01u; /* Select CH0 of group 3 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G3ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G3ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G3RES0.U;
			VADC_BRSSEL3.U = 0x0u; /* Remove channels from scan */
		break;

		case 6:
			VADC_BRSSEL2.U = 0x20u; /* Select CH5 of group 2 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G2ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G2ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G2RES5.U;
			VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */
		break;

		case 7:
			VADC_BRSSEL2.U = 0x10u; /* Select CH4 of group 2 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G2ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G2ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G2RES4.U;
			VADC_BRSSEL2.U = 0x0u; /* Remove channels from scan */
		break;

		case 8:
			VADC_BRSSEL0.U = 0x08u; /* Select CH3 of group 0 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G0ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G0ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G0RES3.U;
			VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */
		break;

		case 9:

			VADC_BRSSEL0.U = 0x04u; /* Select CH2 of group 0 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G0ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G0ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G0RES2.U;
			VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */
		break;

		case 10:
			VADC_BRSSEL0.U = 0x02u; /* Select CH1 of group 0 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G0ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G0ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G0RES1.U;
			VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */
		break;

		case 11:
			VADC_BRSSEL0.U = 0x01u; /* Select CH0 of group 0 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G0ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G0ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G0RES0.U;
			VADC_BRSSEL0.U = 0x0u; /* Remove channels from scan */
		break;

		case 12:
			VADC_BRSSEL5.U = 0x10u; /* Select CH4 of group 5 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G5ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G5ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G5RES4.U;
			VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */
		break;

		case 13:

			VADC_BRSSEL5.U = 0x20u; /* Select CH5 of group 5 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G5ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G5ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G5RES5.U;
			VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */
		break;

		case 14:
			VADC_BRSSEL5.U = 0x40u; /* Select CH6 of group 5 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G5ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G5ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G5RES6.U;
			VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */
		break;

		case 15:
			VADC_BRSSEL5.U = 0x80u; /* Select CH7 of group 5 for scan */
			VADC_BRSMR.U = 0x201u;  /* LDEV = 1, generate a load event, ENGT = 1, enable conv. req. */
			while(!(VADC_G5ARBCFG.U & 0x40000000u)) /* Make sure busy flag is valid before trying to read it */
			{ ; }
			while(VADC_G5ARBCFG.U & 0x40000000u )
			{ ; }
			AdcResult = (uint16)VADC_G5RES7.U;
			VADC_BRSSEL5.U = 0x0u; /* Remove channels from scan */
		break;

	}

	return(AdcResult);
}

/* EOF */
/* Template version:    4.0         */
/* Template status:     RELEASED    */
