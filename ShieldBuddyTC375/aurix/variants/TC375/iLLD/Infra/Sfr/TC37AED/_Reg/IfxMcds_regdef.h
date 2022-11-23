/**
 * \file IfxMcds_regdef.h
 * \brief
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
 *
 * Version: TC37XED_TS_V2.5.1.R0
 * Specification: TC3xx Target Specification.V2.5.1
 * MAY BE CHANGED BY USER [yes/no]: No
 *
 *                                 IMPORTANT NOTICE
 *
 *
 * Infineon Technologies AG (Infineon) is supplying this file for use
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
 * \defgroup IfxSfr_Mcds_Registers Mcds Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Mcds_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_union Register unions
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_struct Memory map
 * \ingroup IfxSfr_Mcds_Registers
 */
#ifndef IFXMCDS_REGDEF_H
#define IFXMCDS_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Mcds_Registers_Bitfields
 * \{  */
/** \brief Access Enable Register 0 */
typedef struct _Ifx_MCDS_ACCEN0_Bits
{
    Ifx_UReg_32Bit EN0:1;             /**< \brief [0:0] Access Enable for Master TAG ID 0 - EN0 (rw) */
    Ifx_UReg_32Bit EN1:1;             /**< \brief [1:1] Access Enable for Master TAG ID 1 - EN1 (rw) */
    Ifx_UReg_32Bit EN2:1;             /**< \brief [2:2] Access Enable for Master TAG ID 2 - EN2 (rw) */
    Ifx_UReg_32Bit EN3:1;             /**< \brief [3:3] Access Enable for Master TAG ID 3 - EN3 (rw) */
    Ifx_UReg_32Bit EN4:1;             /**< \brief [4:4] Access Enable for Master TAG ID 4 - EN4 (rw) */
    Ifx_UReg_32Bit EN5:1;             /**< \brief [5:5] Access Enable for Master TAG ID 5 - EN5 (rw) */
    Ifx_UReg_32Bit EN6:1;             /**< \brief [6:6] Access Enable for Master TAG ID 6 - EN6 (rw) */
    Ifx_UReg_32Bit EN7:1;             /**< \brief [7:7] Access Enable for Master TAG ID 7 - EN7 (rw) */
    Ifx_UReg_32Bit EN8:1;             /**< \brief [8:8] Access Enable for Master TAG ID 8 - EN8 (rw) */
    Ifx_UReg_32Bit EN9:1;             /**< \brief [9:9] Access Enable for Master TAG ID 9 - EN9 (rw) */
    Ifx_UReg_32Bit EN10:1;            /**< \brief [10:10] Access Enable for Master TAG ID 10 - EN10 (rw) */
    Ifx_UReg_32Bit EN11:1;            /**< \brief [11:11] Access Enable for Master TAG ID 11 - EN11 (rw) */
    Ifx_UReg_32Bit EN12:1;            /**< \brief [12:12] Access Enable for Master TAG ID 12 - EN12 (rw) */
    Ifx_UReg_32Bit EN13:1;            /**< \brief [13:13] Access Enable for Master TAG ID 13 - EN13 (rw) */
    Ifx_UReg_32Bit EN14:1;            /**< \brief [14:14] Access Enable for Master TAG ID 14 - EN14 (rw) */
    Ifx_UReg_32Bit EN15:1;            /**< \brief [15:15] Access Enable for Master TAG ID 15 - EN15 (rw) */
    Ifx_UReg_32Bit EN16:1;            /**< \brief [16:16] Access Enable for Master TAG ID 16 - EN16 (rw) */
    Ifx_UReg_32Bit EN17:1;            /**< \brief [17:17] Access Enable for Master TAG ID 17 - EN17 (rw) */
    Ifx_UReg_32Bit EN18:1;            /**< \brief [18:18] Access Enable for Master TAG ID 18 - EN18 (rw) */
    Ifx_UReg_32Bit EN19:1;            /**< \brief [19:19] Access Enable for Master TAG ID 19 - EN19 (rw) */
    Ifx_UReg_32Bit EN20:1;            /**< \brief [20:20] Access Enable for Master TAG ID 20 - EN20 (rw) */
    Ifx_UReg_32Bit EN21:1;            /**< \brief [21:21] Access Enable for Master TAG ID 21 - EN21 (rw) */
    Ifx_UReg_32Bit EN22:1;            /**< \brief [22:22] Access Enable for Master TAG ID 22 - EN22 (rw) */
    Ifx_UReg_32Bit EN23:1;            /**< \brief [23:23] Access Enable for Master TAG ID 23 - EN23 (rw) */
    Ifx_UReg_32Bit EN24:1;            /**< \brief [24:24] Access Enable for Master TAG ID 24 - EN24 (rw) */
    Ifx_UReg_32Bit EN25:1;            /**< \brief [25:25] Access Enable for Master TAG ID 25 - EN25 (rw) */
    Ifx_UReg_32Bit EN26:1;            /**< \brief [26:26] Access Enable for Master TAG ID 26 - EN26 (rw) */
    Ifx_UReg_32Bit EN27:1;            /**< \brief [27:27] Access Enable for Master TAG ID 27 - EN27 (rw) */
    Ifx_UReg_32Bit EN28:1;            /**< \brief [28:28] Access Enable for Master TAG ID 28 - EN28 (rw) */
    Ifx_UReg_32Bit EN29:1;            /**< \brief [29:29] Access Enable for Master TAG ID 29 - EN29 (rw) */
    Ifx_UReg_32Bit EN30:1;            /**< \brief [30:30] Access Enable for Master TAG ID 30 - EN30 (rw) */
    Ifx_UReg_32Bit EN31:1;            /**< \brief [31:31] Access Enable for Master TAG ID 31 - EN31 (rw) */
} Ifx_MCDS_ACCEN0_Bits;

/** \brief Access Enable Register 1 */
typedef struct _Ifx_MCDS_ACCEN1_Bits
{
    Ifx_UReg_32Bit reserved_0:32;     /**< \brief [31:0] \internal Reserved */
} Ifx_MCDS_ACCEN1_Bits;

/** \brief Clock Control Register */
typedef struct _Ifx_MCDS_CLC_Bits
{
    Ifx_Strict_32Bit DISR:1;          /**< \brief [0:0] Disable Request Bit - DISR (rw) */
    Ifx_Strict_32Bit DISS:1;          /**< \brief [1:1] Disable Status Bit - DISS (rh) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_CLC_Bits;

/** \brief MCDS Control Register */
typedef struct _Ifx_MCDS_CT_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit KOK:1;           /**< \brief [5:5] Key OK Flag - KOK (rh) */
    Ifx_Strict_32Bit CLRK:1;          /**< \brief [6:6] Clear Key OK Flag - CLRK (w) */
    Ifx_Strict_32Bit KAV:1;           /**< \brief [7:7] Key Available Flag - KAV (rh) */
    Ifx_Strict_32Bit reserved_8:5;    /**< \brief [12:8] \internal Reserved */
    Ifx_Strict_32Bit EN:1;            /**< \brief [13:13] MCDS Enable Flag - EN (rh) */
    Ifx_Strict_32Bit CLRE:1;          /**< \brief [14:14] Clear MCDS Enable Flag - CLRE (w) */
    Ifx_Strict_32Bit SETE:1;          /**< \brief [15:15] Set MCDS Enable Flag - SETE (w) */
    Ifx_Strict_32Bit BED:1;           /**< \brief [16:16] Bus Error Disable Flag - BED (rw) */
    Ifx_Strict_32Bit reserved_17:2;    /**< \brief [18:17] \internal Reserved */
    Ifx_Strict_32Bit BED_P:1;         /**< \brief [19:19] Bus Error Disable Protection - BED_P (w) */
    Ifx_Strict_32Bit reserved_20:1;    /**< \brief [20:20] \internal Reserved */
    Ifx_Strict_32Bit IRA:1;           /**< \brief [21:21] Invalid Read Access Flag - IRA (rh) */
    Ifx_Strict_32Bit CLRI:1;          /**< \brief [22:22] Clear Invalid Access Bits - CLRI (w) */
    Ifx_Strict_32Bit IWA:1;           /**< \brief [23:23] Invalid Write Access Flag - IWA (rh) */
    Ifx_Strict_32Bit reserved_24:5;    /**< \brief [28:24] \internal Reserved */
    Ifx_Strict_32Bit RES:1;           /**< \brief [29:29] MCDS ResetFlag - RES (rh) */
    Ifx_Strict_32Bit reserved_30:1;    /**< \brief [30:30] \internal Reserved */
    Ifx_Strict_32Bit SETR:1;          /**< \brief [31:31] MCDS ResetRequest Bit - SETR (w) */
} Ifx_MCDS_CT_Bits;

/** \brief Trace Buffer Bottom Register */
typedef struct _Ifx_MCDS_FIFOBOT_Bits
{
    Ifx_Strict_32Bit reserved_0:12;    /**< \brief [11:0] \internal Reserved */
    Ifx_Strict_32Bit BOTTOM:9;        /**< \brief [20:12] Trace Buffer lower Bound - BOTTOM (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOBOT_Bits;

/** \brief Trace Buffer Control Register */
typedef struct _Ifx_MCDS_FIFOCTL_Bits
{
    Ifx_Strict_32Bit TRG:1;           /**< \brief [0:0] Trigger Received Flag - TRG (rh) */
    Ifx_Strict_32Bit FFE:1;           /**< \brief [1:1] FIFO Feeder Empty - FFE (rh) */
    Ifx_Strict_32Bit TME:1;           /**< \brief [2:2] Trace Buffer Access Error - TME (rh) */
    Ifx_Strict_32Bit reserved_3:4;    /**< \brief [6:3] \internal Reserved */
    Ifx_Strict_32Bit DMC_MODE:1;      /**< \brief [7:7] Message sorting algorithm - DMC_MODE (rw) */
    Ifx_Strict_32Bit DMC_MODE_P:1;    /**< \brief [8:8] DMC Mode write protection - DMC_MODE_P (w) */
    Ifx_Strict_32Bit TRDIS:1;         /**< \brief [9:9] Trigger DisableFlag - TRDIS (rh) */
    Ifx_Strict_32Bit TRON:1;          /**< \brief [10:10] ClearTrigger DisableFlag - TRON (w) */
    Ifx_Strict_32Bit TROFF:1;         /**< \brief [11:11] SetTrigger DisableFlag - TROFF (w) */
    Ifx_Strict_32Bit reserved_12:1;    /**< \brief [12:12] \internal Reserved */
    Ifx_Strict_32Bit FLSH:1;          /**< \brief [13:13] FlushFlag - FLSH (rh) */
    Ifx_Strict_32Bit CLR:1;           /**< \brief [14:14] ClearFlushFlag - CLR (w) */
    Ifx_Strict_32Bit SET:1;           /**< \brief [15:15] SetFlushFlag - SET (w) */
    Ifx_Strict_32Bit NTN:1;           /**< \brief [16:16] Next Tile Now request - NTN (w) */
    Ifx_Strict_32Bit reserved_17:7;    /**< \brief [23:17] \internal Reserved */
    Ifx_Strict_32Bit CTTO:7;          /**< \brief [30:24] Continuous Trace Time Out - CTTO (rw) */
    Ifx_Strict_32Bit CTTO_P:1;        /**< \brief [31:31] CTTO write protection - CTTO_P (w) */
} Ifx_MCDS_FIFOCTL_Bits;

/** \brief Trace Buffer Write Pointer */
typedef struct _Ifx_MCDS_FIFONOW_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit NOW:16;          /**< \brief [20:5] Trace Buffer Current Write Pointer - NOW (rh) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFONOW_Bits;

/** \brief Trace Buffer Captured Write Pointer */
typedef struct _Ifx_MCDS_FIFONTNOW_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit NTNOW:16;        /**< \brief [20:5] Trace Buffer Captured Write Pointer - NTNOW (rh) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFONTNOW_Bits;

/** \brief FIFO Overflow Counter Register */
typedef struct _Ifx_MCDS_FIFOOVRCNT_Bits
{
    Ifx_Strict_32Bit COUNT:8;         /**< \brief [7:0] FIFO Overflow Counter - COUNT (rh) */
    Ifx_Strict_32Bit reserved_8:7;    /**< \brief [14:8] \internal Reserved */
    Ifx_Strict_32Bit CLR:1;           /**< \brief [15:15] Clear counter - CLR (w) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_FIFOOVRCNT_Bits;

/** \brief Trace Buffer PRE/POST Register */
typedef struct _Ifx_MCDS_FIFOPRE_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit PRE:16;          /**< \brief [20:5] Trace Buffer Pre-Trigger Area Size - PRE (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOPRE_Bits;

/** \brief Trace Buffer Top Register */
typedef struct _Ifx_MCDS_FIFOTOP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit TOP:16;          /**< \brief [20:5] Trace Buffer upper Bound - TOP (rw) */
    Ifx_Strict_32Bit reserved_21:11;    /**< \brief [31:21] \internal Reserved */
} Ifx_MCDS_FIFOTOP_Bits;

/** \brief Trace Buffer Comparator Register */
typedef struct _Ifx_MCDS_FIFOWARN_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit WARN:16;         /**< \brief [20:5] Trace Buffer Warn Level - WARN (rw) */
    Ifx_Strict_32Bit reserved_21:9;    /**< \brief [29:21] \internal Reserved */
    Ifx_Strict_32Bit OCDEN:1;         /**< \brief [30:30] Enable Trigger Output - OCDEN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Enable Trigger Generation - EN (rw) */
} Ifx_MCDS_FIFOWARN_Bits;

/** \brief Module Identification Register */
typedef struct _Ifx_MCDS_ID_Bits
{
    Ifx_Strict_32Bit MOD_REV:8;       /**< \brief [7:0] Module Revision - MOD_REV (r) */
    Ifx_Strict_32Bit MOD_TYPE:8;      /**< \brief [15:8] Module Type - MOD_TYPE (r) */
    Ifx_Strict_32Bit MOD_NUMBER:16;    /**< \brief [31:16] Module Number - MOD_NUMBER (r) */
} Ifx_MCDS_ID_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_MCXACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_MCXACT_Bits;

/** \brief Counter Control Register */
typedef struct _Ifx_MCDS_MCXCCL_Bits
{
    Ifx_Strict_32Bit INC0:7;          /**< \brief [6:0] Count Input Selector - INC0 (rw) */
    Ifx_Strict_32Bit ILV0:1;          /**< \brief [7:7] Count Input Level Mode - ILV0 (rw) */
    Ifx_Strict_32Bit CLR0:6;          /**< \brief [13:8] Clear Input Selector - CLR0 (rw) */
    Ifx_Strict_32Bit reserved_14:1;    /**< \brief [14:14] \internal Reserved */
    Ifx_Strict_32Bit CLV0:1;          /**< \brief [15:15] Clear Input Level Mode - CLV0 (rw) */
    Ifx_Strict_32Bit INC1:7;          /**< \brief [22:16] Count Input Selector - INC1 (rw) */
    Ifx_Strict_32Bit ILV1:1;          /**< \brief [23:23] Count Input Level Mode - ILV1 (rw) */
    Ifx_Strict_32Bit CLR1:6;          /**< \brief [29:24] Clear Input Selector - CLR1 (rw) */
    Ifx_Strict_32Bit reserved_30:1;    /**< \brief [30:30] \internal Reserved */
    Ifx_Strict_32Bit CLV1:1;          /**< \brief [31:31] Clear Input Level Mode - CLV1 (rw) */
} Ifx_MCDS_MCXCCL_Bits;

/** \brief Current Count Register */
typedef struct _Ifx_MCDS_MCXCNT_Bits
{
    Ifx_Strict_32Bit COUNT:16;        /**< \brief [15:0] Current Counter - COUNT (rh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_MCXCNT_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_MCXEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_MCXEVT_Bits;

/** \brief Counter Limit Register */
typedef struct _Ifx_MCDS_MCXLMT_Bits
{
    Ifx_Strict_32Bit LIMIT:16;        /**< \brief [15:0] Counter Limit - LIMIT (rw) */
    Ifx_Strict_32Bit reserved_16:14;    /**< \brief [29:16] \internal Reserved */
    Ifx_Strict_32Bit MOD0:1;          /**< \brief [30:30] Modulo Count Control - MOD0 (rw) */
    Ifx_Strict_32Bit MOD1:1;          /**< \brief [31:31] Modulo Count Control - MOD1 (rw) */
} Ifx_MCDS_MCXLMT_Bits;

/** \brief Performance Counter Configuration Register */
typedef struct _Ifx_MCDS_MCXPERFCFG_Bits
{
    Ifx_Strict_32Bit DFLASH_MASTER:4;    /**< \brief [3:0] DFLASH access Master ID comparator bit mask - DFLASH_MASTER (rw) */
    Ifx_Strict_32Bit reserved_4:3;    /**< \brief [6:4] \internal Reserved */
    Ifx_Strict_32Bit DFLASH_MASTER_EN:1;    /**< \brief [7:7] DFLASH access Master ID comparator enable - DFLASH_MASTER_EN (rw) */
    Ifx_Strict_32Bit PFLASH_MASTER:4;    /**< \brief [11:8] PFLASH access Master ID comparator bit mask - PFLASH_MASTER (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit PFLASH_MASTER_EN:1;    /**< \brief [15:15] PFLASH access Master ID comparator enable - PFLASH_MASTER_EN (rw) */
    Ifx_Strict_32Bit PFLASH_ACC_EN:1;    /**< \brief [16:16] PFLASH access (trigger information) enable - PFLASH_ACC_EN (rw) */
    Ifx_Strict_32Bit PFLASH_WAIT_EN:1;    /**< \brief [17:17] PFLASH wait for prefetch buffer (trigger information) enable - PFLASH_WAIT_EN (rw) */
    Ifx_Strict_32Bit PFLASH_PRE_EN:1;    /**< \brief [18:18] PFLASH access hit prefetch buffer (trigger information) enable - PFLASH_PRE_EN (rw) */
    Ifx_Strict_32Bit PFLASH_LINE_EN:1;    /**< \brief [19:19] PFLASH access hit read line buffer (trigger information) enable - PFLASH_LINE_EN (rw) */
    Ifx_Strict_32Bit CPUMEM_MASTER:4;    /**< \brief [23:20] CPUMEM access Master ID comparator bit mask - CPUMEM_MASTER (rw) */
    Ifx_Strict_32Bit reserved_24:3;    /**< \brief [26:24] \internal Reserved */
    Ifx_Strict_32Bit CPUMEM_MASTER_EN:1;    /**< \brief [27:27] CPUMEM access Master ID comparator enable - CPUMEM_MASTER_EN (rw) */
    Ifx_Strict_32Bit PSPR_HIT_EN:1;    /**< \brief [28:28] PSPR access hit (trigger information) enable - PSPR_HIT_EN (rw) */
    Ifx_Strict_32Bit DSPR_HIT_EN:1;    /**< \brief [29:29] DSPR access hit (trigger information) enable - DSPR_HIT_EN (rw) */
    Ifx_Strict_32Bit DLMU_HIT_EN:1;    /**< \brief [30:30] DLMU access hit (trigger information) enable - DLMU_HIT_EN (rw) */
    Ifx_Strict_32Bit reserved_31:1;    /**< \brief [31:31] \internal Reserved */
} Ifx_MCDS_MCXPERFCFG_Bits;

/** \brief MCDS Signal Source Control */
typedef struct _Ifx_MCDS_MUX_Bits
{
    Ifx_Strict_32Bit TMUX0:4;         /**< \brief [3:0] Trace Source Select 0 - TMUX0 (rw) */
    Ifx_Strict_32Bit reserved_4:3;    /**< \brief [6:4] \internal Reserved */
    Ifx_Strict_32Bit TM0_P:1;         /**< \brief [7:7] Trace Source Select 0 Protection - TM0_P (w) */
    Ifx_Strict_32Bit TMUX1:4;         /**< \brief [11:8] Trace Source Select 1 - TMUX1 (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit TM1_P:1;         /**< \brief [15:15] Trace Source Select 1 Protection - TM1_P (w) */
    Ifx_Strict_32Bit TMUX2:4;         /**< \brief [19:16] Trace Source Select 2 - TMUX2 (rw) */
    Ifx_Strict_32Bit reserved_20:3;    /**< \brief [22:20] \internal Reserved */
    Ifx_Strict_32Bit TM2_P:1;         /**< \brief [23:23] Trace Source Select 2 Protection - TM2_P (w) */
    Ifx_Strict_32Bit TMUX3:4;         /**< \brief [27:24] Trace Source Select 3 - TMUX3 (rw) */
    Ifx_Strict_32Bit POBZ_TC_EN:1;    /**< \brief [28:28] Enable POBz Trace Source - POBz_TC_EN (rw) */
    Ifx_Strict_32Bit reserved_29:1;    /**< \brief [29:29] \internal Reserved */
    Ifx_Strict_32Bit POBZ_TC_EN_P:1;    /**< \brief [30:30] Enable POBz Trace Source Protection - POBz_TC_EN_P (w) */
    Ifx_Strict_32Bit TM3_P:1;         /**< \brief [31:31] Trace Source Select 3 Protection - TM3_P (w) */
} Ifx_MCDS_MUX_Bits;

/** \brief MCDS_TC Signal Source Control */
typedef struct _Ifx_MCDS_MUX_TC_RC_Bits
{
    Ifx_Strict_32Bit TC_MUX0:2;       /**< \brief [1:0] TC_MUX Trace Source Select - TC_MUX0 (rw) */
    Ifx_Strict_32Bit TC_MUX1:2;       /**< \brief [3:2] TC_MUX Trace Source Select - TC_MUX1 (rw) */
    Ifx_Strict_32Bit TC_MUX2:2;       /**< \brief [5:4] TC_MUX Trace Source Select - TC_MUX2 (rw) */
    Ifx_Strict_32Bit TC_MUX3:2;       /**< \brief [7:6] TC_MUX Trace Source Select - TC_MUX3 (rw) */
    Ifx_Strict_32Bit TC_MUX4:2;       /**< \brief [9:8] TC_MUX Trace Source Select - TC_MUX4 (rw) */
    Ifx_Strict_32Bit TC_MUX5:2;       /**< \brief [11:10] TC_MUX Trace Source Select - TC_MUX5 (rw) */
    Ifx_Strict_32Bit reserved_12:3;    /**< \brief [14:12] \internal Reserved */
    Ifx_Strict_32Bit TC_TM_P:1;       /**< \brief [15:15] TC_MUX Trace Source Select Protection - TC_TM_P (w) */
    Ifx_Strict_32Bit reserved_16:8;    /**< \brief [23:16] \internal Reserved */
    Ifx_Strict_32Bit RC:1;            /**< \brief [24:24] Reference Clock Select - RC (rw) */
    Ifx_Strict_32Bit reserved_25:2;    /**< \brief [26:25] \internal Reserved */
    Ifx_Strict_32Bit RC_P:1;          /**< \brief [27:27] Reference Clock Select Protection - RC_P (w) */
    Ifx_Strict_32Bit reserved_28:4;    /**< \brief [31:28] \internal Reserved */
} Ifx_MCDS_MUX_TC_RC_Bits;

/** \brief OCDS Control and Status */
typedef struct _Ifx_MCDS_OCS_Bits
{
    Ifx_Strict_32Bit reserved_0:24;    /**< \brief [23:0] \internal Reserved */
    Ifx_Strict_32Bit SUS:4;           /**< \brief [27:24] OCDS Suspend Control - SUS (rw) */
    Ifx_Strict_32Bit SUS_P:1;         /**< \brief [28:28] SUS Write Protection - SUS_P (w) */
    Ifx_Strict_32Bit SUSSTA:1;        /**< \brief [29:29] Suspend State(inverted busy_o) - SUSSTA (rh) */
    Ifx_Strict_32Bit reserved_30:2;    /**< \brief [31:30] \internal Reserved */
} Ifx_MCDS_OCS_Bits;

/** \brief Session ID High Register */
typedef struct _Ifx_MCDS_SESSIDH_Bits
{
    Ifx_Strict_32Bit KEY_63_32:32;    /**< \brief [31:0] Key High Word (bits [63:32]) - KEY_63_32 (w) */
} Ifx_MCDS_SESSIDH_Bits;

/** \brief Session ID Low Register */
typedef struct _Ifx_MCDS_SESSIDL_Bits
{
    Ifx_Strict_32Bit KEY_31_0:32;     /**< \brief [31:0] Key Low Word (bits [31:0]) - KEY_31_0 (w) */
} Ifx_MCDS_SESSIDL_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SPBACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SPBACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SPBACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SPBACRNG_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_SPBACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_SPBACT_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_SPBDCSTS_Bits
{
    Ifx_Strict_32Bit EI:1;            /**< \brief [0:0] System ENDINIT Protection Flag - EI (rh) */
    Ifx_Strict_32Bit SUS:1;           /**< \brief [1:1] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit ERR:1;           /**< \brief [2:2] Error Flag - ERR (rh) */
    Ifx_Strict_32Bit RTY:1;           /**< \brief [3:3] Retry Flag - RTY (rh) */
    Ifx_Strict_32Bit SYSRES:1;        /**< \brief [4:4] System Reset Flag - SYSRES (rh) */
    Ifx_Strict_32Bit APPRES:1;        /**< \brief [5:5] Application Reset Flag - APPRES (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [7:6] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit SAFEEI:1;        /**< \brief [8:8] Safety ENDINIT Protection Flag - SAFEEI (rh) */
    Ifx_Strict_32Bit SLEEP:1;         /**< \brief [9:9] SLEEP Request Flag - SLEEP (rh) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_MCDS_SPBDCSTS_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBEABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SPBEABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBEARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SPBEARNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_SPBEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_SPBEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SPBWDBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Data Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SPBWDBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SPBWDMSK_Bits
{
    Ifx_Strict_32Bit MASK:32;         /**< \brief [31:0] Data Comparator bit mask - MASK (rw) */
} Ifx_MCDS_SPBWDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SPBWDRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Data Comparator range size - RANGE (rw) */
} Ifx_MCDS_SPBWDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SPBWDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:5;          /**< \brief [4:0] Bit number (1\u202631) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_5:9;    /**< \brief [13:5] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SPBWDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1ACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI1ACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1ACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SRI1ACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1ACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI1ACRNG_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_SRI1BALBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI1BALBND_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_SRI1BALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_SRI1BALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_SRI1BALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_SRI1BALLUTD_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_SRI1BALMAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_SRI1BALMAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_SRI1BALRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_SRI1BALRNG_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_SRI1DTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_SRI1DTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1EABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI1EABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1EARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SRI1EARNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDBND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_SRI1WDBND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDHBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_SRI1WDHBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDHMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_SRI1WDHMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDHRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_SRI1WDHRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDMSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_SRI1WDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDRNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_SRI1WDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SRI1WDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SRI1WDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2ACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI2ACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2ACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_SRI2ACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2ACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_SRI2ACRNG_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_SRI2BALBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI2BALBND_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_SRI2BALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_SRI2BALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_SRI2BALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_SRI2BALLUTD_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_SRI2BALMAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_SRI2BALMAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_SRI2BALRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_SRI2BALRNG_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_SRI2DTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_SRI2DTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2EABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_SRI2EABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2EARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_SRI2EARNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDBND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_SRI2WDBND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDHBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_SRI2WDHBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDHMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_SRI2WDHMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDHRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_SRI2WDHRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDMSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_SRI2WDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDRNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_SRI2WDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_SRI2WDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_SRI2WDSGN_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_SRIACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_SRIACT_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_SRIDCSTS_Bits
{
    Ifx_Strict_32Bit EI:1;            /**< \brief [0:0] System ENDINIT Protection Flag - EI (rh) */
    Ifx_Strict_32Bit SUS:1;           /**< \brief [1:1] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit ERR:1;           /**< \brief [2:2] Error Flag - ERR (rh) */
    Ifx_Strict_32Bit reserved_3:1;    /**< \brief [3:3] \internal Reserved */
    Ifx_Strict_32Bit SYSRES:1;        /**< \brief [4:4] System Reset Flag - SYSRES (rh) */
    Ifx_Strict_32Bit APPRES:1;        /**< \brief [5:5] Application Reset Flag - APPRES (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [7:6] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit SAFEEI:1;        /**< \brief [8:8] Safety ENDINIT Protection Flag - SAFEEI (rh) */
    Ifx_Strict_32Bit SLEEP:1;         /**< \brief [9:9] SLEEP Request Flag - SLEEP (rh) */
    Ifx_Strict_32Bit reserved_10:22;    /**< \brief [31:10] \internal Reserved */
} Ifx_MCDS_SRIDCSTS_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_SRIEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_SRIEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCXACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCXACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCXACRNG_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCXACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCXACT_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCXCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCXCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCXCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCXCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCXCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCXDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCXDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCXDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCXDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXEABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXEABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXEARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCXEARNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCXEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCXEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXIDBND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXIDBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXIDMSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXIDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXIDRNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCXIDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCXIDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCXIDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXIPBND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXIPBND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXIPRNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCXIPRNG_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCXPALBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCXPALBND_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCXPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCXPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCXPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCXPALLUTD_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCXPALMAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCXPALMAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCXPALRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCXPALRNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXWDBND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCXWDBND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCXWDHBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCXWDHBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXWDHMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCXWDHMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXWDHRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCXWDHRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCXWDMSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCXWDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCXWDRNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCXWDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCXWDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCXWDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCYACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCYACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCYACRNG_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCYACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCYACT_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCYCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCYCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCYCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCYCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCYCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCYDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCYDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCYDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCYDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYEABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYEABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYEARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCYEARNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCYEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCYEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYIDBND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYIDBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYIDMSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYIDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYIDRNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCYIDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCYIDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCYIDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYIPBND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYIPBND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYIPRNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCYIPRNG_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCYPALBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCYPALBND_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCYPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCYPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCYPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCYPALLUTD_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCYPALMAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCYPALMAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCYPALRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCYPALRNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYWDBND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCYWDBND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCYWDHBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCYWDHBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYWDHMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCYWDHMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYWDHRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCYWDHRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCYWDMSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCYWDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCYWDRNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCYWDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCYWDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCYWDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZACBND_Bits
{
    Ifx_Strict_32Bit BOUND:14;        /**< \brief [13:0] Mode Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCZACBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZACMSK_Bits
{
    Ifx_Strict_32Bit SVM:1;           /**< \brief [0:0] Comparator bit mask for Supervisor Mode - SVM (rw) */
    Ifx_Strict_32Bit MASTER:4;        /**< \brief [4:1] Comparator bit mask for Master ID - MASTER (rw) */
    Ifx_Strict_32Bit SUBCHANNEL:7;    /**< \brief [11:5] Comparator bit mask for Sub-channel ID - SUBCHANNEL (rw) */
    Ifx_Strict_32Bit WR:1;            /**< \brief [12:12] Comparator bit mask for Direction Write - WR (rw) */
    Ifx_Strict_32Bit RD:1;            /**< \brief [13:13] Comparator bit mask for Direction Read - RD (rw) */
    Ifx_Strict_32Bit MSK:1;           /**< \brief [14:14] Bit mask for Transaction Type - MSK (rw) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCZACMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZACRNG_Bits
{
    Ifx_Strict_32Bit RANGE:14;        /**< \brief [13:0] Mode Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_14:18;    /**< \brief [31:14] \internal Reserved */
} Ifx_MCDS_TCZACRNG_Bits;

