/**
 * \file IfxMcds_reg.h
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
 * \defgroup IfxSfr_Mcds_Registers_Cfg Mcds address
 * \ingroup IfxSfr_Mcds_Registers
 * 
 * \defgroup IfxSfr_Mcds_Registers_Cfg_BaseAddress Base address
 * \ingroup IfxSfr_Mcds_Registers_Cfg
 *
 * \defgroup IfxSfr_Mcds_Registers_Cfg_Mcds 2-MCDS
 * \ingroup IfxSfr_Mcds_Registers_Cfg
 *
 *
 */
#ifndef IFXMCDS_REG_H
#define IFXMCDS_REG_H 1
/******************************************************************************/
#include "IfxMcds_regdef.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mcds_Registers_Cfg_BaseAddress
 * \{  */

/** \brief MCDS object */
#define MODULE_MCDS /*lint --e(923, 9078)*/ ((*(Ifx_MCDS*)0xFA010000u))
/** \}  */


/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_Mcds_Registers_Cfg_Mcds
 * \{  */
/** \brief 0, Clock Control Register */
#define MCDS_CLC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_CLC*)0xFA010000u)

/** \brief 4, OCDS Control and Status */
#define MCDS_OCS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_OCS*)0xFA010004u)

/** \brief 8, Module Identification Register */
#define MCDS_ID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ID*)0xFA010008u)

/** \brief 10, MCDS Control Register */
#define MCDS_CT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_CT*)0xFA010010u)

/** \brief 14, MCDS Signal Source Control */
#define MCDS_MUX /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MUX*)0xFA010014u)

/** \brief 18, Session ID Low Register */
#define MCDS_SESSIDL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SESSIDL*)0xFA010018u)

/** \brief 1C, Session ID High Register */
#define MCDS_SESSIDH /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SESSIDH*)0xFA01001Cu)

/** \brief 20, MCDS_TC Signal Source Control */
#define MCDS_MUX_TC_RC /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MUX_TC_RC*)0xFA010020u)

/** \brief F8, Access Enable Register 1 */
#define MCDS_ACCEN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ACCEN1*)0xFA0100F8u)

/** \brief FC, Access Enable Register 0 */
#define MCDS_ACCEN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_ACCEN0*)0xFA0100FCu)

/** \brief 200, Trace Buffer Write Pointer */
#define MCDS_FIFONOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFONOW*)0xFA010200u)

/** \brief 204, Trace Buffer Bottom Register */
#define MCDS_FIFOBOT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOBOT*)0xFA010204u)

/** \brief 208, Trace Buffer PRE/POST Register */
#define MCDS_FIFOPRE /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOPRE*)0xFA010208u)

/** \brief 20C, Trace Buffer Top Register */
#define MCDS_FIFOTOP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOTOP*)0xFA01020Cu)

/** \brief 210, Trace Buffer Control Register */
#define MCDS_FIFOCTL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOCTL*)0xFA010210u)

/** \brief 214, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOWARN*)0xFA010214u)

/** \brief 218, Trace Buffer Comparator Register */
#define MCDS_FIFOWARN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOWARN*)0xFA010218u)

/** \brief 21C, FIFO Overflow Counter Register */
#define MCDS_FIFOOVRCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFOOVRCNT*)0xFA01021Cu)

/** \brief 220, Trace Buffer Captured Write Pointer */
#define MCDS_FIFONTNOW /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_FIFONTNOW*)0xFA010220u)

/** \brief 400, Clock Counter Register */
#define MCDS_TSUREFCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUREFCNT*)0xFA010400u)

/** \brief 404, Clock Prescaler Register */
#define MCDS_TSUPRSCL /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUPRSCL*)0xFA010404u)

/** \brief 408, Clock Counter Register */
#define MCDS_TSUEMUCNT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TSUEMUCNT*)0xFA010408u)

/** \brief 800, Event Definition Register 0 */
#define MCDS_MCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010800u)

/** \brief 804, Event Definition Register 1 */
#define MCDS_MCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010804u)

/** \brief 808, Event Definition Register 2 */
#define MCDS_MCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010808u)

/** \brief 80C, Event Definition Register 3 */
#define MCDS_MCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01080Cu)

/** \brief 810, Event Definition Register 4 */
#define MCDS_MCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010810u)

/** \brief 814, Event Definition Register 5 */
#define MCDS_MCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010814u)

/** \brief 818, Event Definition Register 6 */
#define MCDS_MCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010818u)

/** \brief 81C, Event Definition Register 7 */
#define MCDS_MCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01081Cu)

/** \brief 820, Event Definition Register 8 */
#define MCDS_MCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010820u)

/** \brief 824, Event Definition Register 9 */
#define MCDS_MCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010824u)

/** \brief 828, Event Definition Register 10 */
#define MCDS_MCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010828u)

/** \brief 82C, Event Definition Register 11 */
#define MCDS_MCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01082Cu)

/** \brief 830, Event Definition Register 12 */
#define MCDS_MCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010830u)

/** \brief 834, Event Definition Register 13 */
#define MCDS_MCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010834u)

/** \brief 838, Event Definition Register 14 */
#define MCDS_MCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010838u)

/** \brief 83C, Event Definition Register 15 */
#define MCDS_MCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01083Cu)

/** \brief 840, Event Definition Register 16 */
#define MCDS_MCXEVT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010840u)

/** \brief 844, Event Definition Register 17 */
#define MCDS_MCXEVT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010844u)

/** \brief 848, Event Definition Register 18 */
#define MCDS_MCXEVT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010848u)

/** \brief 84C, Event Definition Register 19 */
#define MCDS_MCXEVT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01084Cu)

/** \brief 850, Event Definition Register 20 */
#define MCDS_MCXEVT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010850u)

/** \brief 854, Event Definition Register 21 */
#define MCDS_MCXEVT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010854u)

/** \brief 858, Event Definition Register 22 */
#define MCDS_MCXEVT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA010858u)

/** \brief 85C, Event Definition Register 23 */
#define MCDS_MCXEVT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXEVT*)0xFA01085Cu)

/** \brief 880, Action Definition Register 0 */
#define MCDS_MCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010880u)

/** \brief 884, Action Definition Register 1 */
#define MCDS_MCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010884u)

/** \brief 888, Action Definition Register 2 */
#define MCDS_MCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010888u)

/** \brief 88C, Action Definition Register 3 */
#define MCDS_MCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01088Cu)

/** \brief 890, Action Definition Register 4 */
#define MCDS_MCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010890u)

/** \brief 894, Action Definition Register 5 */
#define MCDS_MCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010894u)

/** \brief 898, Action Definition Register 6 */
#define MCDS_MCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010898u)

/** \brief 89C, Action Definition Register 7 */
#define MCDS_MCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01089Cu)

/** \brief 8A0, Action Definition Register 8 */
#define MCDS_MCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A0u)

/** \brief 8A4, Action Definition Register 9 */
#define MCDS_MCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A4u)

/** \brief 8A8, Action Definition Register 10 */
#define MCDS_MCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108A8u)

/** \brief 8AC, Action Definition Register 11 */
#define MCDS_MCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108ACu)

/** \brief 8B0, Action Definition Register 12 */
#define MCDS_MCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B0u)

/** \brief 8B4, Action Definition Register 13 */
#define MCDS_MCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B4u)

/** \brief 8B8, Action Definition Register 14 */
#define MCDS_MCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108B8u)

/** \brief 8BC, Action Definition Register 15 */
#define MCDS_MCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108BCu)

/** \brief 8C0, Action Definition Register 16 */
#define MCDS_MCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C0u)

/** \brief 8C4, Action Definition Register 17 */
#define MCDS_MCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C4u)

/** \brief 8C8, Action Definition Register 18 */
#define MCDS_MCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108C8u)

/** \brief 8CC, Action Definition Register 19 */
#define MCDS_MCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108CCu)

/** \brief 8D0, Action Definition Register 20 */
#define MCDS_MCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D0u)

/** \brief 8D4, Action Definition Register 21 */
#define MCDS_MCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D4u)

/** \brief 8D8, Action Definition Register 22 */
#define MCDS_MCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108D8u)

/** \brief 8DC, Action Definition Register 23 */
#define MCDS_MCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108DCu)

/** \brief 8E0, Action Definition Register 24 */
#define MCDS_MCXACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E0u)

/** \brief 8E4, Action Definition Register 25 */
#define MCDS_MCXACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E4u)

/** \brief 8E8, Action Definition Register 26 */
#define MCDS_MCXACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108E8u)

/** \brief 8EC, Action Definition Register 27 */
#define MCDS_MCXACT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108ECu)

/** \brief 8F0, Action Definition Register 28 */
#define MCDS_MCXACT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F0u)

/** \brief 8F4, Action Definition Register 29 */
#define MCDS_MCXACT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F4u)

/** \brief 8F8, Action Definition Register 30 */
#define MCDS_MCXACT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108F8u)

/** \brief 8FC, Action Definition Register 31 */
#define MCDS_MCXACT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0108FCu)

/** \brief 900, Action Definition Register 32 */
#define MCDS_MCXACT32 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010900u)

/** \brief 904, Action Definition Register 33 */
#define MCDS_MCXACT33 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010904u)

/** \brief 908, Action Definition Register 34 */
#define MCDS_MCXACT34 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010908u)

/** \brief 90C, Action Definition Register 35 */
#define MCDS_MCXACT35 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01090Cu)

/** \brief 910, Action Definition Register 36 */
#define MCDS_MCXACT36 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010910u)

/** \brief 914, Action Definition Register 37 */
#define MCDS_MCXACT37 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010914u)

/** \brief 918, Action Definition Register 38 */
#define MCDS_MCXACT38 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010918u)

/** \brief 91C, Action Definition Register 39 */
#define MCDS_MCXACT39 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01091Cu)

/** \brief 920, Action Definition Register 40 */
#define MCDS_MCXACT40 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010920u)

/** \brief 924, Action Definition Register 41 */
#define MCDS_MCXACT41 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010924u)

/** \brief 928, Action Definition Register 42 */
#define MCDS_MCXACT42 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010928u)

/** \brief 92C, Action Definition Register 43 */
#define MCDS_MCXACT43 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01092Cu)

/** \brief 930, Action Definition Register 44 */
#define MCDS_MCXACT44 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010930u)

/** \brief 934, Action Definition Register 45 */
#define MCDS_MCXACT45 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010934u)

/** \brief 938, Action Definition Register 46 */
#define MCDS_MCXACT46 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010938u)

/** \brief 93C, Action Definition Register 47 */
#define MCDS_MCXACT47 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01093Cu)

/** \brief 940, Action Definition Register 48 */
#define MCDS_MCXACT48 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010940u)

/** \brief 944, Action Definition Register 49 */
#define MCDS_MCXACT49 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010944u)

/** \brief 948, Action Definition Register 50 */
#define MCDS_MCXACT50 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010948u)

/** \brief 94C, Action Definition Register 51 */
#define MCDS_MCXACT51 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01094Cu)

/** \brief 950, Action Definition Register 52 */
#define MCDS_MCXACT52 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010950u)

/** \brief 954, Action Definition Register 53 */
#define MCDS_MCXACT53 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010954u)

/** \brief 958, Action Definition Register 54 */
#define MCDS_MCXACT54 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010958u)

/** \brief 95C, Action Definition Register 55 */
#define MCDS_MCXACT55 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01095Cu)

/** \brief 960, Action Definition Register 56 */
#define MCDS_MCXACT56 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010960u)

/** \brief 964, Action Definition Register 57 */
#define MCDS_MCXACT57 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010964u)

/** \brief 968, Action Definition Register 58 */
#define MCDS_MCXACT58 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010968u)

/** \brief 96C, Action Definition Register 59 */
#define MCDS_MCXACT59 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01096Cu)

/** \brief 970, Action Definition Register 60 */
#define MCDS_MCXACT60 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010970u)

/** \brief 974, Action Definition Register 61 */
#define MCDS_MCXACT61 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010974u)

/** \brief 978, Action Definition Register 62 */
#define MCDS_MCXACT62 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010978u)

/** \brief 97C, Action Definition Register 63 */
#define MCDS_MCXACT63 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01097Cu)

/** \brief 980, Action Definition Register 64 */
#define MCDS_MCXACT64 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010980u)

/** \brief 984, Action Definition Register 65 */
#define MCDS_MCXACT65 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010984u)

/** \brief 988, Action Definition Register 66 */
#define MCDS_MCXACT66 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010988u)

/** \brief 98C, Action Definition Register 67 */
#define MCDS_MCXACT67 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01098Cu)

/** \brief 990, Action Definition Register 68 */
#define MCDS_MCXACT68 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010990u)

/** \brief 994, Action Definition Register 69 */
#define MCDS_MCXACT69 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010994u)

/** \brief 998, Action Definition Register 70 */
#define MCDS_MCXACT70 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA010998u)

/** \brief 99C, Action Definition Register 71 */
#define MCDS_MCXACT71 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA01099Cu)

/** \brief 9A0, Action Definition Register 72 */
#define MCDS_MCXACT72 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A0u)

/** \brief 9A4, Action Definition Register 73 */
#define MCDS_MCXACT73 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A4u)

/** \brief 9A8, Action Definition Register 74 */
#define MCDS_MCXACT74 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109A8u)

/** \brief 9AC, Action Definition Register 75 */
#define MCDS_MCXACT75 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109ACu)

/** \brief 9B0, Action Definition Register 76 */
#define MCDS_MCXACT76 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B0u)

/** \brief 9B4, Action Definition Register 77 */
#define MCDS_MCXACT77 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B4u)

/** \brief 9B8, Action Definition Register 78 */
#define MCDS_MCXACT78 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109B8u)

/** \brief 9BC, Action Definition Register 79 */
#define MCDS_MCXACT79 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109BCu)

/** \brief 9C0, Action Definition Register 80 */
#define MCDS_MCXACT80 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXACT*)0xFA0109C0u)

/** \brief A00, Counter Control Register */
#define MCDS_MCXCCL0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A00u)

/** \brief A04, Counter Limit Register */
#define MCDS_MCXLMT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A04u)

/** \brief A08, Current Count Register */
#define MCDS_MCXCNT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A08u)

/** \brief A10, Counter Control Register */
#define MCDS_MCXCCL1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A10u)

/** \brief A14, Counter Limit Register */
#define MCDS_MCXLMT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A14u)

/** \brief A18, Current Count Register */
#define MCDS_MCXCNT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A18u)

/** \brief A20, Counter Control Register */
#define MCDS_MCXCCL2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A20u)

/** \brief A24, Counter Limit Register */
#define MCDS_MCXLMT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A24u)

/** \brief A28, Current Count Register */
#define MCDS_MCXCNT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A28u)

/** \brief A30, Counter Control Register */
#define MCDS_MCXCCL3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A30u)

/** \brief A34, Counter Limit Register */
#define MCDS_MCXLMT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A34u)

/** \brief A38, Current Count Register */
#define MCDS_MCXCNT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A38u)

/** \brief A40, Counter Control Register */
#define MCDS_MCXCCL4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A40u)

/** \brief A44, Counter Limit Register */
#define MCDS_MCXLMT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A44u)

/** \brief A48, Current Count Register */
#define MCDS_MCXCNT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A48u)

/** \brief A50, Counter Control Register */
#define MCDS_MCXCCL5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A50u)

/** \brief A54, Counter Limit Register */
#define MCDS_MCXLMT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A54u)

/** \brief A58, Current Count Register */
#define MCDS_MCXCNT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A58u)

/** \brief A60, Counter Control Register */
#define MCDS_MCXCCL6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A60u)

/** \brief A64, Counter Limit Register */
#define MCDS_MCXLMT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A64u)

/** \brief A68, Current Count Register */
#define MCDS_MCXCNT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A68u)

/** \brief A70, Counter Control Register */
#define MCDS_MCXCCL7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A70u)

/** \brief A74, Counter Limit Register */
#define MCDS_MCXLMT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A74u)

/** \brief A78, Current Count Register */
#define MCDS_MCXCNT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A78u)

/** \brief A80, Counter Control Register */
#define MCDS_MCXCCL8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A80u)

/** \brief A84, Counter Limit Register */
#define MCDS_MCXLMT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A84u)

/** \brief A88, Current Count Register */
#define MCDS_MCXCNT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A88u)

/** \brief A90, Counter Control Register */
#define MCDS_MCXCCL9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010A90u)

/** \brief A94, Counter Limit Register */
#define MCDS_MCXLMT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010A94u)

/** \brief A98, Current Count Register */
#define MCDS_MCXCNT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010A98u)

/** \brief AA0, Counter Control Register */
#define MCDS_MCXCCL10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AA0u)

/** \brief AA4, Counter Limit Register */
#define MCDS_MCXLMT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AA4u)

/** \brief AA8, Current Count Register */
#define MCDS_MCXCNT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AA8u)

/** \brief AB0, Counter Control Register */
#define MCDS_MCXCCL11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AB0u)

/** \brief AB4, Counter Limit Register */
#define MCDS_MCXLMT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AB4u)

/** \brief AB8, Current Count Register */
#define MCDS_MCXCNT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AB8u)

/** \brief AC0, Counter Control Register */
#define MCDS_MCXCCL12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AC0u)

/** \brief AC4, Counter Limit Register */
#define MCDS_MCXLMT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AC4u)

/** \brief AC8, Current Count Register */
#define MCDS_MCXCNT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AC8u)

/** \brief AD0, Counter Control Register */
#define MCDS_MCXCCL13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AD0u)

/** \brief AD4, Counter Limit Register */
#define MCDS_MCXLMT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AD4u)

/** \brief AD8, Current Count Register */
#define MCDS_MCXCNT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AD8u)

/** \brief AE0, Counter Control Register */
#define MCDS_MCXCCL14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AE0u)

/** \brief AE4, Counter Limit Register */
#define MCDS_MCXLMT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AE4u)

/** \brief AE8, Current Count Register */
#define MCDS_MCXCNT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AE8u)

/** \brief AF0, Counter Control Register */
#define MCDS_MCXCCL15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010AF0u)

/** \brief AF4, Counter Limit Register */
#define MCDS_MCXLMT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010AF4u)

/** \brief AF8, Current Count Register */
#define MCDS_MCXCNT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010AF8u)

/** \brief B00, Counter Control Register */
#define MCDS_MCXCCL16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B00u)

/** \brief B04, Counter Limit Register */
#define MCDS_MCXLMT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B04u)

/** \brief B08, Current Count Register */
#define MCDS_MCXCNT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B08u)

/** \brief B10, Counter Control Register */
#define MCDS_MCXCCL17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B10u)

/** \brief B14, Counter Limit Register */
#define MCDS_MCXLMT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B14u)

/** \brief B18, Current Count Register */
#define MCDS_MCXCNT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B18u)

/** \brief B20, Counter Control Register */
#define MCDS_MCXCCL18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B20u)

/** \brief B24, Counter Limit Register */
#define MCDS_MCXLMT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B24u)

/** \brief B28, Current Count Register */
#define MCDS_MCXCNT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B28u)

/** \brief B30, Counter Control Register */
#define MCDS_MCXCCL19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B30u)

/** \brief B34, Counter Limit Register */
#define MCDS_MCXLMT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B34u)

/** \brief B38, Current Count Register */
#define MCDS_MCXCNT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B38u)

/** \brief B40, Counter Control Register */
#define MCDS_MCXCCL20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B40u)

/** \brief B44, Counter Limit Register */
#define MCDS_MCXLMT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B44u)

/** \brief B48, Current Count Register */
#define MCDS_MCXCNT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B48u)

/** \brief B50, Counter Control Register */
#define MCDS_MCXCCL21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B50u)

/** \brief B54, Counter Limit Register */
#define MCDS_MCXLMT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B54u)

/** \brief B58, Current Count Register */
#define MCDS_MCXCNT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B58u)

/** \brief B60, Counter Control Register */
#define MCDS_MCXCCL22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B60u)

/** \brief B64, Counter Limit Register */
#define MCDS_MCXLMT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B64u)

/** \brief B68, Current Count Register */
#define MCDS_MCXCNT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B68u)

/** \brief B70, Counter Control Register */
#define MCDS_MCXCCL23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B70u)

/** \brief B74, Counter Limit Register */
#define MCDS_MCXLMT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B74u)

/** \brief B78, Current Count Register */
#define MCDS_MCXCNT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B78u)

/** \brief B80, Counter Control Register */
#define MCDS_MCXCCL24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B80u)

/** \brief B84, Counter Limit Register */
#define MCDS_MCXLMT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B84u)

/** \brief B88, Current Count Register */
#define MCDS_MCXCNT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B88u)

/** \brief B90, Counter Control Register */
#define MCDS_MCXCCL25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010B90u)

/** \brief B94, Counter Limit Register */
#define MCDS_MCXLMT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010B94u)

/** \brief B98, Current Count Register */
#define MCDS_MCXCNT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010B98u)

/** \brief BA0, Counter Control Register */
#define MCDS_MCXCCL26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BA0u)

/** \brief BA4, Counter Limit Register */
#define MCDS_MCXLMT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BA4u)

/** \brief BA8, Current Count Register */
#define MCDS_MCXCNT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BA8u)

/** \brief BB0, Counter Control Register */
#define MCDS_MCXCCL27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BB0u)

/** \brief BB4, Counter Limit Register */
#define MCDS_MCXLMT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BB4u)

/** \brief BB8, Current Count Register */
#define MCDS_MCXCNT27 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BB8u)

/** \brief BC0, Counter Control Register */
#define MCDS_MCXCCL28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BC0u)

/** \brief BC4, Counter Limit Register */
#define MCDS_MCXLMT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BC4u)

/** \brief BC8, Current Count Register */
#define MCDS_MCXCNT28 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BC8u)

/** \brief BD0, Counter Control Register */
#define MCDS_MCXCCL29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BD0u)

/** \brief BD4, Counter Limit Register */
#define MCDS_MCXLMT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BD4u)

/** \brief BD8, Current Count Register */
#define MCDS_MCXCNT29 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BD8u)

/** \brief BE0, Counter Control Register */
#define MCDS_MCXCCL30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BE0u)

/** \brief BE4, Counter Limit Register */
#define MCDS_MCXLMT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BE4u)

/** \brief BE8, Current Count Register */
#define MCDS_MCXCNT30 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BE8u)

/** \brief BF0, Counter Control Register */
#define MCDS_MCXCCL31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCCL*)0xFA010BF0u)

/** \brief BF4, Counter Limit Register */
#define MCDS_MCXLMT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXLMT*)0xFA010BF4u)

/** \brief BF8, Current Count Register */
#define MCDS_MCXCNT31 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXCNT*)0xFA010BF8u)

/** \brief C00, Performance Counter Configuration Register */
#define MCDS_MCXPERFCFG /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_MCXPERFCFG*)0xFA010C00u)

/** \brief 2000, Debug Status Register */
#define MCDS_TCXDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXDCSTS*)0xFA012000u)

/** \brief 2004, Current Process ID */
#define MCDS_TCXCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCID*)0xFA012004u)

/** \brief 2008, Current Instruction Pointer */
#define MCDS_TCXCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCIP*)0xFA012008u)

/** \brief 200C, Compact Function Trace Register */
#define MCDS_TCXCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXCFT*)0xFA01200Cu)

/** \brief 2200, Lookup Table Data Register */
#define MCDS_TCXPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALLUTD*)0xFA012200u)

/** \brief 2204, Lookup Table Address Register */
#define MCDS_TCXPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALLUTA*)0xFA012204u)

/** \brief 2210, Lookup Table Base Register */
#define MCDS_TCXPALBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALBND*)0xFA012210u)

/** \brief 2214, Lookup Table Range Register */
#define MCDS_TCXPALRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALRNG*)0xFA012214u)

/** \brief 2218, Lookup Table Mapping Register */
#define MCDS_TCXPALMAP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALMAP*)0xFA012218u)

/** \brief 2220, Lookup Table Base Register */
#define MCDS_TCXPALBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALBND*)0xFA012220u)

/** \brief 2224, Lookup Table Range Register */
#define MCDS_TCXPALRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALRNG*)0xFA012224u)

/** \brief 2228, Lookup Table Mapping Register */
#define MCDS_TCXPALMAP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALMAP*)0xFA012228u)

/** \brief 2230, Lookup Table Base Register */
#define MCDS_TCXPALBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALBND*)0xFA012230u)

/** \brief 2234, Lookup Table Range Register */
#define MCDS_TCXPALRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALRNG*)0xFA012234u)

/** \brief 2238, Lookup Table Mapping Register */
#define MCDS_TCXPALMAP2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALMAP*)0xFA012238u)

/** \brief 2240, Lookup Table Base Register */
#define MCDS_TCXPALBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALBND*)0xFA012240u)

/** \brief 2244, Lookup Table Range Register */
#define MCDS_TCXPALRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALRNG*)0xFA012244u)

/** \brief 2248, Lookup Table Mapping Register */
#define MCDS_TCXPALMAP3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXPALMAP*)0xFA012248u)

/** \brief 2400, Comparator Bound Register 0 */
#define MCDS_TCXEABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012400u)

/** \brief 2404, Comparator Range Register 0 */
#define MCDS_TCXEARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012404u)

/** \brief 2410, Comparator Bound Register 1 */
#define MCDS_TCXEABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012410u)

/** \brief 2414, Comparator Range Register 1 */
#define MCDS_TCXEARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012414u)

/** \brief 2420, Comparator Bound Register 2 */
#define MCDS_TCXEABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012420u)

/** \brief 2424, Comparator Range Register 2 */
#define MCDS_TCXEARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012424u)

/** \brief 2430, Comparator Bound Register 3 */
#define MCDS_TCXEABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012430u)

/** \brief 2434, Comparator Range Register 3 */
#define MCDS_TCXEARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012434u)

/** \brief 2440, Comparator Bound Register 4 */
#define MCDS_TCXEABND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012440u)

/** \brief 2444, Comparator Range Register 4 */
#define MCDS_TCXEARNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012444u)

/** \brief 2450, Comparator Bound Register 5 */
#define MCDS_TCXEABND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012450u)

/** \brief 2454, Comparator Range Register 5 */
#define MCDS_TCXEARNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012454u)

/** \brief 2460, Comparator Bound Register 6 */
#define MCDS_TCXEABND6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012460u)

/** \brief 2464, Comparator Range Register 6 */
#define MCDS_TCXEARNG6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012464u)

/** \brief 2470, Comparator Bound Register 7 */
#define MCDS_TCXEABND7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEABND*)0xFA012470u)

/** \brief 2474, Comparator Range Register 7 */
#define MCDS_TCXEARNG7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEARNG*)0xFA012474u)

/** \brief 2480, Comparator Bound Register 0 */
#define MCDS_TCXWDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDBND*)0xFA012480u)

/** \brief 2484, Comparator Bound Register 0 */
#define MCDS_TCXWDHBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHBND*)0xFA012484u)

/** \brief 2488, Comparator Range Register 0 */
#define MCDS_TCXWDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDRNG*)0xFA012488u)

/** \brief 248C, Comparator Range Register 0 */
#define MCDS_TCXWDHRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHRNG*)0xFA01248Cu)

/** \brief 2490, Comparator Mask Register 0 */
#define MCDS_TCXWDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDMSK*)0xFA012490u)

/** \brief 2494, Comparator Mask Register 0 */
#define MCDS_TCXWDHMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHMSK*)0xFA012494u)

/** \brief 249C, Comparator Sign Register 0 */
#define MCDS_TCXWDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDSGN*)0xFA01249Cu)

/** \brief 24A0, Comparator Bound Register 1 */
#define MCDS_TCXWDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDBND*)0xFA0124A0u)

/** \brief 24A4, Comparator Bound Register 1 */
#define MCDS_TCXWDHBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHBND*)0xFA0124A4u)

/** \brief 24A8, Comparator Range Register 1 */
#define MCDS_TCXWDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDRNG*)0xFA0124A8u)

/** \brief 24AC, Comparator Range Register 1 */
#define MCDS_TCXWDHRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHRNG*)0xFA0124ACu)

/** \brief 24B0, Comparator Mask Register 1 */
#define MCDS_TCXWDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDMSK*)0xFA0124B0u)

/** \brief 24B4, Comparator Mask Register 1 */
#define MCDS_TCXWDHMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHMSK*)0xFA0124B4u)

/** \brief 24BC, Comparator Sign Register 1 */
#define MCDS_TCXWDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDSGN*)0xFA0124BCu)

/** \brief 24C0, Comparator Bound Register 2 */
#define MCDS_TCXWDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDBND*)0xFA0124C0u)

/** \brief 24C4, Comparator Bound Register 2 */
#define MCDS_TCXWDHBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHBND*)0xFA0124C4u)

/** \brief 24C8, Comparator Range Register 2 */
#define MCDS_TCXWDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDRNG*)0xFA0124C8u)

/** \brief 24CC, Comparator Range Register 2 */
#define MCDS_TCXWDHRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHRNG*)0xFA0124CCu)

/** \brief 24D0, Comparator Mask Register 2 */
#define MCDS_TCXWDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDMSK*)0xFA0124D0u)

/** \brief 24D4, Comparator Mask Register 2 */
#define MCDS_TCXWDHMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHMSK*)0xFA0124D4u)

/** \brief 24DC, Comparator Sign Register 2 */
#define MCDS_TCXWDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDSGN*)0xFA0124DCu)

/** \brief 24E0, Comparator Bound Register 3 */
#define MCDS_TCXWDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDBND*)0xFA0124E0u)

/** \brief 24E4, Comparator Bound Register 3 */
#define MCDS_TCXWDHBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHBND*)0xFA0124E4u)

/** \brief 24E8, Comparator Range Register 3 */
#define MCDS_TCXWDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDRNG*)0xFA0124E8u)

/** \brief 24EC, Comparator Range Register 3 */
#define MCDS_TCXWDHRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHRNG*)0xFA0124ECu)

/** \brief 24F0, Comparator Mask Register 3 */
#define MCDS_TCXWDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDMSK*)0xFA0124F0u)

/** \brief 24F4, Comparator Mask Register 3 */
#define MCDS_TCXWDHMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDHMSK*)0xFA0124F4u)

/** \brief 24FC, Comparator Sign Register 3 */
#define MCDS_TCXWDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXWDSGN*)0xFA0124FCu)

/** \brief 2500, Comparator Bound Register 0 */
#define MCDS_TCXACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACBND*)0xFA012500u)

/** \brief 2504, Comparator Range Register 0 */
#define MCDS_TCXACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACRNG*)0xFA012504u)

/** \brief 2508, Comparator Mask Register 0 */
#define MCDS_TCXACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACMSK*)0xFA012508u)

/** \brief 2510, Comparator Bound Register 1 */
#define MCDS_TCXACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACBND*)0xFA012510u)

/** \brief 2514, Comparator Range Register 1 */
#define MCDS_TCXACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACRNG*)0xFA012514u)

/** \brief 2518, Comparator Mask Register 1 */
#define MCDS_TCXACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACMSK*)0xFA012518u)

/** \brief 2520, Comparator Bound Register 2 */
#define MCDS_TCXACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACBND*)0xFA012520u)

/** \brief 2524, Comparator Range Register 2 */
#define MCDS_TCXACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACRNG*)0xFA012524u)

/** \brief 2528, Comparator Mask Register 2 */
#define MCDS_TCXACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACMSK*)0xFA012528u)

/** \brief 2530, Comparator Bound Register 3 */
#define MCDS_TCXACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACBND*)0xFA012530u)

/** \brief 2534, Comparator Range Register 3 */
#define MCDS_TCXACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACRNG*)0xFA012534u)

/** \brief 2538, Comparator Mask Register 3 */
#define MCDS_TCXACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACMSK*)0xFA012538u)

/** \brief 2580, DTU FIFOs Fill Level */
#define MCDS_TCXDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXDTUFLV*)0xFA012580u)

/** \brief 2800, Event Definition Register 0 */
#define MCDS_TCXEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012800u)

/** \brief 2804, Event Definition Register 1 */
#define MCDS_TCXEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012804u)

/** \brief 2808, Event Definition Register 2 */
#define MCDS_TCXEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012808u)

/** \brief 280C, Event Definition Register 3 */
#define MCDS_TCXEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01280Cu)

/** \brief 2810, Event Definition Register 4 */
#define MCDS_TCXEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012810u)

/** \brief 2814, Event Definition Register 5 */
#define MCDS_TCXEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012814u)

/** \brief 2818, Event Definition Register 6 */
#define MCDS_TCXEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012818u)

/** \brief 281C, Event Definition Register 7 */
#define MCDS_TCXEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01281Cu)

/** \brief 2820, Event Definition Register 8 */
#define MCDS_TCXEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012820u)

/** \brief 2824, Event Definition Register 9 */
#define MCDS_TCXEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012824u)

/** \brief 2828, Event Definition Register 10 */
#define MCDS_TCXEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012828u)

/** \brief 282C, Event Definition Register 11 */
#define MCDS_TCXEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01282Cu)

/** \brief 2830, Event Definition Register 12 */
#define MCDS_TCXEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012830u)

/** \brief 2834, Event Definition Register 13 */
#define MCDS_TCXEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012834u)

/** \brief 2838, Event Definition Register 14 */
#define MCDS_TCXEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA012838u)

/** \brief 283C, Event Definition Register 15 */
#define MCDS_TCXEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXEVT*)0xFA01283Cu)

/** \brief 2880, Action Definition Register 0 */
#define MCDS_TCXACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012880u)

/** \brief 2884, Action Definition Register 1 */
#define MCDS_TCXACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012884u)

/** \brief 2888, Action Definition Register 2 */
#define MCDS_TCXACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012888u)

/** \brief 288C, Action Definition Register 3 */
#define MCDS_TCXACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA01288Cu)

/** \brief 2890, Action Definition Register 4 */
#define MCDS_TCXACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012890u)

/** \brief 2894, Action Definition Register 5 */
#define MCDS_TCXACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012894u)

/** \brief 2898, Action Definition Register 6 */
#define MCDS_TCXACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA012898u)

/** \brief 289C, Action Definition Register 7 */
#define MCDS_TCXACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA01289Cu)

/** \brief 28A0, Action Definition Register 8 */
#define MCDS_TCXACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A0u)

/** \brief 28A4, Action Definition Register 9 */
#define MCDS_TCXACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A4u)

/** \brief 28A8, Action Definition Register 10 */
#define MCDS_TCXACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128A8u)

/** \brief 28AC, Action Definition Register 11 */
#define MCDS_TCXACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128ACu)

/** \brief 28B0, Action Definition Register 12 */
#define MCDS_TCXACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B0u)

/** \brief 28B4, Action Definition Register 13 */
#define MCDS_TCXACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B4u)

/** \brief 28B8, Action Definition Register 14 */
#define MCDS_TCXACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128B8u)

/** \brief 28BC, Action Definition Register 15 */
#define MCDS_TCXACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128BCu)

/** \brief 28C0, Action Definition Register 16 */
#define MCDS_TCXACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C0u)

/** \brief 28C4, Action Definition Register 17 */
#define MCDS_TCXACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C4u)

/** \brief 28C8, Action Definition Register 18 */
#define MCDS_TCXACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128C8u)

/** \brief 28CC, Action Definition Register 19 */
#define MCDS_TCXACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128CCu)

/** \brief 28D0, Action Definition Register 20 */
#define MCDS_TCXACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D0u)

/** \brief 28D4, Action Definition Register 21 */
#define MCDS_TCXACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D4u)

/** \brief 28D8, Action Definition Register 22 */
#define MCDS_TCXACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128D8u)

/** \brief 28DC, Action Definition Register 23 */
#define MCDS_TCXACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXACT*)0xFA0128DCu)

/** \brief 2C00, Comparator Bound Register 0 */
#define MCDS_TCXIDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDBND*)0xFA012C00u)

/** \brief 2C04, Comparator Range Register 0 */
#define MCDS_TCXIDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDRNG*)0xFA012C04u)

/** \brief 2C08, Comparator Mask Register 0 */
#define MCDS_TCXIDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDMSK*)0xFA012C08u)

/** \brief 2C0C, Comparator Sign Register 0 */
#define MCDS_TCXIDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDSGN*)0xFA012C0Cu)

/** \brief 2C10, Comparator Bound Register 1 */
#define MCDS_TCXIDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDBND*)0xFA012C10u)

/** \brief 2C14, Comparator Range Register 1 */
#define MCDS_TCXIDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDRNG*)0xFA012C14u)

/** \brief 2C18, Comparator Mask Register 1 */
#define MCDS_TCXIDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDMSK*)0xFA012C18u)

/** \brief 2C1C, Comparator Sign Register 1 */
#define MCDS_TCXIDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIDSGN*)0xFA012C1Cu)

/** \brief 3000, Comparator Bound Register 0 */
#define MCDS_TCXIPBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013000u)

/** \brief 3004, Comparator Range Register 0 */
#define MCDS_TCXIPRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013004u)

/** \brief 3010, Comparator Bound Register 1 */
#define MCDS_TCXIPBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013010u)

/** \brief 3014, Comparator Range Register 1 */
#define MCDS_TCXIPRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013014u)

/** \brief 3020, Comparator Bound Register 2 */
#define MCDS_TCXIPBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013020u)

/** \brief 3024, Comparator Range Register 2 */
#define MCDS_TCXIPRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013024u)

/** \brief 3030, Comparator Bound Register 3 */
#define MCDS_TCXIPBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013030u)

/** \brief 3034, Comparator Range Register 3 */
#define MCDS_TCXIPRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013034u)

/** \brief 3040, Comparator Bound Register 4 */
#define MCDS_TCXIPBND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013040u)

/** \brief 3044, Comparator Range Register 4 */
#define MCDS_TCXIPRNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013044u)

/** \brief 3050, Comparator Bound Register 5 */
#define MCDS_TCXIPBND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPBND*)0xFA013050u)

/** \brief 3054, Comparator Range Register 5 */
#define MCDS_TCXIPRNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCXIPRNG*)0xFA013054u)

/** \brief 4000, Debug Status Register */
#define MCDS_TCYDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYDCSTS*)0xFA014000u)

/** \brief 4004, Current Process ID */
#define MCDS_TCYCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCID*)0xFA014004u)

/** \brief 4008, Current Instruction Pointer */
#define MCDS_TCYCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCIP*)0xFA014008u)

/** \brief 400C, Compact Function Trace Register */
#define MCDS_TCYCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYCFT*)0xFA01400Cu)

/** \brief 4200, Lookup Table Data Register */
#define MCDS_TCYPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALLUTD*)0xFA014200u)

/** \brief 4204, Lookup Table Address Register */
#define MCDS_TCYPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALLUTA*)0xFA014204u)

/** \brief 4210, Lookup Table Base Register */
#define MCDS_TCYPALBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALBND*)0xFA014210u)

/** \brief 4214, Lookup Table Range Register */
#define MCDS_TCYPALRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALRNG*)0xFA014214u)

/** \brief 4218, Lookup Table Mapping Register */
#define MCDS_TCYPALMAP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALMAP*)0xFA014218u)

/** \brief 4220, Lookup Table Base Register */
#define MCDS_TCYPALBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALBND*)0xFA014220u)

/** \brief 4224, Lookup Table Range Register */
#define MCDS_TCYPALRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALRNG*)0xFA014224u)

/** \brief 4228, Lookup Table Mapping Register */
#define MCDS_TCYPALMAP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALMAP*)0xFA014228u)

/** \brief 4230, Lookup Table Base Register */
#define MCDS_TCYPALBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALBND*)0xFA014230u)

/** \brief 4234, Lookup Table Range Register */
#define MCDS_TCYPALRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALRNG*)0xFA014234u)

/** \brief 4238, Lookup Table Mapping Register */
#define MCDS_TCYPALMAP2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALMAP*)0xFA014238u)

/** \brief 4240, Lookup Table Base Register */
#define MCDS_TCYPALBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALBND*)0xFA014240u)

/** \brief 4244, Lookup Table Range Register */
#define MCDS_TCYPALRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALRNG*)0xFA014244u)

/** \brief 4248, Lookup Table Mapping Register */
#define MCDS_TCYPALMAP3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYPALMAP*)0xFA014248u)

/** \brief 4400, Comparator Bound Register 0 */
#define MCDS_TCYEABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014400u)

/** \brief 4404, Comparator Range Register 0 */
#define MCDS_TCYEARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014404u)

/** \brief 4410, Comparator Bound Register 1 */
#define MCDS_TCYEABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014410u)

/** \brief 4414, Comparator Range Register 1 */
#define MCDS_TCYEARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014414u)

/** \brief 4420, Comparator Bound Register 2 */
#define MCDS_TCYEABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014420u)

/** \brief 4424, Comparator Range Register 2 */
#define MCDS_TCYEARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014424u)

/** \brief 4430, Comparator Bound Register 3 */
#define MCDS_TCYEABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014430u)

/** \brief 4434, Comparator Range Register 3 */
#define MCDS_TCYEARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014434u)

/** \brief 4440, Comparator Bound Register 4 */
#define MCDS_TCYEABND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014440u)

/** \brief 4444, Comparator Range Register 4 */
#define MCDS_TCYEARNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014444u)

/** \brief 4450, Comparator Bound Register 5 */
#define MCDS_TCYEABND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014450u)

/** \brief 4454, Comparator Range Register 5 */
#define MCDS_TCYEARNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014454u)

/** \brief 4460, Comparator Bound Register 6 */
#define MCDS_TCYEABND6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014460u)

/** \brief 4464, Comparator Range Register 6 */
#define MCDS_TCYEARNG6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014464u)

/** \brief 4470, Comparator Bound Register 7 */
#define MCDS_TCYEABND7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEABND*)0xFA014470u)

/** \brief 4474, Comparator Range Register 7 */
#define MCDS_TCYEARNG7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEARNG*)0xFA014474u)

/** \brief 4480, Comparator Bound Register 0 */
#define MCDS_TCYWDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDBND*)0xFA014480u)

/** \brief 4484, Comparator Bound Register 0 */
#define MCDS_TCYWDHBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHBND*)0xFA014484u)

/** \brief 4488, Comparator Range Register 0 */
#define MCDS_TCYWDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDRNG*)0xFA014488u)

/** \brief 448C, Comparator Range Register 0 */
#define MCDS_TCYWDHRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHRNG*)0xFA01448Cu)

/** \brief 4490, Comparator Mask Register 0 */
#define MCDS_TCYWDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDMSK*)0xFA014490u)

/** \brief 4494, Comparator Mask Register 0 */
#define MCDS_TCYWDHMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHMSK*)0xFA014494u)

/** \brief 449C, Comparator Sign Register 0 */
#define MCDS_TCYWDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDSGN*)0xFA01449Cu)

/** \brief 44A0, Comparator Bound Register 1 */
#define MCDS_TCYWDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDBND*)0xFA0144A0u)

/** \brief 44A4, Comparator Bound Register 1 */
#define MCDS_TCYWDHBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHBND*)0xFA0144A4u)

/** \brief 44A8, Comparator Range Register 1 */
#define MCDS_TCYWDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDRNG*)0xFA0144A8u)

/** \brief 44AC, Comparator Range Register 1 */
#define MCDS_TCYWDHRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHRNG*)0xFA0144ACu)

/** \brief 44B0, Comparator Mask Register 1 */
#define MCDS_TCYWDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDMSK*)0xFA0144B0u)

/** \brief 44B4, Comparator Mask Register 1 */
#define MCDS_TCYWDHMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHMSK*)0xFA0144B4u)

/** \brief 44BC, Comparator Sign Register 1 */
#define MCDS_TCYWDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDSGN*)0xFA0144BCu)

/** \brief 44C0, Comparator Bound Register 2 */
#define MCDS_TCYWDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDBND*)0xFA0144C0u)

/** \brief 44C4, Comparator Bound Register 2 */
#define MCDS_TCYWDHBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHBND*)0xFA0144C4u)

/** \brief 44C8, Comparator Range Register 2 */
#define MCDS_TCYWDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDRNG*)0xFA0144C8u)

/** \brief 44CC, Comparator Range Register 2 */
#define MCDS_TCYWDHRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHRNG*)0xFA0144CCu)

/** \brief 44D0, Comparator Mask Register 2 */
#define MCDS_TCYWDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDMSK*)0xFA0144D0u)

/** \brief 44D4, Comparator Mask Register 2 */
#define MCDS_TCYWDHMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHMSK*)0xFA0144D4u)

/** \brief 44DC, Comparator Sign Register 2 */
#define MCDS_TCYWDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDSGN*)0xFA0144DCu)

/** \brief 44E0, Comparator Bound Register 3 */
#define MCDS_TCYWDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDBND*)0xFA0144E0u)

/** \brief 44E4, Comparator Bound Register 3 */
#define MCDS_TCYWDHBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHBND*)0xFA0144E4u)

/** \brief 44E8, Comparator Range Register 3 */
#define MCDS_TCYWDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDRNG*)0xFA0144E8u)

/** \brief 44EC, Comparator Range Register 3 */
#define MCDS_TCYWDHRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHRNG*)0xFA0144ECu)

/** \brief 44F0, Comparator Mask Register 3 */
#define MCDS_TCYWDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDMSK*)0xFA0144F0u)

/** \brief 44F4, Comparator Mask Register 3 */
#define MCDS_TCYWDHMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDHMSK*)0xFA0144F4u)

/** \brief 44FC, Comparator Sign Register 3 */
#define MCDS_TCYWDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYWDSGN*)0xFA0144FCu)

/** \brief 4500, Comparator Bound Register 0 */
#define MCDS_TCYACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACBND*)0xFA014500u)

/** \brief 4504, Comparator Range Register 0 */
#define MCDS_TCYACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACRNG*)0xFA014504u)

/** \brief 4508, Comparator Mask Register 0 */
#define MCDS_TCYACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACMSK*)0xFA014508u)

/** \brief 4510, Comparator Bound Register 1 */
#define MCDS_TCYACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACBND*)0xFA014510u)

/** \brief 4514, Comparator Range Register 1 */
#define MCDS_TCYACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACRNG*)0xFA014514u)

/** \brief 4518, Comparator Mask Register 1 */
#define MCDS_TCYACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACMSK*)0xFA014518u)

/** \brief 4520, Comparator Bound Register 2 */
#define MCDS_TCYACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACBND*)0xFA014520u)

/** \brief 4524, Comparator Range Register 2 */
#define MCDS_TCYACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACRNG*)0xFA014524u)

/** \brief 4528, Comparator Mask Register 2 */
#define MCDS_TCYACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACMSK*)0xFA014528u)

/** \brief 4530, Comparator Bound Register 3 */
#define MCDS_TCYACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACBND*)0xFA014530u)

/** \brief 4534, Comparator Range Register 3 */
#define MCDS_TCYACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACRNG*)0xFA014534u)

/** \brief 4538, Comparator Mask Register 3 */
#define MCDS_TCYACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACMSK*)0xFA014538u)

/** \brief 4580, DTU FIFOs Fill Level */
#define MCDS_TCYDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYDTUFLV*)0xFA014580u)

/** \brief 4800, Event Definition Register 0 */
#define MCDS_TCYEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014800u)

/** \brief 4804, Event Definition Register 1 */
#define MCDS_TCYEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014804u)

/** \brief 4808, Event Definition Register 2 */
#define MCDS_TCYEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014808u)

/** \brief 480C, Event Definition Register 3 */
#define MCDS_TCYEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01480Cu)

/** \brief 4810, Event Definition Register 4 */
#define MCDS_TCYEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014810u)

/** \brief 4814, Event Definition Register 5 */
#define MCDS_TCYEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014814u)

/** \brief 4818, Event Definition Register 6 */
#define MCDS_TCYEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014818u)

/** \brief 481C, Event Definition Register 7 */
#define MCDS_TCYEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01481Cu)

/** \brief 4820, Event Definition Register 8 */
#define MCDS_TCYEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014820u)

/** \brief 4824, Event Definition Register 9 */
#define MCDS_TCYEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014824u)

/** \brief 4828, Event Definition Register 10 */
#define MCDS_TCYEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014828u)

/** \brief 482C, Event Definition Register 11 */
#define MCDS_TCYEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01482Cu)

/** \brief 4830, Event Definition Register 12 */
#define MCDS_TCYEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014830u)

/** \brief 4834, Event Definition Register 13 */
#define MCDS_TCYEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014834u)

/** \brief 4838, Event Definition Register 14 */
#define MCDS_TCYEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA014838u)

/** \brief 483C, Event Definition Register 15 */
#define MCDS_TCYEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYEVT*)0xFA01483Cu)

/** \brief 4880, Action Definition Register 0 */
#define MCDS_TCYACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014880u)

/** \brief 4884, Action Definition Register 1 */
#define MCDS_TCYACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014884u)

/** \brief 4888, Action Definition Register 2 */
#define MCDS_TCYACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014888u)

/** \brief 488C, Action Definition Register 3 */
#define MCDS_TCYACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA01488Cu)

/** \brief 4890, Action Definition Register 4 */
#define MCDS_TCYACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014890u)

/** \brief 4894, Action Definition Register 5 */
#define MCDS_TCYACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014894u)

/** \brief 4898, Action Definition Register 6 */
#define MCDS_TCYACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA014898u)

/** \brief 489C, Action Definition Register 7 */
#define MCDS_TCYACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA01489Cu)

/** \brief 48A0, Action Definition Register 8 */
#define MCDS_TCYACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A0u)

/** \brief 48A4, Action Definition Register 9 */
#define MCDS_TCYACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A4u)

/** \brief 48A8, Action Definition Register 10 */
#define MCDS_TCYACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148A8u)

/** \brief 48AC, Action Definition Register 11 */
#define MCDS_TCYACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148ACu)

/** \brief 48B0, Action Definition Register 12 */
#define MCDS_TCYACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B0u)

/** \brief 48B4, Action Definition Register 13 */
#define MCDS_TCYACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B4u)

/** \brief 48B8, Action Definition Register 14 */
#define MCDS_TCYACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148B8u)

/** \brief 48BC, Action Definition Register 15 */
#define MCDS_TCYACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148BCu)

/** \brief 48C0, Action Definition Register 16 */
#define MCDS_TCYACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C0u)

/** \brief 48C4, Action Definition Register 17 */
#define MCDS_TCYACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C4u)

/** \brief 48C8, Action Definition Register 18 */
#define MCDS_TCYACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148C8u)

/** \brief 48CC, Action Definition Register 19 */
#define MCDS_TCYACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148CCu)

/** \brief 48D0, Action Definition Register 20 */
#define MCDS_TCYACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D0u)

/** \brief 48D4, Action Definition Register 21 */
#define MCDS_TCYACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D4u)

/** \brief 48D8, Action Definition Register 22 */
#define MCDS_TCYACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148D8u)

/** \brief 48DC, Action Definition Register 23 */
#define MCDS_TCYACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYACT*)0xFA0148DCu)

/** \brief 4C00, Comparator Bound Register 0 */
#define MCDS_TCYIDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDBND*)0xFA014C00u)

/** \brief 4C04, Comparator Range Register 0 */
#define MCDS_TCYIDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDRNG*)0xFA014C04u)

/** \brief 4C08, Comparator Mask Register 0 */
#define MCDS_TCYIDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDMSK*)0xFA014C08u)

/** \brief 4C0C, Comparator Sign Register 0 */
#define MCDS_TCYIDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDSGN*)0xFA014C0Cu)

/** \brief 4C10, Comparator Bound Register 1 */
#define MCDS_TCYIDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDBND*)0xFA014C10u)

/** \brief 4C14, Comparator Range Register 1 */
#define MCDS_TCYIDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDRNG*)0xFA014C14u)

/** \brief 4C18, Comparator Mask Register 1 */
#define MCDS_TCYIDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDMSK*)0xFA014C18u)

/** \brief 4C1C, Comparator Sign Register 1 */
#define MCDS_TCYIDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIDSGN*)0xFA014C1Cu)

/** \brief 5000, Comparator Bound Register 0 */
#define MCDS_TCYIPBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015000u)

/** \brief 5004, Comparator Range Register 0 */
#define MCDS_TCYIPRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015004u)

/** \brief 5010, Comparator Bound Register 1 */
#define MCDS_TCYIPBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015010u)

/** \brief 5014, Comparator Range Register 1 */
#define MCDS_TCYIPRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015014u)

/** \brief 5020, Comparator Bound Register 2 */
#define MCDS_TCYIPBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015020u)

/** \brief 5024, Comparator Range Register 2 */
#define MCDS_TCYIPRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015024u)

/** \brief 5030, Comparator Bound Register 3 */
#define MCDS_TCYIPBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015030u)

/** \brief 5034, Comparator Range Register 3 */
#define MCDS_TCYIPRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015034u)

/** \brief 5040, Comparator Bound Register 4 */
#define MCDS_TCYIPBND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015040u)

/** \brief 5044, Comparator Range Register 4 */
#define MCDS_TCYIPRNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015044u)

/** \brief 5050, Comparator Bound Register 5 */
#define MCDS_TCYIPBND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPBND*)0xFA015050u)

/** \brief 5054, Comparator Range Register 5 */
#define MCDS_TCYIPRNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCYIPRNG*)0xFA015054u)

/** \brief 6000, Debug Status Register */
#define MCDS_SPBDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBDCSTS*)0xFA016000u)

/** \brief 6400, Comparator Bound Register 0 */
#define MCDS_SPBEABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEABND*)0xFA016400u)

/** \brief 6404, Comparator Range Register 0 */
#define MCDS_SPBEARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEARNG*)0xFA016404u)

/** \brief 6410, Comparator Bound Register 1 */
#define MCDS_SPBEABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEABND*)0xFA016410u)

/** \brief 6414, Comparator Range Register 1 */
#define MCDS_SPBEARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEARNG*)0xFA016414u)

/** \brief 6420, Comparator Bound Register 2 */
#define MCDS_SPBEABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEABND*)0xFA016420u)

/** \brief 6424, Comparator Range Register 2 */
#define MCDS_SPBEARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEARNG*)0xFA016424u)

/** \brief 6430, Comparator Bound Register 3 */
#define MCDS_SPBEABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEABND*)0xFA016430u)

/** \brief 6434, Comparator Range Register 3 */
#define MCDS_SPBEARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEARNG*)0xFA016434u)

/** \brief 6480, Comparator Bound Register 0 */
#define MCDS_SPBWDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDBND*)0xFA016480u)

/** \brief 6484, Comparator Range Register 0 */
#define MCDS_SPBWDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDRNG*)0xFA016484u)

/** \brief 6488, Comparator Mask Register 0 */
#define MCDS_SPBWDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDMSK*)0xFA016488u)

/** \brief 648C, Comparator Sign Register 0 */
#define MCDS_SPBWDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDSGN*)0xFA01648Cu)

/** \brief 6490, Comparator Bound Register 1 */
#define MCDS_SPBWDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDBND*)0xFA016490u)

/** \brief 6494, Comparator Range Register 1 */
#define MCDS_SPBWDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDRNG*)0xFA016494u)

/** \brief 6498, Comparator Mask Register 1 */
#define MCDS_SPBWDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDMSK*)0xFA016498u)

/** \brief 649C, Comparator Sign Register 1 */
#define MCDS_SPBWDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDSGN*)0xFA01649Cu)

/** \brief 64A0, Comparator Bound Register 2 */
#define MCDS_SPBWDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDBND*)0xFA0164A0u)

/** \brief 64A4, Comparator Range Register 2 */
#define MCDS_SPBWDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDRNG*)0xFA0164A4u)

/** \brief 64A8, Comparator Mask Register 2 */
#define MCDS_SPBWDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDMSK*)0xFA0164A8u)

/** \brief 64AC, Comparator Sign Register 2 */
#define MCDS_SPBWDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDSGN*)0xFA0164ACu)

/** \brief 64B0, Comparator Bound Register 3 */
#define MCDS_SPBWDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDBND*)0xFA0164B0u)

/** \brief 64B4, Comparator Range Register 3 */
#define MCDS_SPBWDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDRNG*)0xFA0164B4u)

/** \brief 64B8, Comparator Mask Register 3 */
#define MCDS_SPBWDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDMSK*)0xFA0164B8u)

/** \brief 64BC, Comparator Sign Register 3 */
#define MCDS_SPBWDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBWDSGN*)0xFA0164BCu)

/** \brief 6500, Comparator Bound Register 0 */
#define MCDS_SPBACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACBND*)0xFA016500u)

/** \brief 6504, Comparator Range Register 0 */
#define MCDS_SPBACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACRNG*)0xFA016504u)

/** \brief 6508, Comparator Mask Register 0 */
#define MCDS_SPBACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACMSK*)0xFA016508u)

/** \brief 6510, Comparator Bound Register 1 */
#define MCDS_SPBACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACBND*)0xFA016510u)

/** \brief 6514, Comparator Range Register 1 */
#define MCDS_SPBACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACRNG*)0xFA016514u)

/** \brief 6518, Comparator Mask Register 1 */
#define MCDS_SPBACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACMSK*)0xFA016518u)

/** \brief 6520, Comparator Bound Register 2 */
#define MCDS_SPBACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACBND*)0xFA016520u)

/** \brief 6524, Comparator Range Register 2 */
#define MCDS_SPBACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACRNG*)0xFA016524u)

/** \brief 6528, Comparator Mask Register 2 */
#define MCDS_SPBACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACMSK*)0xFA016528u)

/** \brief 6530, Comparator Bound Register 3 */
#define MCDS_SPBACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACBND*)0xFA016530u)

/** \brief 6534, Comparator Range Register 3 */
#define MCDS_SPBACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACRNG*)0xFA016534u)

/** \brief 6538, Comparator Mask Register 3 */
#define MCDS_SPBACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACMSK*)0xFA016538u)

/** \brief 6800, Event Definition Register 0 */
#define MCDS_SPBEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016800u)

/** \brief 6804, Event Definition Register 1 */
#define MCDS_SPBEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016804u)

/** \brief 6808, Event Definition Register 2 */
#define MCDS_SPBEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016808u)

/** \brief 680C, Event Definition Register 3 */
#define MCDS_SPBEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01680Cu)

/** \brief 6810, Event Definition Register 4 */
#define MCDS_SPBEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016810u)

/** \brief 6814, Event Definition Register 5 */
#define MCDS_SPBEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016814u)

/** \brief 6818, Event Definition Register 6 */
#define MCDS_SPBEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016818u)

/** \brief 681C, Event Definition Register 7 */
#define MCDS_SPBEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01681Cu)

/** \brief 6820, Event Definition Register 8 */
#define MCDS_SPBEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016820u)

/** \brief 6824, Event Definition Register 9 */
#define MCDS_SPBEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016824u)

/** \brief 6828, Event Definition Register 10 */
#define MCDS_SPBEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016828u)

/** \brief 682C, Event Definition Register 11 */
#define MCDS_SPBEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01682Cu)

/** \brief 6830, Event Definition Register 12 */
#define MCDS_SPBEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016830u)

/** \brief 6834, Event Definition Register 13 */
#define MCDS_SPBEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016834u)

/** \brief 6838, Event Definition Register 14 */
#define MCDS_SPBEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA016838u)

/** \brief 683C, Event Definition Register 15 */
#define MCDS_SPBEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBEVT*)0xFA01683Cu)

/** \brief 6880, Action Definition Register 0 */
#define MCDS_SPBACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016880u)

/** \brief 6884, Action Definition Register 1 */
#define MCDS_SPBACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016884u)

/** \brief 6888, Action Definition Register 2 */
#define MCDS_SPBACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016888u)

/** \brief 688C, Action Definition Register 3 */
#define MCDS_SPBACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA01688Cu)

/** \brief 6890, Action Definition Register 4 */
#define MCDS_SPBACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016890u)

/** \brief 6894, Action Definition Register 5 */
#define MCDS_SPBACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016894u)

/** \brief 6898, Action Definition Register 6 */
#define MCDS_SPBACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA016898u)

/** \brief 689C, Action Definition Register 7 */
#define MCDS_SPBACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA01689Cu)

/** \brief 68A0, Action Definition Register 8 */
#define MCDS_SPBACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A0u)

/** \brief 68A4, Action Definition Register 9 */
#define MCDS_SPBACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A4u)

/** \brief 68A8, Action Definition Register 10 */
#define MCDS_SPBACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168A8u)

/** \brief 68AC, Action Definition Register 11 */
#define MCDS_SPBACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168ACu)

/** \brief 68B0, Action Definition Register 12 */
#define MCDS_SPBACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B0u)

/** \brief 68B4, Action Definition Register 13 */
#define MCDS_SPBACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B4u)

/** \brief 68B8, Action Definition Register 14 */
#define MCDS_SPBACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SPBACT*)0xFA0168B8u)

/** \brief 7000, Debug Status Register */
#define MCDS_SRIDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIDCSTS*)0xFA017000u)

/** \brief 7200, Lookup Table Data Register */
#define MCDS_SRI1BALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALLUTD*)0xFA017200u)

/** \brief 7204, Lookup Table Address Register */
#define MCDS_SRI1BALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALLUTA*)0xFA017204u)

/** \brief 7210, Lookup Table Base Register */
#define MCDS_SRI1BALBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALBND*)0xFA017210u)

/** \brief 7214, Lookup Table Range Register */
#define MCDS_SRI1BALRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALRNG*)0xFA017214u)

/** \brief 7218, Lookup Table Mapping Register */
#define MCDS_SRI1BALMAP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALMAP*)0xFA017218u)

/** \brief 7220, Lookup Table Base Register */
#define MCDS_SRI1BALBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALBND*)0xFA017220u)

/** \brief 7224, Lookup Table Range Register */
#define MCDS_SRI1BALRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALRNG*)0xFA017224u)

/** \brief 7228, Lookup Table Mapping Register */
#define MCDS_SRI1BALMAP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALMAP*)0xFA017228u)

/** \brief 7230, Lookup Table Base Register */
#define MCDS_SRI1BALBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALBND*)0xFA017230u)

/** \brief 7234, Lookup Table Range Register */
#define MCDS_SRI1BALRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALRNG*)0xFA017234u)

/** \brief 7238, Lookup Table Mapping Register */
#define MCDS_SRI1BALMAP2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALMAP*)0xFA017238u)

/** \brief 7240, Lookup Table Base Register */
#define MCDS_SRI1BALBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALBND*)0xFA017240u)

/** \brief 7244, Lookup Table Range Register */
#define MCDS_SRI1BALRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALRNG*)0xFA017244u)

/** \brief 7248, Lookup Table Mapping Register */
#define MCDS_SRI1BALMAP3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1BALMAP*)0xFA017248u)

/** \brief 7300, Lookup Table Data Register */
#define MCDS_SRI2BALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALLUTD*)0xFA017300u)

/** \brief 7304, Lookup Table Address Register */
#define MCDS_SRI2BALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALLUTA*)0xFA017304u)

/** \brief 7310, Lookup Table Base Register */
#define MCDS_SRI2BALBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALBND*)0xFA017310u)

/** \brief 7314, Lookup Table Range Register */
#define MCDS_SRI2BALRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALRNG*)0xFA017314u)

/** \brief 7318, Lookup Table Mapping Register */
#define MCDS_SRI2BALMAP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALMAP*)0xFA017318u)

/** \brief 7320, Lookup Table Base Register */
#define MCDS_SRI2BALBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALBND*)0xFA017320u)

/** \brief 7324, Lookup Table Range Register */
#define MCDS_SRI2BALRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALRNG*)0xFA017324u)

/** \brief 7328, Lookup Table Mapping Register */
#define MCDS_SRI2BALMAP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALMAP*)0xFA017328u)

/** \brief 7330, Lookup Table Base Register */
#define MCDS_SRI2BALBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALBND*)0xFA017330u)

/** \brief 7334, Lookup Table Range Register */
#define MCDS_SRI2BALRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALRNG*)0xFA017334u)

/** \brief 7338, Lookup Table Mapping Register */
#define MCDS_SRI2BALMAP2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALMAP*)0xFA017338u)

/** \brief 7340, Lookup Table Base Register */
#define MCDS_SRI2BALBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALBND*)0xFA017340u)

/** \brief 7344, Lookup Table Range Register */
#define MCDS_SRI2BALRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALRNG*)0xFA017344u)

/** \brief 7348, Lookup Table Mapping Register */
#define MCDS_SRI2BALMAP3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2BALMAP*)0xFA017348u)

/** \brief 7400, Comparator Bound Register 0 */
#define MCDS_SRI1EABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EABND*)0xFA017400u)

/** \brief 7404, Comparator Range Register 0 */
#define MCDS_SRI1EARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EARNG*)0xFA017404u)

/** \brief 7410, Comparator Bound Register 1 */
#define MCDS_SRI1EABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EABND*)0xFA017410u)

/** \brief 7414, Comparator Range Register 1 */
#define MCDS_SRI1EARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EARNG*)0xFA017414u)

/** \brief 7420, Comparator Bound Register 2 */
#define MCDS_SRI1EABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EABND*)0xFA017420u)

/** \brief 7424, Comparator Range Register 2 */
#define MCDS_SRI1EARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EARNG*)0xFA017424u)

/** \brief 7430, Comparator Bound Register 3 */
#define MCDS_SRI1EABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EABND*)0xFA017430u)

/** \brief 7434, Comparator Range Register 3 */
#define MCDS_SRI1EARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1EARNG*)0xFA017434u)

/** \brief 7480, Comparator Bound Register 0 */
#define MCDS_SRI1WDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDBND*)0xFA017480u)

/** \brief 7484, Comparator Bound Register 0 */
#define MCDS_SRI1WDHBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHBND*)0xFA017484u)

/** \brief 7488, Comparator Range Register 0 */
#define MCDS_SRI1WDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDRNG*)0xFA017488u)

/** \brief 748C, Comparator Range Register 0 */
#define MCDS_SRI1WDHRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHRNG*)0xFA01748Cu)

/** \brief 7490, Comparator Mask Register 0 */
#define MCDS_SRI1WDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDMSK*)0xFA017490u)

/** \brief 7494, Comparator Mask Register 0 */
#define MCDS_SRI1WDHMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHMSK*)0xFA017494u)

/** \brief 749C, Comparator Sign Register 0 */
#define MCDS_SRI1WDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDSGN*)0xFA01749Cu)

/** \brief 74A0, Comparator Bound Register 1 */
#define MCDS_SRI1WDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDBND*)0xFA0174A0u)

/** \brief 74A4, Comparator Bound Register 1 */
#define MCDS_SRI1WDHBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHBND*)0xFA0174A4u)

/** \brief 74A8, Comparator Range Register 1 */
#define MCDS_SRI1WDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDRNG*)0xFA0174A8u)

/** \brief 74AC, Comparator Range Register 1 */
#define MCDS_SRI1WDHRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHRNG*)0xFA0174ACu)

/** \brief 74B0, Comparator Mask Register 1 */
#define MCDS_SRI1WDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDMSK*)0xFA0174B0u)

/** \brief 74B4, Comparator Mask Register 1 */
#define MCDS_SRI1WDHMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHMSK*)0xFA0174B4u)

/** \brief 74BC, Comparator Sign Register 1 */
#define MCDS_SRI1WDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDSGN*)0xFA0174BCu)

/** \brief 74C0, Comparator Bound Register 2 */
#define MCDS_SRI1WDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDBND*)0xFA0174C0u)

/** \brief 74C4, Comparator Bound Register 2 */
#define MCDS_SRI1WDHBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHBND*)0xFA0174C4u)

/** \brief 74C8, Comparator Range Register 2 */
#define MCDS_SRI1WDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDRNG*)0xFA0174C8u)

/** \brief 74CC, Comparator Range Register 2 */
#define MCDS_SRI1WDHRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHRNG*)0xFA0174CCu)

/** \brief 74D0, Comparator Mask Register 2 */
#define MCDS_SRI1WDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDMSK*)0xFA0174D0u)

/** \brief 74D4, Comparator Mask Register 2 */
#define MCDS_SRI1WDHMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHMSK*)0xFA0174D4u)

/** \brief 74DC, Comparator Sign Register 2 */
#define MCDS_SRI1WDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDSGN*)0xFA0174DCu)

/** \brief 74E0, Comparator Bound Register 3 */
#define MCDS_SRI1WDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDBND*)0xFA0174E0u)

/** \brief 74E4, Comparator Bound Register 3 */
#define MCDS_SRI1WDHBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHBND*)0xFA0174E4u)

/** \brief 74E8, Comparator Range Register 3 */
#define MCDS_SRI1WDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDRNG*)0xFA0174E8u)

/** \brief 74EC, Comparator Range Register 3 */
#define MCDS_SRI1WDHRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHRNG*)0xFA0174ECu)

/** \brief 74F0, Comparator Mask Register 3 */
#define MCDS_SRI1WDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDMSK*)0xFA0174F0u)

/** \brief 74F4, Comparator Mask Register 3 */
#define MCDS_SRI1WDHMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDHMSK*)0xFA0174F4u)

/** \brief 74FC, Comparator Sign Register 3 */
#define MCDS_SRI1WDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1WDSGN*)0xFA0174FCu)

/** \brief 7500, Comparator Bound Register 0 */
#define MCDS_SRI1ACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACBND*)0xFA017500u)

/** \brief 7504, Comparator Range Register 0 */
#define MCDS_SRI1ACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACRNG*)0xFA017504u)

/** \brief 7508, Comparator Mask Register 0 */
#define MCDS_SRI1ACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACMSK*)0xFA017508u)

/** \brief 7510, Comparator Bound Register 1 */
#define MCDS_SRI1ACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACBND*)0xFA017510u)

/** \brief 7514, Comparator Range Register 1 */
#define MCDS_SRI1ACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACRNG*)0xFA017514u)

/** \brief 7518, Comparator Mask Register 1 */
#define MCDS_SRI1ACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACMSK*)0xFA017518u)

/** \brief 7520, Comparator Bound Register 2 */
#define MCDS_SRI1ACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACBND*)0xFA017520u)

/** \brief 7524, Comparator Range Register 2 */
#define MCDS_SRI1ACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACRNG*)0xFA017524u)

/** \brief 7528, Comparator Mask Register 2 */
#define MCDS_SRI1ACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACMSK*)0xFA017528u)

/** \brief 7530, Comparator Bound Register 3 */
#define MCDS_SRI1ACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACBND*)0xFA017530u)

/** \brief 7534, Comparator Range Register 3 */
#define MCDS_SRI1ACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACRNG*)0xFA017534u)

/** \brief 7538, Comparator Mask Register 3 */
#define MCDS_SRI1ACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1ACMSK*)0xFA017538u)

/** \brief 7580, DTU FIFOs Fill Level */
#define MCDS_SRI1DTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI1DTUFLV*)0xFA017580u)

/** \brief 7600, Comparator Bound Register 0 */
#define MCDS_SRI2EABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EABND*)0xFA017600u)

/** \brief 7604, Comparator Range Register 0 */
#define MCDS_SRI2EARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EARNG*)0xFA017604u)

/** \brief 7610, Comparator Bound Register 1 */
#define MCDS_SRI2EABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EABND*)0xFA017610u)

/** \brief 7614, Comparator Range Register 1 */
#define MCDS_SRI2EARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EARNG*)0xFA017614u)

/** \brief 7620, Comparator Bound Register 2 */
#define MCDS_SRI2EABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EABND*)0xFA017620u)

/** \brief 7624, Comparator Range Register 2 */
#define MCDS_SRI2EARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EARNG*)0xFA017624u)

/** \brief 7630, Comparator Bound Register 3 */
#define MCDS_SRI2EABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EABND*)0xFA017630u)

/** \brief 7634, Comparator Range Register 3 */
#define MCDS_SRI2EARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2EARNG*)0xFA017634u)

/** \brief 7680, Comparator Bound Register 0 */
#define MCDS_SRI2WDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDBND*)0xFA017680u)

/** \brief 7684, Comparator Bound Register 0 */
#define MCDS_SRI2WDHBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHBND*)0xFA017684u)

/** \brief 7688, Comparator Range Register 0 */
#define MCDS_SRI2WDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDRNG*)0xFA017688u)

/** \brief 768C, Comparator Range Register 0 */
#define MCDS_SRI2WDHRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHRNG*)0xFA01768Cu)

/** \brief 7690, Comparator Mask Register 0 */
#define MCDS_SRI2WDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDMSK*)0xFA017690u)

/** \brief 7694, Comparator Mask Register 0 */
#define MCDS_SRI2WDHMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHMSK*)0xFA017694u)

/** \brief 769C, Comparator Sign Register 0 */
#define MCDS_SRI2WDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDSGN*)0xFA01769Cu)

/** \brief 76A0, Comparator Bound Register 1 */
#define MCDS_SRI2WDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDBND*)0xFA0176A0u)

/** \brief 76A4, Comparator Bound Register 1 */
#define MCDS_SRI2WDHBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHBND*)0xFA0176A4u)

/** \brief 76A8, Comparator Range Register 1 */
#define MCDS_SRI2WDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDRNG*)0xFA0176A8u)

/** \brief 76AC, Comparator Range Register 1 */
#define MCDS_SRI2WDHRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHRNG*)0xFA0176ACu)

/** \brief 76B0, Comparator Mask Register 1 */
#define MCDS_SRI2WDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDMSK*)0xFA0176B0u)

/** \brief 76B4, Comparator Mask Register 1 */
#define MCDS_SRI2WDHMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHMSK*)0xFA0176B4u)

/** \brief 76BC, Comparator Sign Register 1 */
#define MCDS_SRI2WDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDSGN*)0xFA0176BCu)

/** \brief 76C0, Comparator Bound Register 2 */
#define MCDS_SRI2WDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDBND*)0xFA0176C0u)

/** \brief 76C4, Comparator Bound Register 2 */
#define MCDS_SRI2WDHBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHBND*)0xFA0176C4u)

/** \brief 76C8, Comparator Range Register 2 */
#define MCDS_SRI2WDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDRNG*)0xFA0176C8u)

/** \brief 76CC, Comparator Range Register 2 */
#define MCDS_SRI2WDHRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHRNG*)0xFA0176CCu)

/** \brief 76D0, Comparator Mask Register 2 */
#define MCDS_SRI2WDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDMSK*)0xFA0176D0u)

/** \brief 76D4, Comparator Mask Register 2 */
#define MCDS_SRI2WDHMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHMSK*)0xFA0176D4u)

/** \brief 76DC, Comparator Sign Register 2 */
#define MCDS_SRI2WDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDSGN*)0xFA0176DCu)

/** \brief 76E0, Comparator Bound Register 3 */
#define MCDS_SRI2WDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDBND*)0xFA0176E0u)

/** \brief 76E4, Comparator Bound Register 3 */
#define MCDS_SRI2WDHBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHBND*)0xFA0176E4u)

/** \brief 76E8, Comparator Range Register 3 */
#define MCDS_SRI2WDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDRNG*)0xFA0176E8u)

/** \brief 76EC, Comparator Range Register 3 */
#define MCDS_SRI2WDHRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHRNG*)0xFA0176ECu)

/** \brief 76F0, Comparator Mask Register 3 */
#define MCDS_SRI2WDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDMSK*)0xFA0176F0u)

/** \brief 76F4, Comparator Mask Register 3 */
#define MCDS_SRI2WDHMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDHMSK*)0xFA0176F4u)

/** \brief 76FC, Comparator Sign Register 3 */
#define MCDS_SRI2WDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2WDSGN*)0xFA0176FCu)

/** \brief 7700, Comparator Bound Register 0 */
#define MCDS_SRI2ACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACBND*)0xFA017700u)

/** \brief 7704, Comparator Range Register 0 */
#define MCDS_SRI2ACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACRNG*)0xFA017704u)

/** \brief 7708, Comparator Mask Register 0 */
#define MCDS_SRI2ACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACMSK*)0xFA017708u)

/** \brief 7710, Comparator Bound Register 1 */
#define MCDS_SRI2ACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACBND*)0xFA017710u)

/** \brief 7714, Comparator Range Register 1 */
#define MCDS_SRI2ACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACRNG*)0xFA017714u)

/** \brief 7718, Comparator Mask Register 1 */
#define MCDS_SRI2ACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACMSK*)0xFA017718u)

/** \brief 7720, Comparator Bound Register 2 */
#define MCDS_SRI2ACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACBND*)0xFA017720u)

/** \brief 7724, Comparator Range Register 2 */
#define MCDS_SRI2ACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACRNG*)0xFA017724u)

/** \brief 7728, Comparator Mask Register 2 */
#define MCDS_SRI2ACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACMSK*)0xFA017728u)

/** \brief 7730, Comparator Bound Register 3 */
#define MCDS_SRI2ACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACBND*)0xFA017730u)

/** \brief 7734, Comparator Range Register 3 */
#define MCDS_SRI2ACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACRNG*)0xFA017734u)

/** \brief 7738, Comparator Mask Register 3 */
#define MCDS_SRI2ACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2ACMSK*)0xFA017738u)

/** \brief 7780, DTU FIFOs Fill Level */
#define MCDS_SRI2DTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRI2DTUFLV*)0xFA017780u)

/** \brief 7800, Event Definition Register 0 */
#define MCDS_SRIEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017800u)

/** \brief 7804, Event Definition Register 1 */
#define MCDS_SRIEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017804u)

/** \brief 7808, Event Definition Register 2 */
#define MCDS_SRIEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017808u)

/** \brief 780C, Event Definition Register 3 */
#define MCDS_SRIEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01780Cu)

/** \brief 7810, Event Definition Register 4 */
#define MCDS_SRIEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017810u)

/** \brief 7814, Event Definition Register 5 */
#define MCDS_SRIEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017814u)

/** \brief 7818, Event Definition Register 6 */
#define MCDS_SRIEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017818u)

/** \brief 781C, Event Definition Register 7 */
#define MCDS_SRIEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01781Cu)

/** \brief 7820, Event Definition Register 8 */
#define MCDS_SRIEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017820u)

/** \brief 7824, Event Definition Register 9 */
#define MCDS_SRIEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017824u)

/** \brief 7828, Event Definition Register 10 */
#define MCDS_SRIEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017828u)

/** \brief 782C, Event Definition Register 11 */
#define MCDS_SRIEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01782Cu)

/** \brief 7830, Event Definition Register 12 */
#define MCDS_SRIEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017830u)

/** \brief 7834, Event Definition Register 13 */
#define MCDS_SRIEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017834u)

/** \brief 7838, Event Definition Register 14 */
#define MCDS_SRIEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA017838u)

/** \brief 783C, Event Definition Register 15 */
#define MCDS_SRIEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIEVT*)0xFA01783Cu)

/** \brief 7880, Action Definition Register 0 */
#define MCDS_SRIACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017880u)

/** \brief 7884, Action Definition Register 1 */
#define MCDS_SRIACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017884u)

/** \brief 7888, Action Definition Register 2 */
#define MCDS_SRIACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017888u)

/** \brief 788C, Action Definition Register 3 */
#define MCDS_SRIACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA01788Cu)

/** \brief 7890, Action Definition Register 4 */
#define MCDS_SRIACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017890u)

/** \brief 7894, Action Definition Register 5 */
#define MCDS_SRIACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017894u)

/** \brief 7898, Action Definition Register 6 */
#define MCDS_SRIACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA017898u)

/** \brief 789C, Action Definition Register 7 */
#define MCDS_SRIACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA01789Cu)

/** \brief 78A0, Action Definition Register 8 */
#define MCDS_SRIACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A0u)

/** \brief 78A4, Action Definition Register 9 */
#define MCDS_SRIACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A4u)

/** \brief 78A8, Action Definition Register 10 */
#define MCDS_SRIACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178A8u)

/** \brief 78AC, Action Definition Register 11 */
#define MCDS_SRIACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178ACu)

/** \brief 78B0, Action Definition Register 12 */
#define MCDS_SRIACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B0u)

/** \brief 78B4, Action Definition Register 13 */
#define MCDS_SRIACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B4u)

/** \brief 78B8, Action Definition Register 14 */
#define MCDS_SRIACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178B8u)

/** \brief 78BC, Action Definition Register 15 */
#define MCDS_SRIACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178BCu)

/** \brief 78C0, Action Definition Register 16 */
#define MCDS_SRIACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C0u)

/** \brief 78C4, Action Definition Register 17 */
#define MCDS_SRIACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C4u)

/** \brief 78C8, Action Definition Register 18 */
#define MCDS_SRIACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178C8u)

/** \brief 78CC, Action Definition Register 19 */
#define MCDS_SRIACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178CCu)

/** \brief 78D0, Action Definition Register 20 */
#define MCDS_SRIACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D0u)

/** \brief 78D4, Action Definition Register 21 */
#define MCDS_SRIACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D4u)

/** \brief 78D8, Action Definition Register 22 */
#define MCDS_SRIACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178D8u)

/** \brief 78DC, Action Definition Register 23 */
#define MCDS_SRIACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178DCu)

/** \brief 78E0, Action Definition Register 24 */
#define MCDS_SRIACT24 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E0u)

/** \brief 78E4, Action Definition Register 25 */
#define MCDS_SRIACT25 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E4u)

/** \brief 78E8, Action Definition Register 26 */
#define MCDS_SRIACT26 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_SRIACT*)0xFA0178E8u)

/** \brief 8000, Debug Status Register */
#define MCDS_TCZDCSTS /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZDCSTS*)0xFA018000u)

/** \brief 8004, Current Process ID */
#define MCDS_TCZCID /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCID*)0xFA018004u)

/** \brief 8008, Current Instruction Pointer */
#define MCDS_TCZCIP /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCIP*)0xFA018008u)

/** \brief 800C, Compact Function Trace Register */
#define MCDS_TCZCFT /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZCFT*)0xFA01800Cu)

/** \brief 8200, Lookup Table Data Register */
#define MCDS_TCZPALLUTD /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALLUTD*)0xFA018200u)

/** \brief 8204, Lookup Table Address Register */
#define MCDS_TCZPALLUTA /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALLUTA*)0xFA018204u)

/** \brief 8210, Lookup Table Base Register */
#define MCDS_TCZPALBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALBND*)0xFA018210u)

/** \brief 8214, Lookup Table Range Register */
#define MCDS_TCZPALRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALRNG*)0xFA018214u)

/** \brief 8218, Lookup Table Mapping Register */
#define MCDS_TCZPALMAP0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALMAP*)0xFA018218u)

/** \brief 8220, Lookup Table Base Register */
#define MCDS_TCZPALBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALBND*)0xFA018220u)

/** \brief 8224, Lookup Table Range Register */
#define MCDS_TCZPALRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALRNG*)0xFA018224u)

/** \brief 8228, Lookup Table Mapping Register */
#define MCDS_TCZPALMAP1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALMAP*)0xFA018228u)

/** \brief 8230, Lookup Table Base Register */
#define MCDS_TCZPALBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALBND*)0xFA018230u)

/** \brief 8234, Lookup Table Range Register */
#define MCDS_TCZPALRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALRNG*)0xFA018234u)

/** \brief 8238, Lookup Table Mapping Register */
#define MCDS_TCZPALMAP2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALMAP*)0xFA018238u)

/** \brief 8240, Lookup Table Base Register */
#define MCDS_TCZPALBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALBND*)0xFA018240u)

/** \brief 8244, Lookup Table Range Register */
#define MCDS_TCZPALRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALRNG*)0xFA018244u)

/** \brief 8248, Lookup Table Mapping Register */
#define MCDS_TCZPALMAP3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZPALMAP*)0xFA018248u)

/** \brief 8400, Comparator Bound Register 0 */
#define MCDS_TCZEABND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018400u)

/** \brief 8404, Comparator Range Register 0 */
#define MCDS_TCZEARNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018404u)

/** \brief 8410, Comparator Bound Register 1 */
#define MCDS_TCZEABND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018410u)

/** \brief 8414, Comparator Range Register 1 */
#define MCDS_TCZEARNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018414u)

/** \brief 8420, Comparator Bound Register 2 */
#define MCDS_TCZEABND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018420u)

/** \brief 8424, Comparator Range Register 2 */
#define MCDS_TCZEARNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018424u)

/** \brief 8430, Comparator Bound Register 3 */
#define MCDS_TCZEABND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018430u)

/** \brief 8434, Comparator Range Register 3 */
#define MCDS_TCZEARNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018434u)

/** \brief 8440, Comparator Bound Register 4 */
#define MCDS_TCZEABND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018440u)

/** \brief 8444, Comparator Range Register 4 */
#define MCDS_TCZEARNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018444u)

/** \brief 8450, Comparator Bound Register 5 */
#define MCDS_TCZEABND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018450u)

/** \brief 8454, Comparator Range Register 5 */
#define MCDS_TCZEARNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018454u)

/** \brief 8460, Comparator Bound Register 6 */
#define MCDS_TCZEABND6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018460u)

/** \brief 8464, Comparator Range Register 6 */
#define MCDS_TCZEARNG6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018464u)

/** \brief 8470, Comparator Bound Register 7 */
#define MCDS_TCZEABND7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEABND*)0xFA018470u)

/** \brief 8474, Comparator Range Register 7 */
#define MCDS_TCZEARNG7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEARNG*)0xFA018474u)

/** \brief 8480, Comparator Bound Register 0 */
#define MCDS_TCZWDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDBND*)0xFA018480u)

/** \brief 8484, Comparator Bound Register 0 */
#define MCDS_TCZWDHBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHBND*)0xFA018484u)

/** \brief 8488, Comparator Range Register 0 */
#define MCDS_TCZWDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDRNG*)0xFA018488u)

/** \brief 848C, Comparator Range Register 0 */
#define MCDS_TCZWDHRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHRNG*)0xFA01848Cu)

/** \brief 8490, Comparator Mask Register 0 */
#define MCDS_TCZWDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDMSK*)0xFA018490u)

/** \brief 8494, Comparator Mask Register 0 */
#define MCDS_TCZWDHMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHMSK*)0xFA018494u)

/** \brief 849C, Comparator Sign Register 0 */
#define MCDS_TCZWDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDSGN*)0xFA01849Cu)

/** \brief 84A0, Comparator Bound Register 1 */
#define MCDS_TCZWDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDBND*)0xFA0184A0u)

/** \brief 84A4, Comparator Bound Register 1 */
#define MCDS_TCZWDHBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHBND*)0xFA0184A4u)

/** \brief 84A8, Comparator Range Register 1 */
#define MCDS_TCZWDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDRNG*)0xFA0184A8u)

/** \brief 84AC, Comparator Range Register 1 */
#define MCDS_TCZWDHRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHRNG*)0xFA0184ACu)

/** \brief 84B0, Comparator Mask Register 1 */
#define MCDS_TCZWDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDMSK*)0xFA0184B0u)

/** \brief 84B4, Comparator Mask Register 1 */
#define MCDS_TCZWDHMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHMSK*)0xFA0184B4u)

/** \brief 84BC, Comparator Sign Register 1 */
#define MCDS_TCZWDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDSGN*)0xFA0184BCu)

/** \brief 84C0, Comparator Bound Register 2 */
#define MCDS_TCZWDBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDBND*)0xFA0184C0u)

/** \brief 84C4, Comparator Bound Register 2 */
#define MCDS_TCZWDHBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHBND*)0xFA0184C4u)

/** \brief 84C8, Comparator Range Register 2 */
#define MCDS_TCZWDRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDRNG*)0xFA0184C8u)

/** \brief 84CC, Comparator Range Register 2 */
#define MCDS_TCZWDHRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHRNG*)0xFA0184CCu)

/** \brief 84D0, Comparator Mask Register 2 */
#define MCDS_TCZWDMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDMSK*)0xFA0184D0u)

/** \brief 84D4, Comparator Mask Register 2 */
#define MCDS_TCZWDHMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHMSK*)0xFA0184D4u)

/** \brief 84DC, Comparator Sign Register 2 */
#define MCDS_TCZWDSGN2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDSGN*)0xFA0184DCu)

/** \brief 84E0, Comparator Bound Register 3 */
#define MCDS_TCZWDBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDBND*)0xFA0184E0u)

/** \brief 84E4, Comparator Bound Register 3 */
#define MCDS_TCZWDHBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHBND*)0xFA0184E4u)

/** \brief 84E8, Comparator Range Register 3 */
#define MCDS_TCZWDRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDRNG*)0xFA0184E8u)

/** \brief 84EC, Comparator Range Register 3 */
#define MCDS_TCZWDHRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHRNG*)0xFA0184ECu)

/** \brief 84F0, Comparator Mask Register 3 */
#define MCDS_TCZWDMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDMSK*)0xFA0184F0u)

/** \brief 84F4, Comparator Mask Register 3 */
#define MCDS_TCZWDHMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDHMSK*)0xFA0184F4u)

/** \brief 84FC, Comparator Sign Register 3 */
#define MCDS_TCZWDSGN3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZWDSGN*)0xFA0184FCu)

/** \brief 8500, Comparator Bound Register 0 */
#define MCDS_TCZACBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACBND*)0xFA018500u)

/** \brief 8504, Comparator Range Register 0 */
#define MCDS_TCZACRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACRNG*)0xFA018504u)

/** \brief 8508, Comparator Mask Register 0 */
#define MCDS_TCZACMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACMSK*)0xFA018508u)

/** \brief 8510, Comparator Bound Register 1 */
#define MCDS_TCZACBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACBND*)0xFA018510u)

/** \brief 8514, Comparator Range Register 1 */
#define MCDS_TCZACRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACRNG*)0xFA018514u)

/** \brief 8518, Comparator Mask Register 1 */
#define MCDS_TCZACMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACMSK*)0xFA018518u)

/** \brief 8520, Comparator Bound Register 2 */
#define MCDS_TCZACBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACBND*)0xFA018520u)

/** \brief 8524, Comparator Range Register 2 */
#define MCDS_TCZACRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACRNG*)0xFA018524u)

/** \brief 8528, Comparator Mask Register 2 */
#define MCDS_TCZACMSK2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACMSK*)0xFA018528u)

/** \brief 8530, Comparator Bound Register 3 */
#define MCDS_TCZACBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACBND*)0xFA018530u)

/** \brief 8534, Comparator Range Register 3 */
#define MCDS_TCZACRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACRNG*)0xFA018534u)

/** \brief 8538, Comparator Mask Register 3 */
#define MCDS_TCZACMSK3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACMSK*)0xFA018538u)

/** \brief 8580, DTU FIFOs Fill Level */
#define MCDS_TCZDTUFLV /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZDTUFLV*)0xFA018580u)

/** \brief 8800, Event Definition Register 0 */
#define MCDS_TCZEVT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018800u)

/** \brief 8804, Event Definition Register 1 */
#define MCDS_TCZEVT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018804u)

/** \brief 8808, Event Definition Register 2 */
#define MCDS_TCZEVT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018808u)

/** \brief 880C, Event Definition Register 3 */
#define MCDS_TCZEVT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01880Cu)

/** \brief 8810, Event Definition Register 4 */
#define MCDS_TCZEVT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018810u)

/** \brief 8814, Event Definition Register 5 */
#define MCDS_TCZEVT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018814u)

/** \brief 8818, Event Definition Register 6 */
#define MCDS_TCZEVT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018818u)

/** \brief 881C, Event Definition Register 7 */
#define MCDS_TCZEVT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01881Cu)

/** \brief 8820, Event Definition Register 8 */
#define MCDS_TCZEVT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018820u)

/** \brief 8824, Event Definition Register 9 */
#define MCDS_TCZEVT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018824u)

/** \brief 8828, Event Definition Register 10 */
#define MCDS_TCZEVT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018828u)

/** \brief 882C, Event Definition Register 11 */
#define MCDS_TCZEVT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01882Cu)

/** \brief 8830, Event Definition Register 12 */
#define MCDS_TCZEVT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018830u)

/** \brief 8834, Event Definition Register 13 */
#define MCDS_TCZEVT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018834u)

/** \brief 8838, Event Definition Register 14 */
#define MCDS_TCZEVT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA018838u)

/** \brief 883C, Event Definition Register 15 */
#define MCDS_TCZEVT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZEVT*)0xFA01883Cu)

/** \brief 8880, Action Definition Register 0 */
#define MCDS_TCZACT0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018880u)

/** \brief 8884, Action Definition Register 1 */
#define MCDS_TCZACT1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018884u)

/** \brief 8888, Action Definition Register 2 */
#define MCDS_TCZACT2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018888u)

/** \brief 888C, Action Definition Register 3 */
#define MCDS_TCZACT3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA01888Cu)

/** \brief 8890, Action Definition Register 4 */
#define MCDS_TCZACT4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018890u)

/** \brief 8894, Action Definition Register 5 */
#define MCDS_TCZACT5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018894u)

/** \brief 8898, Action Definition Register 6 */
#define MCDS_TCZACT6 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA018898u)

/** \brief 889C, Action Definition Register 7 */
#define MCDS_TCZACT7 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA01889Cu)

/** \brief 88A0, Action Definition Register 8 */
#define MCDS_TCZACT8 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A0u)

/** \brief 88A4, Action Definition Register 9 */
#define MCDS_TCZACT9 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A4u)

/** \brief 88A8, Action Definition Register 10 */
#define MCDS_TCZACT10 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188A8u)

/** \brief 88AC, Action Definition Register 11 */
#define MCDS_TCZACT11 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188ACu)

/** \brief 88B0, Action Definition Register 12 */
#define MCDS_TCZACT12 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B0u)

/** \brief 88B4, Action Definition Register 13 */
#define MCDS_TCZACT13 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B4u)

/** \brief 88B8, Action Definition Register 14 */
#define MCDS_TCZACT14 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188B8u)

/** \brief 88BC, Action Definition Register 15 */
#define MCDS_TCZACT15 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188BCu)

/** \brief 88C0, Action Definition Register 16 */
#define MCDS_TCZACT16 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C0u)

/** \brief 88C4, Action Definition Register 17 */
#define MCDS_TCZACT17 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C4u)

/** \brief 88C8, Action Definition Register 18 */
#define MCDS_TCZACT18 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188C8u)

/** \brief 88CC, Action Definition Register 19 */
#define MCDS_TCZACT19 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188CCu)

/** \brief 88D0, Action Definition Register 20 */
#define MCDS_TCZACT20 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D0u)

/** \brief 88D4, Action Definition Register 21 */
#define MCDS_TCZACT21 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D4u)

/** \brief 88D8, Action Definition Register 22 */
#define MCDS_TCZACT22 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188D8u)

/** \brief 88DC, Action Definition Register 23 */
#define MCDS_TCZACT23 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZACT*)0xFA0188DCu)

/** \brief 8C00, Comparator Bound Register 0 */
#define MCDS_TCZIDBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDBND*)0xFA018C00u)

/** \brief 8C04, Comparator Range Register 0 */
#define MCDS_TCZIDRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDRNG*)0xFA018C04u)

/** \brief 8C08, Comparator Mask Register 0 */
#define MCDS_TCZIDMSK0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDMSK*)0xFA018C08u)

/** \brief 8C0C, Comparator Sign Register 0 */
#define MCDS_TCZIDSGN0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDSGN*)0xFA018C0Cu)

/** \brief 8C10, Comparator Bound Register 1 */
#define MCDS_TCZIDBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDBND*)0xFA018C10u)

/** \brief 8C14, Comparator Range Register 1 */
#define MCDS_TCZIDRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDRNG*)0xFA018C14u)

/** \brief 8C18, Comparator Mask Register 1 */
#define MCDS_TCZIDMSK1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDMSK*)0xFA018C18u)

/** \brief 8C1C, Comparator Sign Register 1 */
#define MCDS_TCZIDSGN1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIDSGN*)0xFA018C1Cu)

/** \brief 9000, Comparator Bound Register 0 */
#define MCDS_TCZIPBND0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019000u)

/** \brief 9004, Comparator Range Register 0 */
#define MCDS_TCZIPRNG0 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019004u)

/** \brief 9010, Comparator Bound Register 1 */
#define MCDS_TCZIPBND1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019010u)

/** \brief 9014, Comparator Range Register 1 */
#define MCDS_TCZIPRNG1 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019014u)

/** \brief 9020, Comparator Bound Register 2 */
#define MCDS_TCZIPBND2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019020u)

/** \brief 9024, Comparator Range Register 2 */
#define MCDS_TCZIPRNG2 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019024u)

/** \brief 9030, Comparator Bound Register 3 */
#define MCDS_TCZIPBND3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019030u)

/** \brief 9034, Comparator Range Register 3 */
#define MCDS_TCZIPRNG3 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019034u)

/** \brief 9040, Comparator Bound Register 4 */
#define MCDS_TCZIPBND4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019040u)

/** \brief 9044, Comparator Range Register 4 */
#define MCDS_TCZIPRNG4 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019044u)

/** \brief 9050, Comparator Bound Register 5 */
#define MCDS_TCZIPBND5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPBND*)0xFA019050u)

/** \brief 9054, Comparator Range Register 5 */
#define MCDS_TCZIPRNG5 /*lint --e(923, 9078)*/ (*(volatile Ifx_MCDS_TCZIPRNG*)0xFA019054u)


/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDS_REG_H */
