/**
 * \file IfxFsiram_regdef.h
 * \brief
 * \copyright Copyright (c) 2017 Infineon Technologies AG. All rights reserved.
 *
 *
 * Date: 2017-09-25 09:30:24 GMT
 * Version: TBD
 * Specification: TBD
 * MAY BE CHANGED BY USER [yes/no]: Yes
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
 * \defgroup IfxLld_Fsiram_Registers Fsiram Registers
 * \ingroup IfxLld
 * 
 * \defgroup IfxLld_Fsiram_Registers_Bitfields Bitfields
 * \ingroup IfxLld_Fsiram_Registers
 * 
 * \defgroup IfxLld_Fsiram_Registers_union Register unions
 * \ingroup IfxLld_Fsiram_Registers
 * 
 * \defgroup IfxLld_Fsiram_Registers_struct Memory map
 * \ingroup IfxLld_Fsiram_Registers
 */
#ifndef IFXFSIRAM_REGDEF_H
#define IFXFSIRAM_REGDEF_H 1
/******************************************************************************/
#include "Ifx_TypesReg.h"
/******************************************************************************/
/** \addtogroup IfxLld_Fsiram_Registers_Bitfields
 * \{  */
/** \brief FSI RAM Assembly Buffer ${x} */
typedef struct _Ifx_FSIRAM_ASB_Bits
{
    Ifx_UReg_32Bit DATA:32;           /**< \brief [31:0] Assembly Buffer Data - DATA (r) */
} Ifx_FSIRAM_ASB_Bits;

/** \brief FSI RAM Microcode Words ${y} */
typedef struct _Ifx_FSIRAM_UCODE_Bits
{
    Ifx_UReg_32Bit DATA:32;           /**< \brief [31:0] FSI RAM Microcode - DATA (r) */
} Ifx_FSIRAM_UCODE_Bits;

/** \}  */
/******************************************************************************/
/******************************************************************************/
/** \addtogroup IfxLld_fsiram_Registers_union
 * \{   */
/** \brief FSI RAM Assembly Buffer ${x}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FSIRAM_ASB_Bits B;            /**< \brief Bitfield access */
} Ifx_FSIRAM_ASB;

/** \brief FSI RAM Microcode Words ${y}   */
typedef union
{
    Ifx_UReg_32Bit U;                 /**< \brief Unsigned access */
    Ifx_SReg_32Bit I;                 /**< \brief Signed access */
    Ifx_FSIRAM_UCODE_Bits B;          /**< \brief Bitfield access */
} Ifx_FSIRAM_UCODE;

/** \}  */

/******************************************************************************/
/** \addtogroup IfxLld_Fsiram_Registers_struct
 * \{  */
/******************************************************************************/
/** \name Object L0
 * \{  */

/** \brief FSIRAM object */
typedef volatile struct _Ifx_FSIRAM
{
       Ifx_FSIRAM_ASB                      ASB[128];               /**< \brief 0, FSI RAM Assembly Buffer ${x}*/
       Ifx_FSIRAM_UCODE                    UCODE[10111];           /**< \brief 200, FSI RAM Microcode Words ${y}*/
       Ifx_UReg_8Bit                       reserved_9FFC[4];       /**< \brief 9FFC, \internal Reserved */
} Ifx_FSIRAM;

/** \}  */
/******************************************************************************/
/** \}  */
/******************************************************************************/
/******************************************************************************/
#endif /* IFXFSIRAM_REGDEF_H */