/** \brief Action Definition Register ${x} */
typedef struct _Ifx_MCDS_TCZACT_Bits
{
    Ifx_Strict_32Bit AIS0:5;          /**< \brief [4:0] Action Input Selector - AIS0 (rw) */
    Ifx_Strict_32Bit AIQ0:2;          /**< \brief [6:5] Action Input Qualifier - AIQ0 (rw) */
    Ifx_Strict_32Bit LV0:1;           /**< \brief [7:7] Action Input Level Mode - LV0 (rw) */
    Ifx_Strict_32Bit AIS1:5;          /**< \brief [12:8] Action Input Selector - AIS1 (rw) */
    Ifx_Strict_32Bit AIQ1:2;          /**< \brief [14:13] Action Input Qualifier - AIQ1 (rw) */
    Ifx_Strict_32Bit LV1:1;           /**< \brief [15:15] Action Input Level Mode - LV1 (rw) */
    Ifx_Strict_32Bit AIS2:5;          /**< \brief [20:16] Action Input Selector - AIS2 (rw) */
    Ifx_Strict_32Bit AIQ2:2;          /**< \brief [22:21] Action Input Qualifier - AIQ2 (rw) */
    Ifx_Strict_32Bit LV2:1;           /**< \brief [23:23] Action Input Level Mode - LV2 (rw) */
    Ifx_Strict_32Bit AIS3:5;          /**< \brief [28:24] Action Input Selector - AIS3 (rw) */
    Ifx_Strict_32Bit AIQ3:2;          /**< \brief [30:29] Action Input Qualifier - AIQ3 (rw) */
    Ifx_Strict_32Bit LV3:1;           /**< \brief [31:31] Action Input Level Mode - LV3 (rw) */
} Ifx_MCDS_TCZACT_Bits;

