/**
 * \file IfxSmu_stdby_regdef.h
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
 * \defgroup IfxSfr_Smu_stdby_Registers Smu_stdby Registers
 * \ingroup IfxSfr
 * 
 * \defgroup IfxSfr_Smu_stdby_Registers_Bitfields Bitfields
 * \ingroup IfxSfr_Smu_stdby_Registers
 * 
 * \defgroup IfxSfr_Smu_stdby_Registers_union Register unions
 * \ingroup IfxSfr_Smu_stdby_Registers
 * 
 * \defgroup IfxSfr_Smu_stdby_Registers_struct Memory map
 * \ingroup IfxSfr_Smu_stdby_Registers
 */
#ifndef IFXSMU_STDBY_REGDEF_H
#define IFXSMU_STDBY_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/

/******************************************************************************/

/******************************************************************************/


/** \addtogroup IfxSfr_Smu_stdby_Registers_Bitfields
 * \{  */
/** \brief SMU_stdby FSP Configuration Register */
typedef struct _Ifx_SMU_STDBY_AGFSP_STDBY0_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit FE4:1;             /**< \brief [4:4] Fault signaling configuration flag for alarm 4 belonging to alarm group i. - FE4 (rw) */
    Ifx_UReg_32Bit FE5:1;             /**< \brief [5:5] Fault signaling configuration flag for alarm 5 belonging to alarm group i. - FE5 (rw) */
    Ifx_UReg_32Bit FE6:1;             /**< \brief [6:6] Fault signaling configuration flag for alarm 6 belonging to alarm group i. - FE6 (rw) */
    Ifx_UReg_32Bit FE7:1;             /**< \brief [7:7] Fault signaling configuration flag for alarm 7 belonging to alarm group i. - FE7 (rw) */
    Ifx_UReg_32Bit FE8:1;             /**< \brief [8:8] Fault signaling configuration flag for alarm 8 belonging to alarm group i. - FE8 (rw) */
    Ifx_UReg_32Bit FE9:1;             /**< \brief [9:9] Fault signaling configuration flag for alarm 9 belonging to alarm group i. - FE9 (rw) */
    Ifx_UReg_32Bit FE10:1;            /**< \brief [10:10] Fault signaling configuration flag for alarm 10 belonging to alarm group i. - FE10 (rw) */
    Ifx_UReg_32Bit FE11:1;            /**< \brief [11:11] Fault signaling configuration flag for alarm 11 belonging to alarm group i. - FE11 (rw) */
    Ifx_UReg_32Bit FE12:1;            /**< \brief [12:12] Fault signaling configuration flag for alarm 12 belonging to alarm group i. - FE12 (rw) */
    Ifx_UReg_32Bit FE13:1;            /**< \brief [13:13] Fault signaling configuration flag for alarm 13 belonging to alarm group i. - FE13 (rw) */
    Ifx_UReg_32Bit FE14:1;            /**< \brief [14:14] Fault signaling configuration flag for alarm 14 belonging to alarm group i. - FE14 (rw) */
    Ifx_UReg_32Bit FE15:1;            /**< \brief [15:15] Fault signaling configuration flag for alarm 15 belonging to alarm group i. - FE15 (rw) */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:13;    /**< \brief [29:17] \internal Reserved */
    Ifx_UReg_32Bit BITPROT:1;         /**< \brief [30:30] AG2iFSP_STDBY register bits protection (w) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_AGFSP_STDBY0_Bits;

/** \brief SMU_stdby FSP Configuration Register */
typedef struct _Ifx_SMU_STDBY_AGFSP_STDBY1_Bits
{
    Ifx_UReg_32Bit FE0:1;             /**< \brief [0:0] Fault signaling configuration flag for alarm 0 belonging to alarm group i. - FE0 (rw) */
    Ifx_UReg_32Bit FE1:1;             /**< \brief [1:1] Fault signaling configuration flag for alarm 1 belonging to alarm group i. - FE1 (rw) */
    Ifx_UReg_32Bit FE2:1;             /**< \brief [2:2] Fault signaling configuration flag for alarm 2 belonging to alarm group i. - FE2 (rw) */
    Ifx_UReg_32Bit FE3:1;             /**< \brief [3:3] Fault signaling configuration flag for alarm 3 belonging to alarm group i. - FE3 (rw) */
    Ifx_UReg_32Bit FE4:1;             /**< \brief [4:4] Fault signaling configuration flag for alarm 4 belonging to alarm group i. - FE4 (rw) */
    Ifx_UReg_32Bit FE5:1;             /**< \brief [5:5] Fault signaling configuration flag for alarm 5 belonging to alarm group i. - FE5 (rw) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit FE7:1;             /**< \brief [7:7] Fault signaling configuration flag for alarm 7 belonging to alarm group i. - FE7 (rw) */
    Ifx_UReg_32Bit FE8:1;             /**< \brief [8:8] Fault signaling configuration flag for alarm 8 belonging to alarm group i. - FE8 (rw) */
    Ifx_UReg_32Bit FE9:1;             /**< \brief [9:9] Fault signaling configuration flag for alarm 9 belonging to alarm group i. - FE9 (rw) */
    Ifx_UReg_32Bit FE10:1;            /**< \brief [10:10] Fault signaling configuration flag for alarm 10 belonging to alarm group i. - FE10 (rw) */
    Ifx_UReg_32Bit FE11:1;            /**< \brief [11:11] Fault signaling configuration flag for alarm 11 belonging to alarm group i. - FE11 (rw) */
    Ifx_UReg_32Bit FE12:1;            /**< \brief [12:12] Fault signaling configuration flag for alarm 12 belonging to alarm group i. - FE12 (rw) */
    Ifx_UReg_32Bit FE13:1;            /**< \brief [13:13] Fault signaling configuration flag for alarm 13 belonging to alarm group i. - FE13 (rw) */
    Ifx_UReg_32Bit FE14:1;            /**< \brief [14:14] Fault signaling configuration flag for alarm 14 belonging to alarm group i. - FE14 (rw) */
    Ifx_UReg_32Bit FE15:1;            /**< \brief [15:15] Fault signaling configuration flag for alarm 15 belonging to alarm group i. - FE15 (rw) */
    Ifx_UReg_32Bit FE16:1;            /**< \brief [16:16] Fault signaling configuration flag for alarm 16 belonging to alarm group i. - FE16 (rw) */
    Ifx_UReg_32Bit reserved_17:13;    /**< \brief [29:17] \internal Reserved */
    Ifx_UReg_32Bit BITPROT:1;         /**< \brief [30:30] AG2iFSP_STDBY register bits protection (w) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_AGFSP_STDBY1_Bits;

/** \brief Alarm Status Register */
typedef struct _Ifx_SMU_STDBY_AG_STDBY0_Bits
{
    Ifx_UReg_32Bit reserved_0:1;      /**< \brief [0:0] \internal Reserved */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit reserved_2:1;      /**< \brief [2:2] \internal Reserved */
    Ifx_UReg_32Bit reserved_3:1;      /**< \brief [3:3] \internal Reserved */
    Ifx_UReg_32Bit SF4:1;             /**< \brief [4:4] Status flag for alarm 4 belonging to alarm group i. - SF4 (rwh) */
    Ifx_UReg_32Bit SF5:1;             /**< \brief [5:5] Status flag for alarm 5 belonging to alarm group i. - SF5 (rwh) */
    Ifx_UReg_32Bit SF6:1;             /**< \brief [6:6] Status flag for alarm 6 belonging to alarm group i. - SF6 (rwh) */
    Ifx_UReg_32Bit SF7:1;             /**< \brief [7:7] Status flag for alarm 7 belonging to alarm group i. - SF7 (rwh) */
    Ifx_UReg_32Bit SF8:1;             /**< \brief [8:8] Status flag for alarm 8 belonging to alarm group i. - SF8 (rwh) */
    Ifx_UReg_32Bit SF9:1;             /**< \brief [9:9] Status flag for alarm 9 belonging to alarm group i. - SF9 (rwh) */
    Ifx_UReg_32Bit SF10:1;            /**< \brief [10:10] Status flag for alarm 10 belonging to alarm group i. - SF10 (rwh) */
    Ifx_UReg_32Bit SF11:1;            /**< \brief [11:11] Status flag for alarm 11 belonging to alarm group i. - SF11 (rwh) */
    Ifx_UReg_32Bit SF12:1;            /**< \brief [12:12] Status flag for alarm 12 belonging to alarm group i. - SF12 (rwh) */
    Ifx_UReg_32Bit SF13:1;            /**< \brief [13:13] Status flag for alarm 13 belonging to alarm group i. - SF13 (rwh) */
    Ifx_UReg_32Bit SF14:1;            /**< \brief [14:14] Status flag for alarm 14 belonging to alarm group i. - SF14 (rwh) */
    Ifx_UReg_32Bit SF15:1;            /**< \brief [15:15] Status flag for alarm 15 belonging to alarm group i. - SF15 (rwh) */
    Ifx_UReg_32Bit reserved_16:1;     /**< \brief [16:16] \internal Reserved */
    Ifx_UReg_32Bit reserved_17:13;    /**< \brief [29:17] \internal Reserved */
    Ifx_UReg_32Bit FSPERR:1;          /**< \brief [30:30] Error Pin Fault State Status Bit - FSPERR (rwh) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_AG_STDBY0_Bits;

/** \brief Alarm Status Register */
typedef struct _Ifx_SMU_STDBY_AG_STDBY1_Bits
{
    Ifx_UReg_32Bit SF0:1;             /**< \brief [0:0] Status flag for alarm 0 belonging to alarm group i. - SF0 (rwh) */
    Ifx_UReg_32Bit SF1:1;             /**< \brief [1:1] Status flag for alarm 1 belonging to alarm group i. - SF1 (rwh) */
    Ifx_UReg_32Bit SF2:1;             /**< \brief [2:2] Status flag for alarm 2 belonging to alarm group i. - SF2 (rwh) */
    Ifx_UReg_32Bit SF3:1;             /**< \brief [3:3] Status flag for alarm 3 belonging to alarm group i. - SF3 (rwh) */
    Ifx_UReg_32Bit SF4:1;             /**< \brief [4:4] Status flag for alarm 4 belonging to alarm group i. - SF4 (rwh) */
    Ifx_UReg_32Bit SF5:1;             /**< \brief [5:5] Status flag for alarm 5 belonging to alarm group i. - SF5 (rwh) */
    Ifx_UReg_32Bit reserved_6:1;      /**< \brief [6:6] \internal Reserved */
    Ifx_UReg_32Bit SF7:1;             /**< \brief [7:7] Status flag for alarm 7 belonging to alarm group i. - SF7 (rwh) */
    Ifx_UReg_32Bit SF8:1;             /**< \brief [8:8] Status flag for alarm 8 belonging to alarm group i. - SF8 (rwh) */
    Ifx_UReg_32Bit SF9:1;             /**< \brief [9:9] Status flag for alarm 9 belonging to alarm group i. - SF9 (rwh) */
    Ifx_UReg_32Bit SF10:1;            /**< \brief [10:10] Status flag for alarm 10 belonging to alarm group i. - SF10 (rwh) */
    Ifx_UReg_32Bit SF11:1;            /**< \brief [11:11] Status flag for alarm 11 belonging to alarm group i. - SF11 (rwh) */
    Ifx_UReg_32Bit SF12:1;            /**< \brief [12:12] Status flag for alarm 12 belonging to alarm group i. - SF12 (rwh) */
    Ifx_UReg_32Bit SF13:1;            /**< \brief [13:13] Status flag for alarm 13 belonging to alarm group i. - SF13 (rwh) */
    Ifx_UReg_32Bit SF14:1;            /**< \brief [14:14] Status flag for alarm 14 belonging to alarm group i. - SF14 (rwh) */
    Ifx_UReg_32Bit SF15:1;            /**< \brief [15:15] Status flag for alarm 15 belonging to alarm group i. - SF15 (rwh) */
    Ifx_UReg_32Bit SF16:1;            /**< \brief [16:16] Status flag for alarm 16 belonging to alarm group i. - SF16 (rwh) */
    Ifx_UReg_32Bit reserved_17:13;    /**< \brief [29:17] \internal Reserved */
    Ifx_UReg_32Bit reserved_30:1;     /**< \brief [30:30] \internal Reserved */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_AG_STDBY1_Bits;

/** \brief SMU_stdby Command Register */
typedef struct _Ifx_SMU_STDBY_CMD_STDBY_Bits
{
    Ifx_UReg_32Bit SMUEN:1;           /**< \brief [0:0] SMU_stdby Module Enable - SMUEN (rw) */
    Ifx_UReg_32Bit FSP0EN:1;          /**< \brief [1:1] SMU_stdby FSP0 Error pin enable - FSP0EN (rw) */
    Ifx_UReg_32Bit FSP1EN:1;          /**< \brief [2:2] SMU_stdby FSP1 Error pin enable - FSP1EN (rw) */
    Ifx_UReg_32Bit ASCE:1;            /**< \brief [3:3] SMU_stdby alarm status clear enable - ASCE (rwh) */
    Ifx_UReg_32Bit reserved_4:26;     /**< \brief [29:4] \internal Reserved */
    Ifx_UReg_32Bit BITPROT:1;         /**< \brief [30:30] CMD_STDBY register bits protection (w) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_CMD_STDBY_Bits;

/** \brief SMU_stdby BIST Control Register */
typedef struct _Ifx_SMU_STDBY_MONBISTCTRL_Bits
{
    Ifx_UReg_32Bit TSTEN:1;           /**< \brief [0:0] SMU_stdby alarm BIST enable - TSTEN (rwh) */
    Ifx_UReg_32Bit TSTCLR:1;          /**< \brief [1:1] SMU_stdby BIST flag clear - TSTCLR (w) */
    Ifx_UReg_32Bit reserved_2:28;     /**< \brief [29:2] \internal Reserved */
    Ifx_UReg_32Bit BITPROT:1;         /**< \brief [30:30] Bit Protection TSTEN - BITPROT (w) */
    Ifx_UReg_32Bit reserved_31:1;     /**< \brief [31:31] \internal Reserved */
} Ifx_SMU_STDBY_MONBISTCTRL_Bits;

/** \brief SMU_stdby BIST Status Register */
typedef struct _Ifx_SMU_STDBY_MONBISTSTAT_Bits
{
    Ifx_UReg_32Bit TSTOK:1;           /**< \brief [0:0] SMU_stdby BIST ok bit - TSTOK (rh) */
    Ifx_UReg_32Bit reserved_1:1;      /**< \brief [1:1] \internal Reserved */
    Ifx_UReg_32Bit TSTRUN:1;          /**< \brief [2:2] SMU_stdby BIST run bit - TSTRUN (rh) */
    Ifx_UReg_32Bit TSTDONE:1;         /**< \brief [3:3] SMU_stdby BIST done bit - TSTDONE (rh) */
    Ifx_UReg_32Bit SMUERR:1;          /**< \brief [4:4] Error found in SMU_stdby found by SMU_stdby BIST (rh) */
    Ifx_UReg_32Bit PMSERR:1;          /**< \brief [5:5] Error found in PMS SARADC by SMU_stdby BIST (rh) */
    Ifx_UReg_32Bit reserved_6:26;     /**< \brief [31:6] \internal Reserved */
} Ifx_SMU_STDBY_MONBISTSTAT_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxSfr_smu_stdby_Registers_union
 * \{   */
/** \brief SMU_stdby FSP Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_AGFSP_STDBY0_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_AGFSP_STDBY0;

/** \brief SMU_stdby FSP Configuration Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_AGFSP_STDBY1_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_AGFSP_STDBY1;

/** \brief Alarm Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_AG_STDBY0_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_AG_STDBY0;

/** \brief Alarm Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_AG_STDBY1_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_AG_STDBY1;

/** \brief SMU_stdby Command Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_CMD_STDBY_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_CMD_STDBY;

/** \brief SMU_stdby BIST Control Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_MONBISTCTRL_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_MONBISTCTRL;

/** \brief SMU_stdby BIST Status Register   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_SMU_STDBY_MONBISTSTAT_Bits B;    /**< \brief Bitfield access */
} Ifx_SMU_STDBY_MONBISTSTAT;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxSfr_Smu_stdby_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief SMU_STDBY object */
typedef volatile struct _Ifx_SMU_STDBY
{
       Ifx_UReg_8Bit                       reserved_0[392];        /**< \brief 0, \internal Reserved */
       Ifx_SMU_STDBY_AG_STDBY0             AG_STDBY0;              /**< \brief 188, Alarm Status Register*/
       Ifx_SMU_STDBY_AG_STDBY1             AG_STDBY1;              /**< \brief 18C, Alarm Status Register*/
       Ifx_SMU_STDBY_MONBISTSTAT           MONBISTSTAT;            /**< \brief 190, SMU_stdby BIST Status Register*/
       Ifx_UReg_8Bit                       reserved_194[4];        /**< \brief 194, \internal Reserved */
       Ifx_SMU_STDBY_MONBISTCTRL           MONBISTCTRL;            /**< \brief 198, SMU_stdby BIST Control Register*/
       Ifx_SMU_STDBY_CMD_STDBY             CMD_STDBY;              /**< \brief 19C, SMU_stdby Command Register*/
       Ifx_UReg_8Bit                       reserved_1A0[4];        /**< \brief 1A0, \internal Reserved */
       Ifx_SMU_STDBY_AGFSP_STDBY0          AGFSP_STDBY0;           /**< \brief 1A4, SMU_stdby FSP Configuration Register*/
       Ifx_SMU_STDBY_AGFSP_STDBY1          AGFSP_STDBY1;           /**< \brief 1A8, SMU_stdby FSP Configuration Register*/
       Ifx_UReg_8Bit                       reserved_1AC[84];       /**< \brief 1AC, \internal Reserved */
} Ifx_SMU_STDBY;

/** \}  */
/******************************************************************************/
/** \}  */


/******************************************************************************/

/******************************************************************************/

#endif /* IFXSMU_STDBY_REGDEF_H */