/** \brief Compact Function Trace Register */
typedef struct _Ifx_MCDS_TCZCFT_Bits
{
    Ifx_Strict_32Bit VSHRT_FCT:10;    /**< \brief [9:0] Length of very short leaf function - VSHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_10:6;    /**< \brief [15:10] \internal Reserved */
    Ifx_Strict_32Bit SHRT_FCT:10;     /**< \brief [25:16] Length of short leaf function - SHRT_FCT (rw) */
    Ifx_Strict_32Bit reserved_26:6;    /**< \brief [31:26] \internal Reserved */
} Ifx_MCDS_TCZCFT_Bits;

/** \brief Current Process ID */
typedef struct _Ifx_MCDS_TCZCID_Bits
{
    Ifx_Strict_32Bit CURRENT:3;       /**< \brief [2:0] Current Process ID - CURRENT (rh) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZCID_Bits;

/** \brief Current Instruction Pointer */
typedef struct _Ifx_MCDS_TCZCIP_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit CURRENT:31;      /**< \brief [31:1] Current Instruction Pointer - CURRENT (rh) */
} Ifx_MCDS_TCZCIP_Bits;

/** \brief Debug Status Register */
typedef struct _Ifx_MCDS_TCZDCSTS_Bits
{
    Ifx_Strict_32Bit SUS:1;           /**< \brief [0:0] Suspended Flag - SUS (rh) */
    Ifx_Strict_32Bit IDLE:1;          /**< \brief [1:1] Run Flag - IDLE (rh) */
    Ifx_Strict_32Bit HALT:1;          /**< \brief [2:2] Halted Flag - HALT (rh) */
    Ifx_Strict_32Bit ISR:1;           /**< \brief [3:3] Interrupt Service Flag - ISR (rh) */
    Ifx_Strict_32Bit HBRK:1;          /**< \brief [4:4] Hardware Break Flag - HBRK (rh) */
    Ifx_Strict_32Bit SBRK:1;          /**< \brief [5:5] Software Break Flag - SBRK (rh) */
    Ifx_Strict_32Bit reserved_6:1;    /**< \brief [6:6] \internal Reserved */
    Ifx_Strict_32Bit IEN:1;           /**< \brief [7:7] Interrupt Enable Flag - IEN (rh) */
    Ifx_Strict_32Bit DBGEN:1;         /**< \brief [8:8] Debug Enabled Flag - DBGEN (rh) */
    Ifx_Strict_32Bit CLKDIV:2;        /**< \brief [10:9] Current Clock Divider - CLKDIV (rh) */
    Ifx_Strict_32Bit NESTED_ISR:4;    /**< \brief [14:11] Nested Interrupt Level - NESTED_ISR (rh) */
    Ifx_Strict_32Bit reserved_15:17;    /**< \brief [31:15] \internal Reserved */
} Ifx_MCDS_TCZDCSTS_Bits;

/** \brief DTU FIFOs Fill Level */
typedef struct _Ifx_MCDS_TCZDTUFLV_Bits
{
    Ifx_Strict_32Bit CURLVL0:4;       /**< \brief [3:0] Current DTU0 FIFO Fill Level - CURLVL0 (rh) */
    Ifx_Strict_32Bit MAXLVL0:4;       /**< \brief [7:4] Maximum DTU0 FIFO Fill Level - MAXLVL0 (rwh) */
    Ifx_Strict_32Bit CURLVL1:4;       /**< \brief [11:8] Current DTU1 FIFO Fill Level - CURLVL1 (rh) */
    Ifx_Strict_32Bit MAXLVL1:4;       /**< \brief [15:12] Maximum DTU1 FIFO Fill Level - MAXLVL1 (rwh) */
    Ifx_Strict_32Bit reserved_16:16;    /**< \brief [31:16] \internal Reserved */
} Ifx_MCDS_TCZDTUFLV_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZEABND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Address Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZEABND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZEARNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Address Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCZEARNG_Bits;

/** \brief Event Definition Register ${x} */
typedef struct _Ifx_MCDS_TCZEVT_Bits
{
    Ifx_Strict_32Bit EIQ0:2;          /**< \brief [1:0] Event Input Qualifier - EIQ0 (rw) */
    Ifx_Strict_32Bit EIQ1:2;          /**< \brief [3:2] Event Input Qualifier - EIQ1 (rw) */
    Ifx_Strict_32Bit EIQ2:2;          /**< \brief [5:4] Event Input Qualifier - EIQ2 (rw) */
    Ifx_Strict_32Bit EIQ3:2;          /**< \brief [7:6] Event Input Qualifier - EIQ3 (rw) */
    Ifx_Strict_32Bit EIQ4:2;          /**< \brief [9:8] Event Input Qualifier - EIQ4 (rw) */
    Ifx_Strict_32Bit EIQ5:2;          /**< \brief [11:10] Event Input Qualifier - EIQ5 (rw) */
    Ifx_Strict_32Bit EIQ6:2;          /**< \brief [13:12] Event Input Qualifier - EIQ6 (rw) */
    Ifx_Strict_32Bit EIQ7:2;          /**< \brief [15:14] Event Input Qualifier - EIQ7 (rw) */
    Ifx_Strict_32Bit EIQ8:2;          /**< \brief [17:16] Event Input Qualifier - EIQ8 (rw) */
    Ifx_Strict_32Bit EIQ9:2;          /**< \brief [19:18] Event Input Qualifier - EIQ9 (rw) */
    Ifx_Strict_32Bit EIQ10:2;         /**< \brief [21:20] Event Input Qualifier - EIQ10 (rw) */
    Ifx_Strict_32Bit EIQ11:2;         /**< \brief [23:22] Event Input Qualifier - EIQ11 (rw) */
    Ifx_Strict_32Bit EIQ12:2;         /**< \brief [25:24] Event Input Qualifier - EIQ12 (rw) */
    Ifx_Strict_32Bit EIQ13:2;         /**< \brief [27:26] Event Input Qualifier - EIQ13 (rw) */
    Ifx_Strict_32Bit EIQ14:2;         /**< \brief [29:28] Event Input Qualifier - EIQ14 (rw) */
    Ifx_Strict_32Bit EIQ15:2;         /**< \brief [31:30] Event Input Qualifier - EIQ15 (rw) */
} Ifx_MCDS_TCZEVT_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZIDBND_Bits
{
    Ifx_Strict_32Bit BOUND:3;         /**< \brief [2:0] Process ID Comparator range lower bound - BOUND (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZIDBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZIDMSK_Bits
{
    Ifx_Strict_32Bit MASK:3;          /**< \brief [2:0] Process ID Comparator bit mask - MASK (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZIDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZIDRNG_Bits
{
    Ifx_Strict_32Bit RANGE:3;         /**< \brief [2:0] Process ID Comparator range size - RANGE (rw) */
    Ifx_Strict_32Bit reserved_3:29;    /**< \brief [31:3] \internal Reserved */
} Ifx_MCDS_TCZIDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCZIDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:2;          /**< \brief [1:0] Bit number (1..2) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_2:30;    /**< \brief [31:2] \internal Reserved */
} Ifx_MCDS_TCZIDSGN_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZIPBND_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit BOUND:31;        /**< \brief [31:1] IP Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZIPBND_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZIPRNG_Bits
{
    Ifx_Strict_32Bit reserved_0:1;    /**< \brief [0:0] \internal Reserved */
    Ifx_Strict_32Bit RANGE:31;        /**< \brief [31:1] IP Comparator range size - RANGE (rw) */
} Ifx_MCDS_TCZIPRNG_Bits;

/** \brief Lookup Table Base Register */
typedef struct _Ifx_MCDS_TCZPALBND_Bits
{
    Ifx_Strict_32Bit BOUND:32;        /**< \brief [31:0] Comparator range lower bound - BOUND (rw) */
} Ifx_MCDS_TCZPALBND_Bits;

/** \brief Lookup Table Address Register */
typedef struct _Ifx_MCDS_TCZPALLUTA_Bits
{
    Ifx_Strict_32Bit reserved_0:2;    /**< \brief [1:0] \internal Reserved */
    Ifx_Strict_32Bit ADDR:10;         /**< \brief [11:2] Address pointer - ADDR (rwh) */
    Ifx_Strict_32Bit reserved_12:20;    /**< \brief [31:12] \internal Reserved */
} Ifx_MCDS_TCZPALLUTA_Bits;

/** \brief Lookup Table Data Register */
typedef struct _Ifx_MCDS_TCZPALLUTD_Bits
{
    Ifx_Strict_32Bit DATA:32;         /**< \brief [31:0] Data transfer register - DATA (rw) */
} Ifx_MCDS_TCZPALLUTD_Bits;

/** \brief Lookup Table Mapping Register */
typedef struct _Ifx_MCDS_TCZPALMAP_Bits
{
    Ifx_Strict_32Bit reserved_0:5;    /**< \brief [4:0] \internal Reserved */
    Ifx_Strict_32Bit OFFSET:10;       /**< \brief [14:5] Lookup table location in RAM - OFFSET (rw) */
    Ifx_Strict_32Bit reserved_15:13;    /**< \brief [27:15] \internal Reserved */
    Ifx_Strict_32Bit GRAIN:3;         /**< \brief [30:28] Lookup table granularity - GRAIN (rw) */
    Ifx_Strict_32Bit EN:1;            /**< \brief [31:31] Lookup table active - EN (rw) */
} Ifx_MCDS_TCZPALMAP_Bits;

/** \brief Lookup Table Range Register */
typedef struct _Ifx_MCDS_TCZPALRNG_Bits
{
    Ifx_Strict_32Bit RANGE:32;        /**< \brief [31:0] Lookup table range size - RANGE (rw) */
} Ifx_MCDS_TCZPALRNG_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZWDBND_Bits
{
    Ifx_Strict_32Bit BOUND_31_0:32;    /**< \brief [31:0] Data Comparator range lower bound - BOUND_31_0 (rw) */
} Ifx_MCDS_TCZWDBND_Bits;

/** \brief Comparator Bound Register ${x} */
typedef struct _Ifx_MCDS_TCZWDHBND_Bits
{
    Ifx_Strict_32Bit BOUND_63_32:32;    /**< \brief [31:0] Data Comparator range lower bound high word - BOUND_63_32 (rw) */
} Ifx_MCDS_TCZWDHBND_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZWDHMSK_Bits
{
    Ifx_Strict_32Bit MASK_63_32:32;    /**< \brief [31:0] Data Comparator bit mask high word - MASK_63_32 (rw) */
} Ifx_MCDS_TCZWDHMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZWDHRNG_Bits
{
    Ifx_Strict_32Bit RANGE_63_32:32;    /**< \brief [31:0] Data Comparator range size high word - RANGE_63_32 (rw) */
} Ifx_MCDS_TCZWDHRNG_Bits;

/** \brief Comparator Mask Register ${x} */
typedef struct _Ifx_MCDS_TCZWDMSK_Bits
{
    Ifx_Strict_32Bit MASK_31_0:32;    /**< \brief [31:0] Data Comparator bit mask - MASK_31_0 (rw) */
} Ifx_MCDS_TCZWDMSK_Bits;

/** \brief Comparator Range Register ${x} */
typedef struct _Ifx_MCDS_TCZWDRNG_Bits
{
    Ifx_Strict_32Bit RANGE_31_0:32;    /**< \brief [31:0] Data Comparator range size - RANGE_31_0 (rw) */
} Ifx_MCDS_TCZWDRNG_Bits;

/** \brief Comparator Sign Register ${x} */
typedef struct _Ifx_MCDS_TCZWDSGN_Bits
{
    Ifx_Strict_32Bit SIGN:6;          /**< \brief [5:0] Bit number (1\u202663) of sign bit - SIGN (rw) */
    Ifx_Strict_32Bit reserved_6:8;    /**< \brief [13:6] \internal Reserved */
    Ifx_Strict_32Bit EITHER:1;        /**< \brief [14:14] RANGE matching either side of BOUND - EITHER (rw) */
    Ifx_Strict_32Bit BELOW:1;         /**< \brief [15:15] RANGE matching lower side of BOUND - BELOW (rw) */
    Ifx_Strict_32Bit RELOAD:4;        /**< \brief [19:16] Reload Event Selector - RELOAD (rw) */
    Ifx_Strict_32Bit reserved_20:12;    /**< \brief [31:20] \internal Reserved */
} Ifx_MCDS_TCZWDSGN_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MCDS_TSUEMUCNT_Bits
{
    Ifx_Strict_32Bit COUNT:32;        /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MCDS_TSUEMUCNT_Bits;

/** \brief Clock Prescaler Register */
typedef struct _Ifx_MCDS_TSUPRSCL_Bits
{
    Ifx_Strict_32Bit RELOAD:32;       /**< \brief [31:0] Prescaler Reload Value - RELOAD (rw) */
} Ifx_MCDS_TSUPRSCL_Bits;

/** \brief Clock Counter Register */
typedef struct _Ifx_MCDS_TSUREFCNT_Bits
{
    Ifx_Strict_32Bit COUNT:32;        /**< \brief [31:0] Current Count Value - COUNT (rh) */
} Ifx_MCDS_TSUREFCNT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_mcds_Registers_union
 * \{   */
/** \brief Access Enable Register 0   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ACCEN0_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_ACCEN0;

/** \brief Access Enable Register 1   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ACCEN1_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_ACCEN1;

/** \brief Clock Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_CLC_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_CLC;

/** \brief MCDS Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_CT_Bits B;               /**< \brief Bitfield access */
} Ifx_MCDS_CT;

/** \brief Trace Buffer Bottom Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOBOT_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOBOT;

/** \brief Trace Buffer Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOCTL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOCTL;

/** \brief Trace Buffer Write Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFONOW_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFONOW;

/** \brief Trace Buffer Captured Write Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFONTNOW_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_FIFONTNOW;

/** \brief FIFO Overflow Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOOVRCNT_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_FIFOOVRCNT;

/** \brief Trace Buffer PRE/POST Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOPRE_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOPRE;

/** \brief Trace Buffer Top Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOTOP_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_FIFOTOP;

/** \brief Trace Buffer Comparator Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_FIFOWARN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_FIFOWARN;

/** \brief Module Identification Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_ID_Bits B;               /**< \brief Bitfield access */
} Ifx_MCDS_ID;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXACT;

/** \brief Counter Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXCCL_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXCCL;

/** \brief Current Count Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXCNT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXCNT;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXEVT;

/** \brief Counter Limit Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXLMT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_MCXLMT;

/** \brief Performance Counter Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MCXPERFCFG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_MCXPERFCFG;

/** \brief MCDS Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MUX_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_MUX;

/** \brief MCDS_TC Signal Source Control   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_MUX_TC_RC_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_MUX_TC_RC;

/** \brief OCDS Control and Status   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_OCS_Bits B;              /**< \brief Bitfield access */
} Ifx_MCDS_OCS;

/** \brief Session ID High Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SESSIDH_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_SESSIDH;

/** \brief Session ID Low Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SESSIDL_Bits B;          /**< \brief Bitfield access */
} Ifx_MCDS_SESSIDL;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBACBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBACMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBACRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBACRNG;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SPBACT;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBDCSTS;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEABND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBEABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEARNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBEARNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SPBEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBWDBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBWDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBWDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SPBWDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SPBWDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1ACBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1ACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1ACMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1ACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1ACRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1ACRNG;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALBND;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALLUTA_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALLUTD_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALLUTD;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALMAP_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALMAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1BALRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1BALRNG;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1DTUFLV_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1DTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1EABND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1EABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1EARNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1EARNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDBND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDHBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDHBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDHMSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDHMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDHRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDHRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI1WDSGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI1WDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2ACBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2ACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2ACMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2ACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2ACRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2ACRNG;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALBND;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALLUTA_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALLUTD_Bits B;      /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALLUTD;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALMAP_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALMAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2BALRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2BALRNG;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2DTUFLV_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2DTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2EABND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2EABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2EARNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2EARNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDBND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDHBND_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDHBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDHMSK_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDHMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDHRNG_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDHRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRI2WDSGN_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_SRI2WDSGN;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SRIACT;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_SRIDCSTS;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_SRIEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_SRIEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXACBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXACMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXACRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXACRNG;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXACT;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEABND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXEABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEARNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXEARNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCXEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIDBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIPBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIPBND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXIPRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXIPRNG;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALBND;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALLUTD;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALMAP_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALMAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXPALRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXPALRNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDBND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDHBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDHBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDHMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDHMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDHRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDHRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCXWDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCXWDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYACBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYACMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYACRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYACRNG;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYACT;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEABND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYEABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEARNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYEARNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCYEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIDBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIPBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIPBND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYIPRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYIPRNG;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALBND;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALLUTD;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALMAP_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALMAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYPALRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYPALRNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDBND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDHBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDHBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDHMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDHMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDHRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDHRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCYWDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCYWDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZACBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZACBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZACMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZACMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZACRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZACRNG;

/** \brief Action Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZACT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZACT;

/** \brief Compact Function Trace Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCFT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCFT;

/** \brief Current Process ID   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCID_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCID;

/** \brief Current Instruction Pointer   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZCIP_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZCIP;

/** \brief Debug Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZDCSTS_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZDCSTS;

/** \brief DTU FIFOs Fill Level   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZDTUFLV_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZDTUFLV;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEABND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZEABND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEARNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZEARNG;

/** \brief Event Definition Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZEVT_Bits B;           /**< \brief Bitfield access */
} Ifx_MCDS_TCZEVT;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIDBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIDSGN;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIPBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIPBND;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZIPRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZIPRNG;

/** \brief Lookup Table Base Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALBND;

/** \brief Lookup Table Address Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALLUTA_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALLUTA;

/** \brief Lookup Table Data Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALLUTD_Bits B;       /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALLUTD;

/** \brief Lookup Table Mapping Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALMAP_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALMAP;

/** \brief Lookup Table Range Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZPALRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZPALRNG;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDBND_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDBND;

/** \brief Comparator Bound Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDHBND_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDHBND;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDHMSK_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDHMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDHRNG_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDHRNG;

/** \brief Comparator Mask Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDMSK_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDMSK;

/** \brief Comparator Range Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDRNG_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDRNG;

/** \brief Comparator Sign Register ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TCZWDSGN_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TCZWDSGN;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUEMUCNT_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TSUEMUCNT;

/** \brief Clock Prescaler Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUPRSCL_Bits B;         /**< \brief Bitfield access */
} Ifx_MCDS_TSUPRSCL;

/** \brief Clock Counter Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_MCDS_TSUREFCNT_Bits B;        /**< \brief Bitfield access */
} Ifx_MCDS_TSUREFCNT;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief MCDS object */
typedef volatile struct _Ifx_MCDS
{
       Ifx_MCDS_CLC                        CLC;                    /**< \brief 0, Clock Control Register*/
       Ifx_MCDS_OCS                        OCS;                    /**< \brief 4, OCDS Control and Status*/
       Ifx_MCDS_ID                         ID;                     /**< \brief 8, Module Identification Register*/
       Ifx_UReg_8Bit                       reserved_C[4];          /**< \brief C, \internal Reserved */
       Ifx_MCDS_CT                         CT;                     /**< \brief 10, MCDS Control Register*/
       Ifx_MCDS_MUX                        MUX;                    /**< \brief 14, MCDS Signal Source Control*/
       Ifx_MCDS_SESSIDL                    SESSIDL;                /**< \brief 18, Session ID Low Register*/
       Ifx_MCDS_SESSIDH                    SESSIDH;                /**< \brief 1C, Session ID High Register*/
       Ifx_MCDS_MUX_TC_RC                  MUX_TC_RC;              /**< \brief 20, MCDS_TC Signal Source Control*/
       Ifx_UReg_8Bit                       reserved_24[212];       /**< \brief 24, \internal Reserved */
       Ifx_MCDS_ACCEN1                     ACCEN1;                 /**< \brief F8, Access Enable Register 1*/
       Ifx_MCDS_ACCEN0                     ACCEN0;                 /**< \brief FC, Access Enable Register 0*/
       Ifx_UReg_8Bit                       reserved_100[256];      /**< \brief 100, \internal Reserved */
       Ifx_MCDS_FIFONOW                    FIFONOW;                /**< \brief 200, Trace Buffer Write Pointer*/
       Ifx_MCDS_FIFOBOT                    FIFOBOT;                /**< \brief 204, Trace Buffer Bottom Register*/
       Ifx_MCDS_FIFOPRE                    FIFOPRE;                /**< \brief 208, Trace Buffer PRE/POST Register*/
       Ifx_MCDS_FIFOTOP                    FIFOTOP;                /**< \brief 20C, Trace Buffer Top Register*/
       Ifx_MCDS_FIFOCTL                    FIFOCTL;                /**< \brief 210, Trace Buffer Control Register*/
       Ifx_MCDS_FIFOWARN                   FIFOWARN[2];            /**< \brief 214, Trace Buffer Comparator Register*/
       Ifx_MCDS_FIFOOVRCNT                 FIFOOVRCNT;             /**< \brief 21C, FIFO Overflow Counter Register*/
       Ifx_MCDS_FIFONTNOW                  FIFONTNOW;              /**< \brief 220, Trace Buffer Captured Write Pointer*/
       Ifx_UReg_8Bit                       reserved_224[476];      /**< \brief 224, \internal Reserved */
       Ifx_MCDS_TSUREFCNT                  TSUREFCNT;              /**< \brief 400, Clock Counter Register*/
       Ifx_MCDS_TSUPRSCL                   TSUPRSCL;               /**< \brief 404, Clock Prescaler Register*/
       Ifx_MCDS_TSUEMUCNT                  TSUEMUCNT;              /**< \brief 408, Clock Counter Register*/
       Ifx_UReg_8Bit                       reserved_40C[1012];     /**< \brief 40C, \internal Reserved */
       Ifx_MCDS_MCXEVT                     MCXEVT[24];             /**< \brief 800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_860[32];       /**< \brief 860, \internal Reserved */
       Ifx_MCDS_MCXACT                     MCXACT[81];             /**< \brief 880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_9C4[60];       /**< \brief 9C4, \internal Reserved */
       Ifx_MCDS_MCXCCL                     MCXCCL[32];             /**< \brief A00, */
       Ifx_MCDS_MCXLMT                     MCXLMT[32];             /**< \brief A04, */
       Ifx_MCDS_MCXCNT                     MCXCNT[32];             /**< \brief A08, */
       Ifx_MCDS_MCXPERFCFG                 MCXPERFCFG;             /**< \brief C00, Performance Counter Configuration Register*/
       Ifx_UReg_8Bit                       reserved_C04[5116];     /**< \brief C04, \internal Reserved */
       Ifx_MCDS_TCXDCSTS                   TCXDCSTS;               /**< \brief 2000, Debug Status Register*/
       Ifx_MCDS_TCXCID                     TCXCID;                 /**< \brief 2004, Current Process ID*/
       Ifx_MCDS_TCXCIP                     TCXCIP;                 /**< \brief 2008, Current Instruction Pointer*/
       Ifx_MCDS_TCXCFT                     TCXCFT;                 /**< \brief 200C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_2010[496];     /**< \brief 2010, \internal Reserved */
       Ifx_MCDS_TCXPALLUTD                 TCXPALLUTD;             /**< \brief 2200, Lookup Table Data Register*/
       Ifx_MCDS_TCXPALLUTA                 TCXPALLUTA;             /**< \brief 2204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_2208[8];       /**< \brief 2208, \internal Reserved */
       Ifx_MCDS_TCXPALBND                  TCXPALBND[4];           /**< \brief 2210, */
       Ifx_MCDS_TCXPALRNG                  TCXPALRNG[4];           /**< \brief 2214, */
       Ifx_MCDS_TCXPALMAP                  TCXPALMAP[4];           /**< \brief 2218, */
       Ifx_UReg_8Bit                       reserved_2258[424];     /**< \brief 2258, \internal Reserved */
       Ifx_MCDS_TCXEABND                   TCXEABND[8];            /**< \brief 2400, */
       Ifx_MCDS_TCXEARNG                   TCXEARNG[8];            /**< \brief 2404, */
       Ifx_MCDS_TCXWDBND                   TCXWDBND[4];            /**< \brief 2480, */
       Ifx_MCDS_TCXWDHBND                  TCXWDHBND[4];           /**< \brief 2484, */
       Ifx_MCDS_TCXWDRNG                   TCXWDRNG[4];            /**< \brief 2488, */
       Ifx_MCDS_TCXWDHRNG                  TCXWDHRNG[4];           /**< \brief 248C, */
       Ifx_MCDS_TCXWDMSK                   TCXWDMSK[4];            /**< \brief 2490, */
       Ifx_MCDS_TCXWDHMSK                  TCXWDHMSK[4];           /**< \brief 2494, */
       Ifx_MCDS_TCXWDSGN                   TCXWDSGN[4];            /**< \brief 249C, */
       Ifx_MCDS_TCXACBND                   TCXACBND[4];            /**< \brief 2500, */
       Ifx_MCDS_TCXACRNG                   TCXACRNG[4];            /**< \brief 2504, */
       Ifx_MCDS_TCXACMSK                   TCXACMSK[4];            /**< \brief 2508, */
       Ifx_UReg_8Bit                       reserved_2548[56];      /**< \brief 2548, \internal Reserved */
       Ifx_MCDS_TCXDTUFLV                  TCXDTUFLV;              /**< \brief 2580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_2584[636];     /**< \brief 2584, \internal Reserved */
       Ifx_MCDS_TCXEVT                     TCXEVT[16];             /**< \brief 2800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_2840[64];      /**< \brief 2840, \internal Reserved */
       Ifx_MCDS_TCXACT                     TCXACT[24];             /**< \brief 2880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_28E0[800];     /**< \brief 28E0, \internal Reserved */
       Ifx_MCDS_TCXIDBND                   TCXIDBND[2];            /**< \brief 2C00, */
       Ifx_MCDS_TCXIDRNG                   TCXIDRNG[2];            /**< \brief 2C04, */
       Ifx_MCDS_TCXIDMSK                   TCXIDMSK[2];            /**< \brief 2C08, */
       Ifx_MCDS_TCXIDSGN                   TCXIDSGN[2];            /**< \brief 2C0C, */
       Ifx_UReg_8Bit                       reserved_2C2C[980];     /**< \brief 2C2C, \internal Reserved */
       Ifx_MCDS_TCXIPBND                   TCXIPBND[6];            /**< \brief 3000, */
       Ifx_MCDS_TCXIPRNG                   TCXIPRNG[6];            /**< \brief 3004, */
       Ifx_UReg_8Bit                       reserved_3064[3996];    /**< \brief 3064, \internal Reserved */
       Ifx_MCDS_TCYDCSTS                   TCYDCSTS;               /**< \brief 4000, Debug Status Register*/
       Ifx_MCDS_TCYCID                     TCYCID;                 /**< \brief 4004, Current Process ID*/
       Ifx_MCDS_TCYCIP                     TCYCIP;                 /**< \brief 4008, Current Instruction Pointer*/
       Ifx_MCDS_TCYCFT                     TCYCFT;                 /**< \brief 400C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_4010[496];     /**< \brief 4010, \internal Reserved */
       Ifx_MCDS_TCYPALLUTD                 TCYPALLUTD;             /**< \brief 4200, Lookup Table Data Register*/
       Ifx_MCDS_TCYPALLUTA                 TCYPALLUTA;             /**< \brief 4204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_4208[8];       /**< \brief 4208, \internal Reserved */
       Ifx_MCDS_TCYPALBND                  TCYPALBND[4];           /**< \brief 4210, */
       Ifx_MCDS_TCYPALRNG                  TCYPALRNG[4];           /**< \brief 4214, */
       Ifx_MCDS_TCYPALMAP                  TCYPALMAP[4];           /**< \brief 4218, */
       Ifx_UReg_8Bit                       reserved_4258[424];     /**< \brief 4258, \internal Reserved */
       Ifx_MCDS_TCYEABND                   TCYEABND[8];            /**< \brief 4400, */
       Ifx_MCDS_TCYEARNG                   TCYEARNG[8];            /**< \brief 4404, */
       Ifx_MCDS_TCYWDBND                   TCYWDBND[4];            /**< \brief 4480, */
       Ifx_MCDS_TCYWDHBND                  TCYWDHBND[4];           /**< \brief 4484, */
       Ifx_MCDS_TCYWDRNG                   TCYWDRNG[4];            /**< \brief 4488, */
       Ifx_MCDS_TCYWDHRNG                  TCYWDHRNG[4];           /**< \brief 448C, */
       Ifx_MCDS_TCYWDMSK                   TCYWDMSK[4];            /**< \brief 4490, */
       Ifx_MCDS_TCYWDHMSK                  TCYWDHMSK[4];           /**< \brief 4494, */
       Ifx_MCDS_TCYWDSGN                   TCYWDSGN[4];            /**< \brief 449C, */
       Ifx_MCDS_TCYACBND                   TCYACBND[4];            /**< \brief 4500, */
       Ifx_MCDS_TCYACRNG                   TCYACRNG[4];            /**< \brief 4504, */
       Ifx_MCDS_TCYACMSK                   TCYACMSK[4];            /**< \brief 4508, */
       Ifx_UReg_8Bit                       reserved_4548[56];      /**< \brief 4548, \internal Reserved */
       Ifx_MCDS_TCYDTUFLV                  TCYDTUFLV;              /**< \brief 4580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_4584[636];     /**< \brief 4584, \internal Reserved */
       Ifx_MCDS_TCYEVT                     TCYEVT[16];             /**< \brief 4800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_4840[64];      /**< \brief 4840, \internal Reserved */
       Ifx_MCDS_TCYACT                     TCYACT[24];             /**< \brief 4880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_48E0[800];     /**< \brief 48E0, \internal Reserved */
       Ifx_MCDS_TCYIDBND                   TCYIDBND[2];            /**< \brief 4C00, */
       Ifx_MCDS_TCYIDRNG                   TCYIDRNG[2];            /**< \brief 4C04, */
       Ifx_MCDS_TCYIDMSK                   TCYIDMSK[2];            /**< \brief 4C08, */
       Ifx_MCDS_TCYIDSGN                   TCYIDSGN[2];            /**< \brief 4C0C, */
       Ifx_UReg_8Bit                       reserved_4C2C[980];     /**< \brief 4C2C, \internal Reserved */
       Ifx_MCDS_TCYIPBND                   TCYIPBND[6];            /**< \brief 5000, */
       Ifx_MCDS_TCYIPRNG                   TCYIPRNG[6];            /**< \brief 5004, */
       Ifx_UReg_8Bit                       reserved_5064[3996];    /**< \brief 5064, \internal Reserved */
       Ifx_MCDS_SPBDCSTS                   SPBDCSTS;               /**< \brief 6000, Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_6004[1020];    /**< \brief 6004, \internal Reserved */
       Ifx_MCDS_SPBEABND                   SPBEABND[4];            /**< \brief 6400, */
       Ifx_MCDS_SPBEARNG                   SPBEARNG[4];            /**< \brief 6404, */
       Ifx_UReg_8Bit                       reserved_6444[60];      /**< \brief 6444, \internal Reserved */
       Ifx_MCDS_SPBWDBND                   SPBWDBND[4];            /**< \brief 6480, */
       Ifx_MCDS_SPBWDRNG                   SPBWDRNG[4];            /**< \brief 6484, */
       Ifx_MCDS_SPBWDMSK                   SPBWDMSK[4];            /**< \brief 6488, */
       Ifx_MCDS_SPBWDSGN                   SPBWDSGN[4];            /**< \brief 648C, */
       Ifx_UReg_8Bit                       reserved_64CC[52];      /**< \brief 64CC, \internal Reserved */
       Ifx_MCDS_SPBACBND                   SPBACBND[4];            /**< \brief 6500, */
       Ifx_MCDS_SPBACRNG                   SPBACRNG[4];            /**< \brief 6504, */
       Ifx_MCDS_SPBACMSK                   SPBACMSK[4];            /**< \brief 6508, */
       Ifx_UReg_8Bit                       reserved_6548[696];     /**< \brief 6548, \internal Reserved */
       Ifx_MCDS_SPBEVT                     SPBEVT[16];             /**< \brief 6800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_6840[64];      /**< \brief 6840, \internal Reserved */
       Ifx_MCDS_SPBACT                     SPBACT[15];             /**< \brief 6880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_68BC[1860];    /**< \brief 68BC, \internal Reserved */
       Ifx_MCDS_SRIDCSTS                   SRIDCSTS;               /**< \brief 7000, Debug Status Register*/
       Ifx_UReg_8Bit                       reserved_7004[508];     /**< \brief 7004, \internal Reserved */
       Ifx_MCDS_SRI1BALLUTD                SRI1BALLUTD;            /**< \brief 7200, Lookup Table Data Register*/
       Ifx_MCDS_SRI1BALLUTA                SRI1BALLUTA;            /**< \brief 7204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_7208[8];       /**< \brief 7208, \internal Reserved */
       Ifx_MCDS_SRI1BALBND                 SRI1BALBND[4];          /**< \brief 7210, */
       Ifx_MCDS_SRI1BALRNG                 SRI1BALRNG[4];          /**< \brief 7214, */
       Ifx_MCDS_SRI1BALMAP                 SRI1BALMAP[4];          /**< \brief 7218, */
       Ifx_UReg_8Bit                       reserved_7258[168];     /**< \brief 7258, \internal Reserved */
       Ifx_MCDS_SRI2BALLUTD                SRI2BALLUTD;            /**< \brief 7300, Lookup Table Data Register*/
       Ifx_MCDS_SRI2BALLUTA                SRI2BALLUTA;            /**< \brief 7304, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_7308[8];       /**< \brief 7308, \internal Reserved */
       Ifx_MCDS_SRI2BALBND                 SRI2BALBND[4];          /**< \brief 7310, */
       Ifx_MCDS_SRI2BALRNG                 SRI2BALRNG[4];          /**< \brief 7314, */
       Ifx_MCDS_SRI2BALMAP                 SRI2BALMAP[4];          /**< \brief 7318, */
       Ifx_UReg_8Bit                       reserved_7358[168];     /**< \brief 7358, \internal Reserved */
       Ifx_MCDS_SRI1EABND                  SRI1EABND[4];           /**< \brief 7400, */
       Ifx_MCDS_SRI1EARNG                  SRI1EARNG[4];           /**< \brief 7404, */
       Ifx_UReg_8Bit                       reserved_7444[60];      /**< \brief 7444, \internal Reserved */
       Ifx_MCDS_SRI1WDBND                  SRI1WDBND[4];           /**< \brief 7480, */
       Ifx_MCDS_SRI1WDHBND                 SRI1WDHBND[4];          /**< \brief 7484, */
       Ifx_MCDS_SRI1WDRNG                  SRI1WDRNG[4];           /**< \brief 7488, */
       Ifx_MCDS_SRI1WDHRNG                 SRI1WDHRNG[4];          /**< \brief 748C, */
       Ifx_MCDS_SRI1WDMSK                  SRI1WDMSK[4];           /**< \brief 7490, */
       Ifx_MCDS_SRI1WDHMSK                 SRI1WDHMSK[4];          /**< \brief 7494, */
       Ifx_MCDS_SRI1WDSGN                  SRI1WDSGN[4];           /**< \brief 749C, */
       Ifx_MCDS_SRI1ACBND                  SRI1ACBND[4];           /**< \brief 7500, */
       Ifx_MCDS_SRI1ACRNG                  SRI1ACRNG[4];           /**< \brief 7504, */
       Ifx_MCDS_SRI1ACMSK                  SRI1ACMSK[4];           /**< \brief 7508, */
       Ifx_UReg_8Bit                       reserved_7548[56];      /**< \brief 7548, \internal Reserved */
       Ifx_MCDS_SRI1DTUFLV                 SRI1DTUFLV;             /**< \brief 7580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_7584[124];     /**< \brief 7584, \internal Reserved */
       Ifx_MCDS_SRI2EABND                  SRI2EABND[4];           /**< \brief 7600, */
       Ifx_MCDS_SRI2EARNG                  SRI2EARNG[4];           /**< \brief 7604, */
       Ifx_UReg_8Bit                       reserved_7644[60];      /**< \brief 7644, \internal Reserved */
       Ifx_MCDS_SRI2WDBND                  SRI2WDBND[4];           /**< \brief 7680, */
       Ifx_MCDS_SRI2WDHBND                 SRI2WDHBND[4];          /**< \brief 7684, */
       Ifx_MCDS_SRI2WDRNG                  SRI2WDRNG[4];           /**< \brief 7688, */
       Ifx_MCDS_SRI2WDHRNG                 SRI2WDHRNG[4];          /**< \brief 768C, */
       Ifx_MCDS_SRI2WDMSK                  SRI2WDMSK[4];           /**< \brief 7690, */
       Ifx_MCDS_SRI2WDHMSK                 SRI2WDHMSK[4];          /**< \brief 7694, */
       Ifx_MCDS_SRI2WDSGN                  SRI2WDSGN[4];           /**< \brief 769C, */
       Ifx_MCDS_SRI2ACBND                  SRI2ACBND[4];           /**< \brief 7700, */
       Ifx_MCDS_SRI2ACRNG                  SRI2ACRNG[4];           /**< \brief 7704, */
       Ifx_MCDS_SRI2ACMSK                  SRI2ACMSK[4];           /**< \brief 7708, */
       Ifx_UReg_8Bit                       reserved_7748[56];      /**< \brief 7748, \internal Reserved */
       Ifx_MCDS_SRI2DTUFLV                 SRI2DTUFLV;             /**< \brief 7780, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_7784[124];     /**< \brief 7784, \internal Reserved */
       Ifx_MCDS_SRIEVT                     SRIEVT[16];             /**< \brief 7800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_7840[64];      /**< \brief 7840, \internal Reserved */
       Ifx_MCDS_SRIACT                     SRIACT[27];             /**< \brief 7880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_78EC[1812];    /**< \brief 78EC, \internal Reserved */
       Ifx_MCDS_TCZDCSTS                   TCZDCSTS;               /**< \brief 8000, Debug Status Register*/
       Ifx_MCDS_TCZCID                     TCZCID;                 /**< \brief 8004, Current Process ID*/
       Ifx_MCDS_TCZCIP                     TCZCIP;                 /**< \brief 8008, Current Instruction Pointer*/
       Ifx_MCDS_TCZCFT                     TCZCFT;                 /**< \brief 800C, Compact Function Trace Register*/
       Ifx_UReg_8Bit                       reserved_8010[496];     /**< \brief 8010, \internal Reserved */
       Ifx_MCDS_TCZPALLUTD                 TCZPALLUTD;             /**< \brief 8200, Lookup Table Data Register*/
       Ifx_MCDS_TCZPALLUTA                 TCZPALLUTA;             /**< \brief 8204, Lookup Table Address Register*/
       Ifx_UReg_8Bit                       reserved_8208[8];       /**< \brief 8208, \internal Reserved */
       Ifx_MCDS_TCZPALBND                  TCZPALBND[4];           /**< \brief 8210, */
       Ifx_MCDS_TCZPALRNG                  TCZPALRNG[4];           /**< \brief 8214, */
       Ifx_MCDS_TCZPALMAP                  TCZPALMAP[4];           /**< \brief 8218, */
       Ifx_UReg_8Bit                       reserved_8258[424];     /**< \brief 8258, \internal Reserved */
       Ifx_MCDS_TCZEABND                   TCZEABND[8];            /**< \brief 8400, */
       Ifx_MCDS_TCZEARNG                   TCZEARNG[8];            /**< \brief 8404, */
       Ifx_MCDS_TCZWDBND                   TCZWDBND[4];            /**< \brief 8480, */
       Ifx_MCDS_TCZWDHBND                  TCZWDHBND[4];           /**< \brief 8484, */
       Ifx_MCDS_TCZWDRNG                   TCZWDRNG[4];            /**< \brief 8488, */
       Ifx_MCDS_TCZWDHRNG                  TCZWDHRNG[4];           /**< \brief 848C, */
       Ifx_MCDS_TCZWDMSK                   TCZWDMSK[4];            /**< \brief 8490, */
       Ifx_MCDS_TCZWDHMSK                  TCZWDHMSK[4];           /**< \brief 8494, */
       Ifx_MCDS_TCZWDSGN                   TCZWDSGN[4];            /**< \brief 849C, */
       Ifx_MCDS_TCZACBND                   TCZACBND[4];            /**< \brief 8500, */
       Ifx_MCDS_TCZACRNG                   TCZACRNG[4];            /**< \brief 8504, */
       Ifx_MCDS_TCZACMSK                   TCZACMSK[4];            /**< \brief 8508, */
       Ifx_UReg_8Bit                       reserved_8548[56];      /**< \brief 8548, \internal Reserved */
       Ifx_MCDS_TCZDTUFLV                  TCZDTUFLV;              /**< \brief 8580, DTU FIFOs Fill Level*/
       Ifx_UReg_8Bit                       reserved_8584[636];     /**< \brief 8584, \internal Reserved */
       Ifx_MCDS_TCZEVT                     TCZEVT[16];             /**< \brief 8800, Event Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_8840[64];      /**< \brief 8840, \internal Reserved */
       Ifx_MCDS_TCZACT                     TCZACT[24];             /**< \brief 8880, Action Definition Register ${x}*/
       Ifx_UReg_8Bit                       reserved_88E0[800];     /**< \brief 88E0, \internal Reserved */
       Ifx_MCDS_TCZIDBND                   TCZIDBND[2];            /**< \brief 8C00, */
       Ifx_MCDS_TCZIDRNG                   TCZIDRNG[2];            /**< \brief 8C04, */
       Ifx_MCDS_TCZIDMSK                   TCZIDMSK[2];            /**< \brief 8C08, */
       Ifx_MCDS_TCZIDSGN                   TCZIDSGN[2];            /**< \brief 8C0C, */
       Ifx_UReg_8Bit                       reserved_8C2C[980];     /**< \brief 8C2C, \internal Reserved */
       Ifx_MCDS_TCZIPBND                   TCZIPBND[6];            /**< \brief 9000, */
       Ifx_MCDS_TCZIPRNG                   TCZIPRNG[6];            /**< \brief 9004, */
       Ifx_UReg_8Bit                       reserved_9064[28572];    /**< \brief 9064, \internal Reserved */
} Ifx_MCDS;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDS_REGDEF_H */
