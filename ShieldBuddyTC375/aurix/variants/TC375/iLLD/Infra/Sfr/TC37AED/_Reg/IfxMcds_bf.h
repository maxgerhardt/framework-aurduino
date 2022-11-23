/**
 * \file IfxMcds_bf.h
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
 * \defgroup IfxSfr_Mcds_Registers_BitfieldsMask Bitfields mask and offset
 * \ingroup IfxSfr_Mcds_Registers
 * 
 */
#ifndef IFXMCDS_BF_H
#define IFXMCDS_BF_H 1

/******************************************************************************/

/******************************************************************************/

/** \addtogroup IfxSfr_Mcds_Registers_BitfieldsMask
 * \{  */
/** \brief Length for Ifx_MCDS_CLC_Bits.DISR */
#define IFX_MCDS_CLC_DISR_LEN (1u)

/** \brief Mask for Ifx_MCDS_CLC_Bits.DISR */
#define IFX_MCDS_CLC_DISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CLC_Bits.DISR */
#define IFX_MCDS_CLC_DISR_OFF (0u)

/** \brief Length for Ifx_MCDS_CLC_Bits.DISS */
#define IFX_MCDS_CLC_DISS_LEN (1u)

/** \brief Mask for Ifx_MCDS_CLC_Bits.DISS */
#define IFX_MCDS_CLC_DISS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CLC_Bits.DISS */
#define IFX_MCDS_CLC_DISS_OFF (1u)

/** \brief Length for Ifx_MCDS_OCS_Bits.SUS */
#define IFX_MCDS_OCS_SUS_LEN (4u)

/** \brief Mask for Ifx_MCDS_OCS_Bits.SUS */
#define IFX_MCDS_OCS_SUS_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_OCS_Bits.SUS */
#define IFX_MCDS_OCS_SUS_OFF (24u)

/** \brief Length for Ifx_MCDS_OCS_Bits.SUS_P */
#define IFX_MCDS_OCS_SUS_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_OCS_Bits.SUS_P */
#define IFX_MCDS_OCS_SUS_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_OCS_Bits.SUS_P */
#define IFX_MCDS_OCS_SUS_P_OFF (28u)

/** \brief Length for Ifx_MCDS_OCS_Bits.SUSSTA */
#define IFX_MCDS_OCS_SUSSTA_LEN (1u)

/** \brief Mask for Ifx_MCDS_OCS_Bits.SUSSTA */
#define IFX_MCDS_OCS_SUSSTA_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_OCS_Bits.SUSSTA */
#define IFX_MCDS_OCS_SUSSTA_OFF (29u)

/** \brief Length for Ifx_MCDS_ID_Bits.MOD_REV */
#define IFX_MCDS_ID_MOD_REV_LEN (8u)

/** \brief Mask for Ifx_MCDS_ID_Bits.MOD_REV */
#define IFX_MCDS_ID_MOD_REV_MSK (0xffu)

/** \brief Offset for Ifx_MCDS_ID_Bits.MOD_REV */
#define IFX_MCDS_ID_MOD_REV_OFF (0u)

/** \brief Length for Ifx_MCDS_ID_Bits.MOD_TYPE */
#define IFX_MCDS_ID_MOD_TYPE_LEN (8u)

/** \brief Mask for Ifx_MCDS_ID_Bits.MOD_TYPE */
#define IFX_MCDS_ID_MOD_TYPE_MSK (0xffu)

/** \brief Offset for Ifx_MCDS_ID_Bits.MOD_TYPE */
#define IFX_MCDS_ID_MOD_TYPE_OFF (8u)

/** \brief Length for Ifx_MCDS_ID_Bits.MOD_NUMBER */
#define IFX_MCDS_ID_MOD_NUMBER_LEN (16u)

/** \brief Mask for Ifx_MCDS_ID_Bits.MOD_NUMBER */
#define IFX_MCDS_ID_MOD_NUMBER_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_ID_Bits.MOD_NUMBER */
#define IFX_MCDS_ID_MOD_NUMBER_OFF (16u)

/** \brief Length for Ifx_MCDS_CT_Bits.KOK */
#define IFX_MCDS_CT_KOK_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.KOK */
#define IFX_MCDS_CT_KOK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.KOK */
#define IFX_MCDS_CT_KOK_OFF (5u)

/** \brief Length for Ifx_MCDS_CT_Bits.CLRK */
#define IFX_MCDS_CT_CLRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.CLRK */
#define IFX_MCDS_CT_CLRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.CLRK */
#define IFX_MCDS_CT_CLRK_OFF (6u)

/** \brief Length for Ifx_MCDS_CT_Bits.KAV */
#define IFX_MCDS_CT_KAV_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.KAV */
#define IFX_MCDS_CT_KAV_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.KAV */
#define IFX_MCDS_CT_KAV_OFF (7u)

/** \brief Length for Ifx_MCDS_CT_Bits.EN */
#define IFX_MCDS_CT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.EN */
#define IFX_MCDS_CT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.EN */
#define IFX_MCDS_CT_EN_OFF (13u)

/** \brief Length for Ifx_MCDS_CT_Bits.CLRE */
#define IFX_MCDS_CT_CLRE_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.CLRE */
#define IFX_MCDS_CT_CLRE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.CLRE */
#define IFX_MCDS_CT_CLRE_OFF (14u)

/** \brief Length for Ifx_MCDS_CT_Bits.SETE */
#define IFX_MCDS_CT_SETE_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.SETE */
#define IFX_MCDS_CT_SETE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.SETE */
#define IFX_MCDS_CT_SETE_OFF (15u)

/** \brief Length for Ifx_MCDS_CT_Bits.BED */
#define IFX_MCDS_CT_BED_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.BED */
#define IFX_MCDS_CT_BED_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.BED */
#define IFX_MCDS_CT_BED_OFF (16u)

/** \brief Length for Ifx_MCDS_CT_Bits.BED_P */
#define IFX_MCDS_CT_BED_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.BED_P */
#define IFX_MCDS_CT_BED_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.BED_P */
#define IFX_MCDS_CT_BED_P_OFF (19u)

/** \brief Length for Ifx_MCDS_CT_Bits.IRA */
#define IFX_MCDS_CT_IRA_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.IRA */
#define IFX_MCDS_CT_IRA_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.IRA */
#define IFX_MCDS_CT_IRA_OFF (21u)

/** \brief Length for Ifx_MCDS_CT_Bits.CLRI */
#define IFX_MCDS_CT_CLRI_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.CLRI */
#define IFX_MCDS_CT_CLRI_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.CLRI */
#define IFX_MCDS_CT_CLRI_OFF (22u)

/** \brief Length for Ifx_MCDS_CT_Bits.IWA */
#define IFX_MCDS_CT_IWA_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.IWA */
#define IFX_MCDS_CT_IWA_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.IWA */
#define IFX_MCDS_CT_IWA_OFF (23u)

/** \brief Length for Ifx_MCDS_CT_Bits.RES */
#define IFX_MCDS_CT_RES_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.RES */
#define IFX_MCDS_CT_RES_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.RES */
#define IFX_MCDS_CT_RES_OFF (29u)

/** \brief Length for Ifx_MCDS_CT_Bits.SETR */
#define IFX_MCDS_CT_SETR_LEN (1u)

/** \brief Mask for Ifx_MCDS_CT_Bits.SETR */
#define IFX_MCDS_CT_SETR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_CT_Bits.SETR */
#define IFX_MCDS_CT_SETR_OFF (31u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TMUX0 */
#define IFX_MCDS_MUX_TMUX0_LEN (4u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TMUX0 */
#define IFX_MCDS_MUX_TMUX0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TMUX0 */
#define IFX_MCDS_MUX_TMUX0_OFF (0u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TM0_P */
#define IFX_MCDS_MUX_TM0_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TM0_P */
#define IFX_MCDS_MUX_TM0_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TM0_P */
#define IFX_MCDS_MUX_TM0_P_OFF (7u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TMUX1 */
#define IFX_MCDS_MUX_TMUX1_LEN (4u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TMUX1 */
#define IFX_MCDS_MUX_TMUX1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TMUX1 */
#define IFX_MCDS_MUX_TMUX1_OFF (8u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TM1_P */
#define IFX_MCDS_MUX_TM1_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TM1_P */
#define IFX_MCDS_MUX_TM1_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TM1_P */
#define IFX_MCDS_MUX_TM1_P_OFF (15u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TMUX2 */
#define IFX_MCDS_MUX_TMUX2_LEN (4u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TMUX2 */
#define IFX_MCDS_MUX_TMUX2_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TMUX2 */
#define IFX_MCDS_MUX_TMUX2_OFF (16u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TM2_P */
#define IFX_MCDS_MUX_TM2_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TM2_P */
#define IFX_MCDS_MUX_TM2_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TM2_P */
#define IFX_MCDS_MUX_TM2_P_OFF (23u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TMUX3 */
#define IFX_MCDS_MUX_TMUX3_LEN (4u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TMUX3 */
#define IFX_MCDS_MUX_TMUX3_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TMUX3 */
#define IFX_MCDS_MUX_TMUX3_OFF (24u)

/** \brief Length for Ifx_MCDS_MUX_Bits.POBz_TC_EN */
#define IFX_MCDS_MUX_POBZ_TC_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.POBz_TC_EN */
#define IFX_MCDS_MUX_POBZ_TC_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.POBz_TC_EN */
#define IFX_MCDS_MUX_POBZ_TC_EN_OFF (28u)

/** \brief Length for Ifx_MCDS_MUX_Bits.POBz_TC_EN_P */
#define IFX_MCDS_MUX_POBZ_TC_EN_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.POBz_TC_EN_P */
#define IFX_MCDS_MUX_POBZ_TC_EN_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.POBz_TC_EN_P */
#define IFX_MCDS_MUX_POBZ_TC_EN_P_OFF (30u)

/** \brief Length for Ifx_MCDS_MUX_Bits.TM3_P */
#define IFX_MCDS_MUX_TM3_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_Bits.TM3_P */
#define IFX_MCDS_MUX_TM3_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_Bits.TM3_P */
#define IFX_MCDS_MUX_TM3_P_OFF (31u)

/** \brief Length for Ifx_MCDS_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDS_SESSIDL_KEY_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDS_SESSIDL_KEY_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SESSIDL_Bits.KEY_31_0 */
#define IFX_MCDS_SESSIDL_KEY_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDS_SESSIDH_KEY_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDS_SESSIDH_KEY_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SESSIDH_Bits.KEY_63_32 */
#define IFX_MCDS_SESSIDH_KEY_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX0_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX0 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX0_OFF (0u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX1_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX1 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX1_OFF (2u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX2_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX2 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX2_OFF (4u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX3 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX3_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX3 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX3 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX3_OFF (6u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX4 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX4_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX4 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX4 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX4_OFF (8u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX5 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX5_LEN (2u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX5 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_MUX5 */
#define IFX_MCDS_MUX_TC_RC_TC_MUX5_OFF (10u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDS_MUX_TC_RC_TC_TM_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDS_MUX_TC_RC_TC_TM_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.TC_TM_P */
#define IFX_MCDS_MUX_TC_RC_TC_TM_P_OFF (15u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.RC */
#define IFX_MCDS_MUX_TC_RC_RC_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.RC */
#define IFX_MCDS_MUX_TC_RC_RC_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.RC */
#define IFX_MCDS_MUX_TC_RC_RC_OFF (24u)

/** \brief Length for Ifx_MCDS_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDS_MUX_TC_RC_RC_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDS_MUX_TC_RC_RC_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MUX_TC_RC_Bits.RC_P */
#define IFX_MCDS_MUX_TC_RC_RC_P_OFF (27u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN0 */
#define IFX_MCDS_ACCEN0_EN0_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN0 */
#define IFX_MCDS_ACCEN0_EN0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN0 */
#define IFX_MCDS_ACCEN0_EN0_OFF (0u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN1 */
#define IFX_MCDS_ACCEN0_EN1_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN1 */
#define IFX_MCDS_ACCEN0_EN1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN1 */
#define IFX_MCDS_ACCEN0_EN1_OFF (1u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN2 */
#define IFX_MCDS_ACCEN0_EN2_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN2 */
#define IFX_MCDS_ACCEN0_EN2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN2 */
#define IFX_MCDS_ACCEN0_EN2_OFF (2u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN3 */
#define IFX_MCDS_ACCEN0_EN3_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN3 */
#define IFX_MCDS_ACCEN0_EN3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN3 */
#define IFX_MCDS_ACCEN0_EN3_OFF (3u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN4 */
#define IFX_MCDS_ACCEN0_EN4_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN4 */
#define IFX_MCDS_ACCEN0_EN4_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN4 */
#define IFX_MCDS_ACCEN0_EN4_OFF (4u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN5 */
#define IFX_MCDS_ACCEN0_EN5_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN5 */
#define IFX_MCDS_ACCEN0_EN5_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN5 */
#define IFX_MCDS_ACCEN0_EN5_OFF (5u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN6 */
#define IFX_MCDS_ACCEN0_EN6_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN6 */
#define IFX_MCDS_ACCEN0_EN6_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN6 */
#define IFX_MCDS_ACCEN0_EN6_OFF (6u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN7 */
#define IFX_MCDS_ACCEN0_EN7_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN7 */
#define IFX_MCDS_ACCEN0_EN7_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN7 */
#define IFX_MCDS_ACCEN0_EN7_OFF (7u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN8 */
#define IFX_MCDS_ACCEN0_EN8_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN8 */
#define IFX_MCDS_ACCEN0_EN8_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN8 */
#define IFX_MCDS_ACCEN0_EN8_OFF (8u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN9 */
#define IFX_MCDS_ACCEN0_EN9_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN9 */
#define IFX_MCDS_ACCEN0_EN9_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN9 */
#define IFX_MCDS_ACCEN0_EN9_OFF (9u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN10 */
#define IFX_MCDS_ACCEN0_EN10_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN10 */
#define IFX_MCDS_ACCEN0_EN10_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN10 */
#define IFX_MCDS_ACCEN0_EN10_OFF (10u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN11 */
#define IFX_MCDS_ACCEN0_EN11_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN11 */
#define IFX_MCDS_ACCEN0_EN11_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN11 */
#define IFX_MCDS_ACCEN0_EN11_OFF (11u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN12 */
#define IFX_MCDS_ACCEN0_EN12_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN12 */
#define IFX_MCDS_ACCEN0_EN12_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN12 */
#define IFX_MCDS_ACCEN0_EN12_OFF (12u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN13 */
#define IFX_MCDS_ACCEN0_EN13_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN13 */
#define IFX_MCDS_ACCEN0_EN13_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN13 */
#define IFX_MCDS_ACCEN0_EN13_OFF (13u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN14 */
#define IFX_MCDS_ACCEN0_EN14_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN14 */
#define IFX_MCDS_ACCEN0_EN14_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN14 */
#define IFX_MCDS_ACCEN0_EN14_OFF (14u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN15 */
#define IFX_MCDS_ACCEN0_EN15_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN15 */
#define IFX_MCDS_ACCEN0_EN15_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN15 */
#define IFX_MCDS_ACCEN0_EN15_OFF (15u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN16 */
#define IFX_MCDS_ACCEN0_EN16_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN16 */
#define IFX_MCDS_ACCEN0_EN16_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN16 */
#define IFX_MCDS_ACCEN0_EN16_OFF (16u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN17 */
#define IFX_MCDS_ACCEN0_EN17_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN17 */
#define IFX_MCDS_ACCEN0_EN17_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN17 */
#define IFX_MCDS_ACCEN0_EN17_OFF (17u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN18 */
#define IFX_MCDS_ACCEN0_EN18_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN18 */
#define IFX_MCDS_ACCEN0_EN18_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN18 */
#define IFX_MCDS_ACCEN0_EN18_OFF (18u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN19 */
#define IFX_MCDS_ACCEN0_EN19_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN19 */
#define IFX_MCDS_ACCEN0_EN19_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN19 */
#define IFX_MCDS_ACCEN0_EN19_OFF (19u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN20 */
#define IFX_MCDS_ACCEN0_EN20_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN20 */
#define IFX_MCDS_ACCEN0_EN20_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN20 */
#define IFX_MCDS_ACCEN0_EN20_OFF (20u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN21 */
#define IFX_MCDS_ACCEN0_EN21_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN21 */
#define IFX_MCDS_ACCEN0_EN21_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN21 */
#define IFX_MCDS_ACCEN0_EN21_OFF (21u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN22 */
#define IFX_MCDS_ACCEN0_EN22_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN22 */
#define IFX_MCDS_ACCEN0_EN22_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN22 */
#define IFX_MCDS_ACCEN0_EN22_OFF (22u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN23 */
#define IFX_MCDS_ACCEN0_EN23_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN23 */
#define IFX_MCDS_ACCEN0_EN23_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN23 */
#define IFX_MCDS_ACCEN0_EN23_OFF (23u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN24 */
#define IFX_MCDS_ACCEN0_EN24_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN24 */
#define IFX_MCDS_ACCEN0_EN24_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN24 */
#define IFX_MCDS_ACCEN0_EN24_OFF (24u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN25 */
#define IFX_MCDS_ACCEN0_EN25_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN25 */
#define IFX_MCDS_ACCEN0_EN25_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN25 */
#define IFX_MCDS_ACCEN0_EN25_OFF (25u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN26 */
#define IFX_MCDS_ACCEN0_EN26_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN26 */
#define IFX_MCDS_ACCEN0_EN26_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN26 */
#define IFX_MCDS_ACCEN0_EN26_OFF (26u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN27 */
#define IFX_MCDS_ACCEN0_EN27_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN27 */
#define IFX_MCDS_ACCEN0_EN27_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN27 */
#define IFX_MCDS_ACCEN0_EN27_OFF (27u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN28 */
#define IFX_MCDS_ACCEN0_EN28_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN28 */
#define IFX_MCDS_ACCEN0_EN28_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN28 */
#define IFX_MCDS_ACCEN0_EN28_OFF (28u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN29 */
#define IFX_MCDS_ACCEN0_EN29_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN29 */
#define IFX_MCDS_ACCEN0_EN29_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN29 */
#define IFX_MCDS_ACCEN0_EN29_OFF (29u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN30 */
#define IFX_MCDS_ACCEN0_EN30_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN30 */
#define IFX_MCDS_ACCEN0_EN30_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN30 */
#define IFX_MCDS_ACCEN0_EN30_OFF (30u)

/** \brief Length for Ifx_MCDS_ACCEN0_Bits.EN31 */
#define IFX_MCDS_ACCEN0_EN31_LEN (1u)

/** \brief Mask for Ifx_MCDS_ACCEN0_Bits.EN31 */
#define IFX_MCDS_ACCEN0_EN31_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_ACCEN0_Bits.EN31 */
#define IFX_MCDS_ACCEN0_EN31_OFF (31u)

/** \brief Length for Ifx_MCDS_FIFONOW_Bits.NOW */
#define IFX_MCDS_FIFONOW_NOW_LEN (16u)

/** \brief Mask for Ifx_MCDS_FIFONOW_Bits.NOW */
#define IFX_MCDS_FIFONOW_NOW_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_FIFONOW_Bits.NOW */
#define IFX_MCDS_FIFONOW_NOW_OFF (5u)

/** \brief Length for Ifx_MCDS_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDS_FIFOBOT_BOTTOM_LEN (9u)

/** \brief Mask for Ifx_MCDS_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDS_FIFOBOT_BOTTOM_MSK (0x1ffu)

/** \brief Offset for Ifx_MCDS_FIFOBOT_Bits.BOTTOM */
#define IFX_MCDS_FIFOBOT_BOTTOM_OFF (12u)

/** \brief Length for Ifx_MCDS_FIFOPRE_Bits.PRE */
#define IFX_MCDS_FIFOPRE_PRE_LEN (16u)

/** \brief Mask for Ifx_MCDS_FIFOPRE_Bits.PRE */
#define IFX_MCDS_FIFOPRE_PRE_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_FIFOPRE_Bits.PRE */
#define IFX_MCDS_FIFOPRE_PRE_OFF (5u)

/** \brief Length for Ifx_MCDS_FIFOTOP_Bits.TOP */
#define IFX_MCDS_FIFOTOP_TOP_LEN (16u)

/** \brief Mask for Ifx_MCDS_FIFOTOP_Bits.TOP */
#define IFX_MCDS_FIFOTOP_TOP_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_FIFOTOP_Bits.TOP */
#define IFX_MCDS_FIFOTOP_TOP_OFF (5u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.TRG */
#define IFX_MCDS_FIFOCTL_TRG_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.TRG */
#define IFX_MCDS_FIFOCTL_TRG_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.TRG */
#define IFX_MCDS_FIFOCTL_TRG_OFF (0u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.FFE */
#define IFX_MCDS_FIFOCTL_FFE_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.FFE */
#define IFX_MCDS_FIFOCTL_FFE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.FFE */
#define IFX_MCDS_FIFOCTL_FFE_OFF (1u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.TME */
#define IFX_MCDS_FIFOCTL_TME_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.TME */
#define IFX_MCDS_FIFOCTL_TME_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.TME */
#define IFX_MCDS_FIFOCTL_TME_OFF (2u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDS_FIFOCTL_DMC_MODE_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDS_FIFOCTL_DMC_MODE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE */
#define IFX_MCDS_FIFOCTL_DMC_MODE_OFF (7u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDS_FIFOCTL_DMC_MODE_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDS_FIFOCTL_DMC_MODE_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.DMC_MODE_P */
#define IFX_MCDS_FIFOCTL_DMC_MODE_P_OFF (8u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.TRDIS */
#define IFX_MCDS_FIFOCTL_TRDIS_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.TRDIS */
#define IFX_MCDS_FIFOCTL_TRDIS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.TRDIS */
#define IFX_MCDS_FIFOCTL_TRDIS_OFF (9u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.TRON */
#define IFX_MCDS_FIFOCTL_TRON_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.TRON */
#define IFX_MCDS_FIFOCTL_TRON_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.TRON */
#define IFX_MCDS_FIFOCTL_TRON_OFF (10u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.TROFF */
#define IFX_MCDS_FIFOCTL_TROFF_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.TROFF */
#define IFX_MCDS_FIFOCTL_TROFF_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.TROFF */
#define IFX_MCDS_FIFOCTL_TROFF_OFF (11u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.FLSH */
#define IFX_MCDS_FIFOCTL_FLSH_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.FLSH */
#define IFX_MCDS_FIFOCTL_FLSH_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.FLSH */
#define IFX_MCDS_FIFOCTL_FLSH_OFF (13u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.CLR */
#define IFX_MCDS_FIFOCTL_CLR_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.CLR */
#define IFX_MCDS_FIFOCTL_CLR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.CLR */
#define IFX_MCDS_FIFOCTL_CLR_OFF (14u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.SET */
#define IFX_MCDS_FIFOCTL_SET_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.SET */
#define IFX_MCDS_FIFOCTL_SET_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.SET */
#define IFX_MCDS_FIFOCTL_SET_OFF (15u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.NTN */
#define IFX_MCDS_FIFOCTL_NTN_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.NTN */
#define IFX_MCDS_FIFOCTL_NTN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.NTN */
#define IFX_MCDS_FIFOCTL_NTN_OFF (16u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.CTTO */
#define IFX_MCDS_FIFOCTL_CTTO_LEN (7u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.CTTO */
#define IFX_MCDS_FIFOCTL_CTTO_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.CTTO */
#define IFX_MCDS_FIFOCTL_CTTO_OFF (24u)

/** \brief Length for Ifx_MCDS_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDS_FIFOCTL_CTTO_P_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDS_FIFOCTL_CTTO_P_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOCTL_Bits.CTTO_P */
#define IFX_MCDS_FIFOCTL_CTTO_P_OFF (31u)

/** \brief Length for Ifx_MCDS_FIFOWARN_Bits.WARN */
#define IFX_MCDS_FIFOWARN_WARN_LEN (16u)

/** \brief Mask for Ifx_MCDS_FIFOWARN_Bits.WARN */
#define IFX_MCDS_FIFOWARN_WARN_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_FIFOWARN_Bits.WARN */
#define IFX_MCDS_FIFOWARN_WARN_OFF (5u)

/** \brief Length for Ifx_MCDS_FIFOWARN_Bits.OCDEN */
#define IFX_MCDS_FIFOWARN_OCDEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOWARN_Bits.OCDEN */
#define IFX_MCDS_FIFOWARN_OCDEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOWARN_Bits.OCDEN */
#define IFX_MCDS_FIFOWARN_OCDEN_OFF (30u)

/** \brief Length for Ifx_MCDS_FIFOWARN_Bits.EN */
#define IFX_MCDS_FIFOWARN_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOWARN_Bits.EN */
#define IFX_MCDS_FIFOWARN_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOWARN_Bits.EN */
#define IFX_MCDS_FIFOWARN_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDS_FIFOOVRCNT_COUNT_LEN (8u)

/** \brief Mask for Ifx_MCDS_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDS_FIFOOVRCNT_COUNT_MSK (0xffu)

/** \brief Offset for Ifx_MCDS_FIFOOVRCNT_Bits.COUNT */
#define IFX_MCDS_FIFOOVRCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDS_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDS_FIFOOVRCNT_CLR_LEN (1u)

/** \brief Mask for Ifx_MCDS_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDS_FIFOOVRCNT_CLR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_FIFOOVRCNT_Bits.CLR */
#define IFX_MCDS_FIFOOVRCNT_CLR_OFF (15u)

/** \brief Length for Ifx_MCDS_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDS_FIFONTNOW_NTNOW_LEN (16u)

/** \brief Mask for Ifx_MCDS_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDS_FIFONTNOW_NTNOW_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_FIFONTNOW_Bits.NTNOW */
#define IFX_MCDS_FIFONTNOW_NTNOW_OFF (5u)

/** \brief Length for Ifx_MCDS_TSUREFCNT_Bits.COUNT */
#define IFX_MCDS_TSUREFCNT_COUNT_LEN (32u)

/** \brief Mask for Ifx_MCDS_TSUREFCNT_Bits.COUNT */
#define IFX_MCDS_TSUREFCNT_COUNT_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TSUREFCNT_Bits.COUNT */
#define IFX_MCDS_TSUREFCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDS_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDS_TSUPRSCL_RELOAD_LEN (32u)

/** \brief Mask for Ifx_MCDS_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDS_TSUPRSCL_RELOAD_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TSUPRSCL_Bits.RELOAD */
#define IFX_MCDS_TSUPRSCL_RELOAD_OFF (0u)

/** \brief Length for Ifx_MCDS_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDS_TSUEMUCNT_COUNT_LEN (32u)

/** \brief Mask for Ifx_MCDS_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDS_TSUEMUCNT_COUNT_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TSUEMUCNT_Bits.COUNT */
#define IFX_MCDS_TSUEMUCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ0 */
#define IFX_MCDS_MCXEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ0 */
#define IFX_MCDS_MCXEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ0 */
#define IFX_MCDS_MCXEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ1 */
#define IFX_MCDS_MCXEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ1 */
#define IFX_MCDS_MCXEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ1 */
#define IFX_MCDS_MCXEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ2 */
#define IFX_MCDS_MCXEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ2 */
#define IFX_MCDS_MCXEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ2 */
#define IFX_MCDS_MCXEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ3 */
#define IFX_MCDS_MCXEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ3 */
#define IFX_MCDS_MCXEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ3 */
#define IFX_MCDS_MCXEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ4 */
#define IFX_MCDS_MCXEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ4 */
#define IFX_MCDS_MCXEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ4 */
#define IFX_MCDS_MCXEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ5 */
#define IFX_MCDS_MCXEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ5 */
#define IFX_MCDS_MCXEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ5 */
#define IFX_MCDS_MCXEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ6 */
#define IFX_MCDS_MCXEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ6 */
#define IFX_MCDS_MCXEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ6 */
#define IFX_MCDS_MCXEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ7 */
#define IFX_MCDS_MCXEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ7 */
#define IFX_MCDS_MCXEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ7 */
#define IFX_MCDS_MCXEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ8 */
#define IFX_MCDS_MCXEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ8 */
#define IFX_MCDS_MCXEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ8 */
#define IFX_MCDS_MCXEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ9 */
#define IFX_MCDS_MCXEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ9 */
#define IFX_MCDS_MCXEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ9 */
#define IFX_MCDS_MCXEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ10 */
#define IFX_MCDS_MCXEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ10 */
#define IFX_MCDS_MCXEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ10 */
#define IFX_MCDS_MCXEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ11 */
#define IFX_MCDS_MCXEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ11 */
#define IFX_MCDS_MCXEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ11 */
#define IFX_MCDS_MCXEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ12 */
#define IFX_MCDS_MCXEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ12 */
#define IFX_MCDS_MCXEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ12 */
#define IFX_MCDS_MCXEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ13 */
#define IFX_MCDS_MCXEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ13 */
#define IFX_MCDS_MCXEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ13 */
#define IFX_MCDS_MCXEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ14 */
#define IFX_MCDS_MCXEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ14 */
#define IFX_MCDS_MCXEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ14 */
#define IFX_MCDS_MCXEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_MCXEVT_Bits.EIQ15 */
#define IFX_MCDS_MCXEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXEVT_Bits.EIQ15 */
#define IFX_MCDS_MCXEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXEVT_Bits.EIQ15 */
#define IFX_MCDS_MCXEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIS0 */
#define IFX_MCDS_MCXACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIS0 */
#define IFX_MCDS_MCXACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIS0 */
#define IFX_MCDS_MCXACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIQ0 */
#define IFX_MCDS_MCXACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIQ0 */
#define IFX_MCDS_MCXACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIQ0 */
#define IFX_MCDS_MCXACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.LV0 */
#define IFX_MCDS_MCXACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.LV0 */
#define IFX_MCDS_MCXACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.LV0 */
#define IFX_MCDS_MCXACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIS1 */
#define IFX_MCDS_MCXACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIS1 */
#define IFX_MCDS_MCXACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIS1 */
#define IFX_MCDS_MCXACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIQ1 */
#define IFX_MCDS_MCXACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIQ1 */
#define IFX_MCDS_MCXACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIQ1 */
#define IFX_MCDS_MCXACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.LV1 */
#define IFX_MCDS_MCXACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.LV1 */
#define IFX_MCDS_MCXACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.LV1 */
#define IFX_MCDS_MCXACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIS2 */
#define IFX_MCDS_MCXACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIS2 */
#define IFX_MCDS_MCXACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIS2 */
#define IFX_MCDS_MCXACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIQ2 */
#define IFX_MCDS_MCXACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIQ2 */
#define IFX_MCDS_MCXACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIQ2 */
#define IFX_MCDS_MCXACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.LV2 */
#define IFX_MCDS_MCXACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.LV2 */
#define IFX_MCDS_MCXACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.LV2 */
#define IFX_MCDS_MCXACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIS3 */
#define IFX_MCDS_MCXACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIS3 */
#define IFX_MCDS_MCXACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIS3 */
#define IFX_MCDS_MCXACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.AIQ3 */
#define IFX_MCDS_MCXACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.AIQ3 */
#define IFX_MCDS_MCXACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.AIQ3 */
#define IFX_MCDS_MCXACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_MCXACT_Bits.LV3 */
#define IFX_MCDS_MCXACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXACT_Bits.LV3 */
#define IFX_MCDS_MCXACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXACT_Bits.LV3 */
#define IFX_MCDS_MCXACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.INC0 */
#define IFX_MCDS_MCXCCL_INC0_LEN (7u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.INC0 */
#define IFX_MCDS_MCXCCL_INC0_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.INC0 */
#define IFX_MCDS_MCXCCL_INC0_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.ILV0 */
#define IFX_MCDS_MCXCCL_ILV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.ILV0 */
#define IFX_MCDS_MCXCCL_ILV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.ILV0 */
#define IFX_MCDS_MCXCCL_ILV0_OFF (7u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.CLR0 */
#define IFX_MCDS_MCXCCL_CLR0_LEN (6u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.CLR0 */
#define IFX_MCDS_MCXCCL_CLR0_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.CLR0 */
#define IFX_MCDS_MCXCCL_CLR0_OFF (8u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.CLV0 */
#define IFX_MCDS_MCXCCL_CLV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.CLV0 */
#define IFX_MCDS_MCXCCL_CLV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.CLV0 */
#define IFX_MCDS_MCXCCL_CLV0_OFF (15u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.INC1 */
#define IFX_MCDS_MCXCCL_INC1_LEN (7u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.INC1 */
#define IFX_MCDS_MCXCCL_INC1_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.INC1 */
#define IFX_MCDS_MCXCCL_INC1_OFF (16u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.ILV1 */
#define IFX_MCDS_MCXCCL_ILV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.ILV1 */
#define IFX_MCDS_MCXCCL_ILV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.ILV1 */
#define IFX_MCDS_MCXCCL_ILV1_OFF (23u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.CLR1 */
#define IFX_MCDS_MCXCCL_CLR1_LEN (6u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.CLR1 */
#define IFX_MCDS_MCXCCL_CLR1_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.CLR1 */
#define IFX_MCDS_MCXCCL_CLR1_OFF (24u)

/** \brief Length for Ifx_MCDS_MCXCCL_Bits.CLV1 */
#define IFX_MCDS_MCXCCL_CLV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXCCL_Bits.CLV1 */
#define IFX_MCDS_MCXCCL_CLV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXCCL_Bits.CLV1 */
#define IFX_MCDS_MCXCCL_CLV1_OFF (31u)

/** \brief Length for Ifx_MCDS_MCXLMT_Bits.LIMIT */
#define IFX_MCDS_MCXLMT_LIMIT_LEN (16u)

/** \brief Mask for Ifx_MCDS_MCXLMT_Bits.LIMIT */
#define IFX_MCDS_MCXLMT_LIMIT_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_MCXLMT_Bits.LIMIT */
#define IFX_MCDS_MCXLMT_LIMIT_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXLMT_Bits.MOD0 */
#define IFX_MCDS_MCXLMT_MOD0_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXLMT_Bits.MOD0 */
#define IFX_MCDS_MCXLMT_MOD0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXLMT_Bits.MOD0 */
#define IFX_MCDS_MCXLMT_MOD0_OFF (30u)

/** \brief Length for Ifx_MCDS_MCXLMT_Bits.MOD1 */
#define IFX_MCDS_MCXLMT_MOD1_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXLMT_Bits.MOD1 */
#define IFX_MCDS_MCXLMT_MOD1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXLMT_Bits.MOD1 */
#define IFX_MCDS_MCXLMT_MOD1_OFF (31u)

/** \brief Length for Ifx_MCDS_MCXCNT_Bits.COUNT */
#define IFX_MCDS_MCXCNT_COUNT_LEN (16u)

/** \brief Mask for Ifx_MCDS_MCXCNT_Bits.COUNT */
#define IFX_MCDS_MCXCNT_COUNT_MSK (0xffffu)

/** \brief Offset for Ifx_MCDS_MCXCNT_Bits.COUNT */
#define IFX_MCDS_MCXCNT_COUNT_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_OFF (0u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.DFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_DFLASH_MASTER_EN_OFF (7u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_OFF (8u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_MASTER_EN_OFF (15u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_ACC_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_ACC_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_ACC_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_ACC_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_ACC_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_ACC_EN_OFF (16u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_WAIT_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_WAIT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_WAIT_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_WAIT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_WAIT_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_WAIT_EN_OFF (17u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_PRE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_PRE_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_PRE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_PRE_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_PRE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_PRE_EN_OFF (18u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_LINE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_LINE_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_LINE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_LINE_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PFLASH_LINE_EN */
#define IFX_MCDS_MCXPERFCFG_PFLASH_LINE_EN_OFF (19u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_OFF (20u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.CPUMEM_MASTER_EN */
#define IFX_MCDS_MCXPERFCFG_CPUMEM_MASTER_EN_OFF (27u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.PSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_PSPR_HIT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.PSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_PSPR_HIT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.PSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_PSPR_HIT_EN_OFF (28u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.DSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DSPR_HIT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.DSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DSPR_HIT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.DSPR_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DSPR_HIT_EN_OFF (29u)

/** \brief Length for Ifx_MCDS_MCXPERFCFG_Bits.DLMU_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DLMU_HIT_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_MCXPERFCFG_Bits.DLMU_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DLMU_HIT_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_MCXPERFCFG_Bits.DLMU_HIT_EN */
#define IFX_MCDS_MCXPERFCFG_DLMU_HIT_EN_OFF (30u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.SUS */
#define IFX_MCDS_TCXDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.SUS */
#define IFX_MCDS_TCXDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.SUS */
#define IFX_MCDS_TCXDCSTS_SUS_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.IDLE */
#define IFX_MCDS_TCXDCSTS_IDLE_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.IDLE */
#define IFX_MCDS_TCXDCSTS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.IDLE */
#define IFX_MCDS_TCXDCSTS_IDLE_OFF (1u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.HALT */
#define IFX_MCDS_TCXDCSTS_HALT_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.HALT */
#define IFX_MCDS_TCXDCSTS_HALT_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.HALT */
#define IFX_MCDS_TCXDCSTS_HALT_OFF (2u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.ISR */
#define IFX_MCDS_TCXDCSTS_ISR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.ISR */
#define IFX_MCDS_TCXDCSTS_ISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.ISR */
#define IFX_MCDS_TCXDCSTS_ISR_OFF (3u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.HBRK */
#define IFX_MCDS_TCXDCSTS_HBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.HBRK */
#define IFX_MCDS_TCXDCSTS_HBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.HBRK */
#define IFX_MCDS_TCXDCSTS_HBRK_OFF (4u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.SBRK */
#define IFX_MCDS_TCXDCSTS_SBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.SBRK */
#define IFX_MCDS_TCXDCSTS_SBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.SBRK */
#define IFX_MCDS_TCXDCSTS_SBRK_OFF (5u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.IEN */
#define IFX_MCDS_TCXDCSTS_IEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.IEN */
#define IFX_MCDS_TCXDCSTS_IEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.IEN */
#define IFX_MCDS_TCXDCSTS_IEN_OFF (7u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCXDCSTS_DBGEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCXDCSTS_DBGEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCXDCSTS_DBGEN_OFF (8u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCXDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCXDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCXDCSTS_CLKDIV_OFF (9u)

/** \brief Length for Ifx_MCDS_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCXDCSTS_NESTED_ISR_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCXDCSTS_NESTED_ISR_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCXDCSTS_NESTED_ISR_OFF (11u)

/** \brief Length for Ifx_MCDS_TCXCID_Bits.CURRENT */
#define IFX_MCDS_TCXCID_CURRENT_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCXCID_Bits.CURRENT */
#define IFX_MCDS_TCXCID_CURRENT_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCXCID_Bits.CURRENT */
#define IFX_MCDS_TCXCID_CURRENT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXCIP_Bits.CURRENT */
#define IFX_MCDS_TCXCIP_CURRENT_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCXCIP_Bits.CURRENT */
#define IFX_MCDS_TCXCIP_CURRENT_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCXCIP_Bits.CURRENT */
#define IFX_MCDS_TCXCIP_CURRENT_OFF (1u)

/** \brief Length for Ifx_MCDS_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCXCFT_VSHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCXCFT_VSHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCXCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCXCFT_VSHRT_FCT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCXCFT_SHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCXCFT_SHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCXCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCXCFT_SHRT_FCT_OFF (16u)

/** \brief Length for Ifx_MCDS_TCXPALLUTD_Bits.DATA */
#define IFX_MCDS_TCXPALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXPALLUTD_Bits.DATA */
#define IFX_MCDS_TCXPALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXPALLUTD_Bits.DATA */
#define IFX_MCDS_TCXPALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCXPALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCXPALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCXPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCXPALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDS_TCXPALBND_Bits.BOUND */
#define IFX_MCDS_TCXPALBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXPALBND_Bits.BOUND */
#define IFX_MCDS_TCXPALBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXPALBND_Bits.BOUND */
#define IFX_MCDS_TCXPALBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXPALRNG_Bits.RANGE */
#define IFX_MCDS_TCXPALRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXPALRNG_Bits.RANGE */
#define IFX_MCDS_TCXPALRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXPALRNG_Bits.RANGE */
#define IFX_MCDS_TCXPALRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCXPALMAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCXPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCXPALMAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCXPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCXPALMAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDS_TCXPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCXPALMAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCXPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCXPALMAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCXPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCXPALMAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDS_TCXPALMAP_Bits.EN */
#define IFX_MCDS_TCXPALMAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXPALMAP_Bits.EN */
#define IFX_MCDS_TCXPALMAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXPALMAP_Bits.EN */
#define IFX_MCDS_TCXPALMAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_TCXEABND_Bits.BOUND */
#define IFX_MCDS_TCXEABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXEABND_Bits.BOUND */
#define IFX_MCDS_TCXEABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXEABND_Bits.BOUND */
#define IFX_MCDS_TCXEABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXEARNG_Bits.RANGE */
#define IFX_MCDS_TCXEARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXEARNG_Bits.RANGE */
#define IFX_MCDS_TCXEARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXEARNG_Bits.RANGE */
#define IFX_MCDS_TCXEARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCXWDBND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCXWDBND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCXWDBND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCXWDHBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCXWDHBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCXWDHBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCXWDRNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCXWDRNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCXWDRNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCXWDHRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCXWDHRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCXWDHRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCXWDMSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCXWDMSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCXWDMSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCXWDHMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCXWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCXWDHMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCXWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCXWDHMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDSGN_Bits.SIGN */
#define IFX_MCDS_TCXWDSGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDS_TCXWDSGN_Bits.SIGN */
#define IFX_MCDS_TCXWDSGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_TCXWDSGN_Bits.SIGN */
#define IFX_MCDS_TCXWDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXWDSGN_Bits.EITHER */
#define IFX_MCDS_TCXWDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXWDSGN_Bits.EITHER */
#define IFX_MCDS_TCXWDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXWDSGN_Bits.EITHER */
#define IFX_MCDS_TCXWDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_TCXWDSGN_Bits.BELOW */
#define IFX_MCDS_TCXWDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXWDSGN_Bits.BELOW */
#define IFX_MCDS_TCXWDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXWDSGN_Bits.BELOW */
#define IFX_MCDS_TCXWDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_TCXWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCXWDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCXWDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCXWDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_TCXACBND_Bits.BOUND */
#define IFX_MCDS_TCXACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCXACBND_Bits.BOUND */
#define IFX_MCDS_TCXACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCXACBND_Bits.BOUND */
#define IFX_MCDS_TCXACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXACRNG_Bits.RANGE */
#define IFX_MCDS_TCXACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCXACRNG_Bits.RANGE */
#define IFX_MCDS_TCXACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCXACRNG_Bits.RANGE */
#define IFX_MCDS_TCXACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.SVM */
#define IFX_MCDS_TCXACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.SVM */
#define IFX_MCDS_TCXACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.SVM */
#define IFX_MCDS_TCXACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.MASTER */
#define IFX_MCDS_TCXACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.MASTER */
#define IFX_MCDS_TCXACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.MASTER */
#define IFX_MCDS_TCXACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCXACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCXACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCXACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.WR */
#define IFX_MCDS_TCXACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.WR */
#define IFX_MCDS_TCXACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.WR */
#define IFX_MCDS_TCXACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.RD */
#define IFX_MCDS_TCXACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.RD */
#define IFX_MCDS_TCXACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.RD */
#define IFX_MCDS_TCXACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_TCXACMSK_Bits.MSK */
#define IFX_MCDS_TCXACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACMSK_Bits.MSK */
#define IFX_MCDS_TCXACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACMSK_Bits.MSK */
#define IFX_MCDS_TCXACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCXDTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCXDTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCXDTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCXDTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCXDTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCXDTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCXDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCXDTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ0 */
#define IFX_MCDS_TCXEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ0 */
#define IFX_MCDS_TCXEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ0 */
#define IFX_MCDS_TCXEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ1 */
#define IFX_MCDS_TCXEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ1 */
#define IFX_MCDS_TCXEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ1 */
#define IFX_MCDS_TCXEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ2 */
#define IFX_MCDS_TCXEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ2 */
#define IFX_MCDS_TCXEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ2 */
#define IFX_MCDS_TCXEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ3 */
#define IFX_MCDS_TCXEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ3 */
#define IFX_MCDS_TCXEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ3 */
#define IFX_MCDS_TCXEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ4 */
#define IFX_MCDS_TCXEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ4 */
#define IFX_MCDS_TCXEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ4 */
#define IFX_MCDS_TCXEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ5 */
#define IFX_MCDS_TCXEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ5 */
#define IFX_MCDS_TCXEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ5 */
#define IFX_MCDS_TCXEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ6 */
#define IFX_MCDS_TCXEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ6 */
#define IFX_MCDS_TCXEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ6 */
#define IFX_MCDS_TCXEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ7 */
#define IFX_MCDS_TCXEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ7 */
#define IFX_MCDS_TCXEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ7 */
#define IFX_MCDS_TCXEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ8 */
#define IFX_MCDS_TCXEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ8 */
#define IFX_MCDS_TCXEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ8 */
#define IFX_MCDS_TCXEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ9 */
#define IFX_MCDS_TCXEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ9 */
#define IFX_MCDS_TCXEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ9 */
#define IFX_MCDS_TCXEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ10 */
#define IFX_MCDS_TCXEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ10 */
#define IFX_MCDS_TCXEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ10 */
#define IFX_MCDS_TCXEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ11 */
#define IFX_MCDS_TCXEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ11 */
#define IFX_MCDS_TCXEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ11 */
#define IFX_MCDS_TCXEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ12 */
#define IFX_MCDS_TCXEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ12 */
#define IFX_MCDS_TCXEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ12 */
#define IFX_MCDS_TCXEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ13 */
#define IFX_MCDS_TCXEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ13 */
#define IFX_MCDS_TCXEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ13 */
#define IFX_MCDS_TCXEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ14 */
#define IFX_MCDS_TCXEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ14 */
#define IFX_MCDS_TCXEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ14 */
#define IFX_MCDS_TCXEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_TCXEVT_Bits.EIQ15 */
#define IFX_MCDS_TCXEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXEVT_Bits.EIQ15 */
#define IFX_MCDS_TCXEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXEVT_Bits.EIQ15 */
#define IFX_MCDS_TCXEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIS0 */
#define IFX_MCDS_TCXACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIS0 */
#define IFX_MCDS_TCXACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIS0 */
#define IFX_MCDS_TCXACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIQ0 */
#define IFX_MCDS_TCXACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIQ0 */
#define IFX_MCDS_TCXACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIQ0 */
#define IFX_MCDS_TCXACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.LV0 */
#define IFX_MCDS_TCXACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.LV0 */
#define IFX_MCDS_TCXACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.LV0 */
#define IFX_MCDS_TCXACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIS1 */
#define IFX_MCDS_TCXACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIS1 */
#define IFX_MCDS_TCXACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIS1 */
#define IFX_MCDS_TCXACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIQ1 */
#define IFX_MCDS_TCXACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIQ1 */
#define IFX_MCDS_TCXACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIQ1 */
#define IFX_MCDS_TCXACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.LV1 */
#define IFX_MCDS_TCXACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.LV1 */
#define IFX_MCDS_TCXACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.LV1 */
#define IFX_MCDS_TCXACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIS2 */
#define IFX_MCDS_TCXACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIS2 */
#define IFX_MCDS_TCXACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIS2 */
#define IFX_MCDS_TCXACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIQ2 */
#define IFX_MCDS_TCXACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIQ2 */
#define IFX_MCDS_TCXACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIQ2 */
#define IFX_MCDS_TCXACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.LV2 */
#define IFX_MCDS_TCXACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.LV2 */
#define IFX_MCDS_TCXACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.LV2 */
#define IFX_MCDS_TCXACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIS3 */
#define IFX_MCDS_TCXACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIS3 */
#define IFX_MCDS_TCXACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIS3 */
#define IFX_MCDS_TCXACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.AIQ3 */
#define IFX_MCDS_TCXACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.AIQ3 */
#define IFX_MCDS_TCXACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.AIQ3 */
#define IFX_MCDS_TCXACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_TCXACT_Bits.LV3 */
#define IFX_MCDS_TCXACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCXACT_Bits.LV3 */
#define IFX_MCDS_TCXACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCXACT_Bits.LV3 */
#define IFX_MCDS_TCXACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_TCXIDBND_Bits.BOUND */
#define IFX_MCDS_TCXIDBND_BOUND_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCXIDBND_Bits.BOUND */
#define IFX_MCDS_TCXIDBND_BOUND_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCXIDBND_Bits.BOUND */
#define IFX_MCDS_TCXIDBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXIDRNG_Bits.RANGE */
#define IFX_MCDS_TCXIDRNG_RANGE_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCXIDRNG_Bits.RANGE */
#define IFX_MCDS_TCXIDRNG_RANGE_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCXIDRNG_Bits.RANGE */
#define IFX_MCDS_TCXIDRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXIDMSK_Bits.MASK */
#define IFX_MCDS_TCXIDMSK_MASK_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCXIDMSK_Bits.MASK */
#define IFX_MCDS_TCXIDMSK_MASK_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCXIDMSK_Bits.MASK */
#define IFX_MCDS_TCXIDMSK_MASK_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXIDSGN_Bits.SIGN */
#define IFX_MCDS_TCXIDSGN_SIGN_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCXIDSGN_Bits.SIGN */
#define IFX_MCDS_TCXIDSGN_SIGN_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCXIDSGN_Bits.SIGN */
#define IFX_MCDS_TCXIDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCXIPBND_Bits.BOUND */
#define IFX_MCDS_TCXIPBND_BOUND_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCXIPBND_Bits.BOUND */
#define IFX_MCDS_TCXIPBND_BOUND_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCXIPBND_Bits.BOUND */
#define IFX_MCDS_TCXIPBND_BOUND_OFF (1u)

/** \brief Length for Ifx_MCDS_TCXIPRNG_Bits.RANGE */
#define IFX_MCDS_TCXIPRNG_RANGE_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCXIPRNG_Bits.RANGE */
#define IFX_MCDS_TCXIPRNG_RANGE_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCXIPRNG_Bits.RANGE */
#define IFX_MCDS_TCXIPRNG_RANGE_OFF (1u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.SUS */
#define IFX_MCDS_TCYDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.SUS */
#define IFX_MCDS_TCYDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.SUS */
#define IFX_MCDS_TCYDCSTS_SUS_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.IDLE */
#define IFX_MCDS_TCYDCSTS_IDLE_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.IDLE */
#define IFX_MCDS_TCYDCSTS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.IDLE */
#define IFX_MCDS_TCYDCSTS_IDLE_OFF (1u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.HALT */
#define IFX_MCDS_TCYDCSTS_HALT_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.HALT */
#define IFX_MCDS_TCYDCSTS_HALT_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.HALT */
#define IFX_MCDS_TCYDCSTS_HALT_OFF (2u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.ISR */
#define IFX_MCDS_TCYDCSTS_ISR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.ISR */
#define IFX_MCDS_TCYDCSTS_ISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.ISR */
#define IFX_MCDS_TCYDCSTS_ISR_OFF (3u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.HBRK */
#define IFX_MCDS_TCYDCSTS_HBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.HBRK */
#define IFX_MCDS_TCYDCSTS_HBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.HBRK */
#define IFX_MCDS_TCYDCSTS_HBRK_OFF (4u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.SBRK */
#define IFX_MCDS_TCYDCSTS_SBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.SBRK */
#define IFX_MCDS_TCYDCSTS_SBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.SBRK */
#define IFX_MCDS_TCYDCSTS_SBRK_OFF (5u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.IEN */
#define IFX_MCDS_TCYDCSTS_IEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.IEN */
#define IFX_MCDS_TCYDCSTS_IEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.IEN */
#define IFX_MCDS_TCYDCSTS_IEN_OFF (7u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCYDCSTS_DBGEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCYDCSTS_DBGEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCYDCSTS_DBGEN_OFF (8u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCYDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCYDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCYDCSTS_CLKDIV_OFF (9u)

/** \brief Length for Ifx_MCDS_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCYDCSTS_NESTED_ISR_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCYDCSTS_NESTED_ISR_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCYDCSTS_NESTED_ISR_OFF (11u)

/** \brief Length for Ifx_MCDS_TCYCID_Bits.CURRENT */
#define IFX_MCDS_TCYCID_CURRENT_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCYCID_Bits.CURRENT */
#define IFX_MCDS_TCYCID_CURRENT_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCYCID_Bits.CURRENT */
#define IFX_MCDS_TCYCID_CURRENT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYCIP_Bits.CURRENT */
#define IFX_MCDS_TCYCIP_CURRENT_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCYCIP_Bits.CURRENT */
#define IFX_MCDS_TCYCIP_CURRENT_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCYCIP_Bits.CURRENT */
#define IFX_MCDS_TCYCIP_CURRENT_OFF (1u)

/** \brief Length for Ifx_MCDS_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCYCFT_VSHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCYCFT_VSHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCYCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCYCFT_VSHRT_FCT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCYCFT_SHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCYCFT_SHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCYCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCYCFT_SHRT_FCT_OFF (16u)

/** \brief Length for Ifx_MCDS_TCYPALLUTD_Bits.DATA */
#define IFX_MCDS_TCYPALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYPALLUTD_Bits.DATA */
#define IFX_MCDS_TCYPALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYPALLUTD_Bits.DATA */
#define IFX_MCDS_TCYPALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCYPALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCYPALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCYPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCYPALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDS_TCYPALBND_Bits.BOUND */
#define IFX_MCDS_TCYPALBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYPALBND_Bits.BOUND */
#define IFX_MCDS_TCYPALBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYPALBND_Bits.BOUND */
#define IFX_MCDS_TCYPALBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYPALRNG_Bits.RANGE */
#define IFX_MCDS_TCYPALRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYPALRNG_Bits.RANGE */
#define IFX_MCDS_TCYPALRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYPALRNG_Bits.RANGE */
#define IFX_MCDS_TCYPALRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCYPALMAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCYPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCYPALMAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCYPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCYPALMAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDS_TCYPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCYPALMAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCYPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCYPALMAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCYPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCYPALMAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDS_TCYPALMAP_Bits.EN */
#define IFX_MCDS_TCYPALMAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYPALMAP_Bits.EN */
#define IFX_MCDS_TCYPALMAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYPALMAP_Bits.EN */
#define IFX_MCDS_TCYPALMAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_TCYEABND_Bits.BOUND */
#define IFX_MCDS_TCYEABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYEABND_Bits.BOUND */
#define IFX_MCDS_TCYEABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYEABND_Bits.BOUND */
#define IFX_MCDS_TCYEABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYEARNG_Bits.RANGE */
#define IFX_MCDS_TCYEARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYEARNG_Bits.RANGE */
#define IFX_MCDS_TCYEARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYEARNG_Bits.RANGE */
#define IFX_MCDS_TCYEARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCYWDBND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCYWDBND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCYWDBND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCYWDHBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCYWDHBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCYWDHBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCYWDRNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCYWDRNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCYWDRNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCYWDHRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCYWDHRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCYWDHRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCYWDMSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCYWDMSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCYWDMSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCYWDHMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCYWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCYWDHMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCYWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCYWDHMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDSGN_Bits.SIGN */
#define IFX_MCDS_TCYWDSGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDS_TCYWDSGN_Bits.SIGN */
#define IFX_MCDS_TCYWDSGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_TCYWDSGN_Bits.SIGN */
#define IFX_MCDS_TCYWDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYWDSGN_Bits.EITHER */
#define IFX_MCDS_TCYWDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYWDSGN_Bits.EITHER */
#define IFX_MCDS_TCYWDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYWDSGN_Bits.EITHER */
#define IFX_MCDS_TCYWDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_TCYWDSGN_Bits.BELOW */
#define IFX_MCDS_TCYWDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYWDSGN_Bits.BELOW */
#define IFX_MCDS_TCYWDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYWDSGN_Bits.BELOW */
#define IFX_MCDS_TCYWDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_TCYWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCYWDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCYWDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCYWDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_TCYACBND_Bits.BOUND */
#define IFX_MCDS_TCYACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCYACBND_Bits.BOUND */
#define IFX_MCDS_TCYACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCYACBND_Bits.BOUND */
#define IFX_MCDS_TCYACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYACRNG_Bits.RANGE */
#define IFX_MCDS_TCYACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCYACRNG_Bits.RANGE */
#define IFX_MCDS_TCYACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCYACRNG_Bits.RANGE */
#define IFX_MCDS_TCYACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.SVM */
#define IFX_MCDS_TCYACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.SVM */
#define IFX_MCDS_TCYACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.SVM */
#define IFX_MCDS_TCYACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.MASTER */
#define IFX_MCDS_TCYACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.MASTER */
#define IFX_MCDS_TCYACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.MASTER */
#define IFX_MCDS_TCYACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCYACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCYACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCYACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.WR */
#define IFX_MCDS_TCYACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.WR */
#define IFX_MCDS_TCYACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.WR */
#define IFX_MCDS_TCYACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.RD */
#define IFX_MCDS_TCYACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.RD */
#define IFX_MCDS_TCYACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.RD */
#define IFX_MCDS_TCYACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_TCYACMSK_Bits.MSK */
#define IFX_MCDS_TCYACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACMSK_Bits.MSK */
#define IFX_MCDS_TCYACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACMSK_Bits.MSK */
#define IFX_MCDS_TCYACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCYDTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCYDTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCYDTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCYDTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCYDTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCYDTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCYDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCYDTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ0 */
#define IFX_MCDS_TCYEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ0 */
#define IFX_MCDS_TCYEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ0 */
#define IFX_MCDS_TCYEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ1 */
#define IFX_MCDS_TCYEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ1 */
#define IFX_MCDS_TCYEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ1 */
#define IFX_MCDS_TCYEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ2 */
#define IFX_MCDS_TCYEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ2 */
#define IFX_MCDS_TCYEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ2 */
#define IFX_MCDS_TCYEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ3 */
#define IFX_MCDS_TCYEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ3 */
#define IFX_MCDS_TCYEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ3 */
#define IFX_MCDS_TCYEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ4 */
#define IFX_MCDS_TCYEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ4 */
#define IFX_MCDS_TCYEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ4 */
#define IFX_MCDS_TCYEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ5 */
#define IFX_MCDS_TCYEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ5 */
#define IFX_MCDS_TCYEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ5 */
#define IFX_MCDS_TCYEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ6 */
#define IFX_MCDS_TCYEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ6 */
#define IFX_MCDS_TCYEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ6 */
#define IFX_MCDS_TCYEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ7 */
#define IFX_MCDS_TCYEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ7 */
#define IFX_MCDS_TCYEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ7 */
#define IFX_MCDS_TCYEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ8 */
#define IFX_MCDS_TCYEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ8 */
#define IFX_MCDS_TCYEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ8 */
#define IFX_MCDS_TCYEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ9 */
#define IFX_MCDS_TCYEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ9 */
#define IFX_MCDS_TCYEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ9 */
#define IFX_MCDS_TCYEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ10 */
#define IFX_MCDS_TCYEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ10 */
#define IFX_MCDS_TCYEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ10 */
#define IFX_MCDS_TCYEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ11 */
#define IFX_MCDS_TCYEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ11 */
#define IFX_MCDS_TCYEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ11 */
#define IFX_MCDS_TCYEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ12 */
#define IFX_MCDS_TCYEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ12 */
#define IFX_MCDS_TCYEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ12 */
#define IFX_MCDS_TCYEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ13 */
#define IFX_MCDS_TCYEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ13 */
#define IFX_MCDS_TCYEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ13 */
#define IFX_MCDS_TCYEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ14 */
#define IFX_MCDS_TCYEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ14 */
#define IFX_MCDS_TCYEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ14 */
#define IFX_MCDS_TCYEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_TCYEVT_Bits.EIQ15 */
#define IFX_MCDS_TCYEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYEVT_Bits.EIQ15 */
#define IFX_MCDS_TCYEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYEVT_Bits.EIQ15 */
#define IFX_MCDS_TCYEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIS0 */
#define IFX_MCDS_TCYACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIS0 */
#define IFX_MCDS_TCYACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIS0 */
#define IFX_MCDS_TCYACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIQ0 */
#define IFX_MCDS_TCYACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIQ0 */
#define IFX_MCDS_TCYACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIQ0 */
#define IFX_MCDS_TCYACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.LV0 */
#define IFX_MCDS_TCYACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.LV0 */
#define IFX_MCDS_TCYACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.LV0 */
#define IFX_MCDS_TCYACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIS1 */
#define IFX_MCDS_TCYACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIS1 */
#define IFX_MCDS_TCYACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIS1 */
#define IFX_MCDS_TCYACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIQ1 */
#define IFX_MCDS_TCYACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIQ1 */
#define IFX_MCDS_TCYACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIQ1 */
#define IFX_MCDS_TCYACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.LV1 */
#define IFX_MCDS_TCYACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.LV1 */
#define IFX_MCDS_TCYACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.LV1 */
#define IFX_MCDS_TCYACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIS2 */
#define IFX_MCDS_TCYACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIS2 */
#define IFX_MCDS_TCYACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIS2 */
#define IFX_MCDS_TCYACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIQ2 */
#define IFX_MCDS_TCYACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIQ2 */
#define IFX_MCDS_TCYACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIQ2 */
#define IFX_MCDS_TCYACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.LV2 */
#define IFX_MCDS_TCYACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.LV2 */
#define IFX_MCDS_TCYACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.LV2 */
#define IFX_MCDS_TCYACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIS3 */
#define IFX_MCDS_TCYACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIS3 */
#define IFX_MCDS_TCYACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIS3 */
#define IFX_MCDS_TCYACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.AIQ3 */
#define IFX_MCDS_TCYACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.AIQ3 */
#define IFX_MCDS_TCYACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.AIQ3 */
#define IFX_MCDS_TCYACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_TCYACT_Bits.LV3 */
#define IFX_MCDS_TCYACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCYACT_Bits.LV3 */
#define IFX_MCDS_TCYACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCYACT_Bits.LV3 */
#define IFX_MCDS_TCYACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_TCYIDBND_Bits.BOUND */
#define IFX_MCDS_TCYIDBND_BOUND_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCYIDBND_Bits.BOUND */
#define IFX_MCDS_TCYIDBND_BOUND_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCYIDBND_Bits.BOUND */
#define IFX_MCDS_TCYIDBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYIDRNG_Bits.RANGE */
#define IFX_MCDS_TCYIDRNG_RANGE_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCYIDRNG_Bits.RANGE */
#define IFX_MCDS_TCYIDRNG_RANGE_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCYIDRNG_Bits.RANGE */
#define IFX_MCDS_TCYIDRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYIDMSK_Bits.MASK */
#define IFX_MCDS_TCYIDMSK_MASK_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCYIDMSK_Bits.MASK */
#define IFX_MCDS_TCYIDMSK_MASK_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCYIDMSK_Bits.MASK */
#define IFX_MCDS_TCYIDMSK_MASK_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYIDSGN_Bits.SIGN */
#define IFX_MCDS_TCYIDSGN_SIGN_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCYIDSGN_Bits.SIGN */
#define IFX_MCDS_TCYIDSGN_SIGN_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCYIDSGN_Bits.SIGN */
#define IFX_MCDS_TCYIDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCYIPBND_Bits.BOUND */
#define IFX_MCDS_TCYIPBND_BOUND_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCYIPBND_Bits.BOUND */
#define IFX_MCDS_TCYIPBND_BOUND_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCYIPBND_Bits.BOUND */
#define IFX_MCDS_TCYIPBND_BOUND_OFF (1u)

/** \brief Length for Ifx_MCDS_TCYIPRNG_Bits.RANGE */
#define IFX_MCDS_TCYIPRNG_RANGE_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCYIPRNG_Bits.RANGE */
#define IFX_MCDS_TCYIPRNG_RANGE_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCYIPRNG_Bits.RANGE */
#define IFX_MCDS_TCYIPRNG_RANGE_OFF (1u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.EI */
#define IFX_MCDS_SPBDCSTS_EI_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.EI */
#define IFX_MCDS_SPBDCSTS_EI_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.EI */
#define IFX_MCDS_SPBDCSTS_EI_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.SUS */
#define IFX_MCDS_SPBDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.SUS */
#define IFX_MCDS_SPBDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.SUS */
#define IFX_MCDS_SPBDCSTS_SUS_OFF (1u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.ERR */
#define IFX_MCDS_SPBDCSTS_ERR_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.ERR */
#define IFX_MCDS_SPBDCSTS_ERR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.ERR */
#define IFX_MCDS_SPBDCSTS_ERR_OFF (2u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.RTY */
#define IFX_MCDS_SPBDCSTS_RTY_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.RTY */
#define IFX_MCDS_SPBDCSTS_RTY_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.RTY */
#define IFX_MCDS_SPBDCSTS_RTY_OFF (3u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.SYSRES */
#define IFX_MCDS_SPBDCSTS_SYSRES_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.SYSRES */
#define IFX_MCDS_SPBDCSTS_SYSRES_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.SYSRES */
#define IFX_MCDS_SPBDCSTS_SYSRES_OFF (4u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.APPRES */
#define IFX_MCDS_SPBDCSTS_APPRES_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.APPRES */
#define IFX_MCDS_SPBDCSTS_APPRES_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.APPRES */
#define IFX_MCDS_SPBDCSTS_APPRES_OFF (5u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SPBDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SPBDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SPBDCSTS_CLKDIV_OFF (6u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SPBDCSTS_SAFEEI_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SPBDCSTS_SAFEEI_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SPBDCSTS_SAFEEI_OFF (8u)

/** \brief Length for Ifx_MCDS_SPBDCSTS_Bits.SLEEP */
#define IFX_MCDS_SPBDCSTS_SLEEP_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBDCSTS_Bits.SLEEP */
#define IFX_MCDS_SPBDCSTS_SLEEP_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBDCSTS_Bits.SLEEP */
#define IFX_MCDS_SPBDCSTS_SLEEP_OFF (9u)

/** \brief Length for Ifx_MCDS_SPBEABND_Bits.BOUND */
#define IFX_MCDS_SPBEABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SPBEABND_Bits.BOUND */
#define IFX_MCDS_SPBEABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SPBEABND_Bits.BOUND */
#define IFX_MCDS_SPBEABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBEARNG_Bits.RANGE */
#define IFX_MCDS_SPBEARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SPBEARNG_Bits.RANGE */
#define IFX_MCDS_SPBEARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SPBEARNG_Bits.RANGE */
#define IFX_MCDS_SPBEARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBWDBND_Bits.BOUND */
#define IFX_MCDS_SPBWDBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SPBWDBND_Bits.BOUND */
#define IFX_MCDS_SPBWDBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SPBWDBND_Bits.BOUND */
#define IFX_MCDS_SPBWDBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBWDRNG_Bits.RANGE */
#define IFX_MCDS_SPBWDRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SPBWDRNG_Bits.RANGE */
#define IFX_MCDS_SPBWDRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SPBWDRNG_Bits.RANGE */
#define IFX_MCDS_SPBWDRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBWDMSK_Bits.MASK */
#define IFX_MCDS_SPBWDMSK_MASK_LEN (32u)

/** \brief Mask for Ifx_MCDS_SPBWDMSK_Bits.MASK */
#define IFX_MCDS_SPBWDMSK_MASK_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SPBWDMSK_Bits.MASK */
#define IFX_MCDS_SPBWDMSK_MASK_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBWDSGN_Bits.SIGN */
#define IFX_MCDS_SPBWDSGN_SIGN_LEN (5u)

/** \brief Mask for Ifx_MCDS_SPBWDSGN_Bits.SIGN */
#define IFX_MCDS_SPBWDSGN_SIGN_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SPBWDSGN_Bits.SIGN */
#define IFX_MCDS_SPBWDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBWDSGN_Bits.EITHER */
#define IFX_MCDS_SPBWDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBWDSGN_Bits.EITHER */
#define IFX_MCDS_SPBWDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBWDSGN_Bits.EITHER */
#define IFX_MCDS_SPBWDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_SPBWDSGN_Bits.BELOW */
#define IFX_MCDS_SPBWDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBWDSGN_Bits.BELOW */
#define IFX_MCDS_SPBWDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBWDSGN_Bits.BELOW */
#define IFX_MCDS_SPBWDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_SPBWDSGN_Bits.RELOAD */
#define IFX_MCDS_SPBWDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_SPBWDSGN_Bits.RELOAD */
#define IFX_MCDS_SPBWDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SPBWDSGN_Bits.RELOAD */
#define IFX_MCDS_SPBWDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_SPBACBND_Bits.BOUND */
#define IFX_MCDS_SPBACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_SPBACBND_Bits.BOUND */
#define IFX_MCDS_SPBACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SPBACBND_Bits.BOUND */
#define IFX_MCDS_SPBACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBACRNG_Bits.RANGE */
#define IFX_MCDS_SPBACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_SPBACRNG_Bits.RANGE */
#define IFX_MCDS_SPBACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SPBACRNG_Bits.RANGE */
#define IFX_MCDS_SPBACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.SVM */
#define IFX_MCDS_SPBACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.SVM */
#define IFX_MCDS_SPBACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.SVM */
#define IFX_MCDS_SPBACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.MASTER */
#define IFX_MCDS_SPBACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.MASTER */
#define IFX_MCDS_SPBACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.MASTER */
#define IFX_MCDS_SPBACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SPBACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SPBACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SPBACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.WR */
#define IFX_MCDS_SPBACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.WR */
#define IFX_MCDS_SPBACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.WR */
#define IFX_MCDS_SPBACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.RD */
#define IFX_MCDS_SPBACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.RD */
#define IFX_MCDS_SPBACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.RD */
#define IFX_MCDS_SPBACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_SPBACMSK_Bits.MSK */
#define IFX_MCDS_SPBACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACMSK_Bits.MSK */
#define IFX_MCDS_SPBACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACMSK_Bits.MSK */
#define IFX_MCDS_SPBACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ0 */
#define IFX_MCDS_SPBEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ0 */
#define IFX_MCDS_SPBEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ0 */
#define IFX_MCDS_SPBEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ1 */
#define IFX_MCDS_SPBEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ1 */
#define IFX_MCDS_SPBEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ1 */
#define IFX_MCDS_SPBEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ2 */
#define IFX_MCDS_SPBEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ2 */
#define IFX_MCDS_SPBEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ2 */
#define IFX_MCDS_SPBEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ3 */
#define IFX_MCDS_SPBEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ3 */
#define IFX_MCDS_SPBEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ3 */
#define IFX_MCDS_SPBEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ4 */
#define IFX_MCDS_SPBEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ4 */
#define IFX_MCDS_SPBEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ4 */
#define IFX_MCDS_SPBEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ5 */
#define IFX_MCDS_SPBEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ5 */
#define IFX_MCDS_SPBEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ5 */
#define IFX_MCDS_SPBEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ6 */
#define IFX_MCDS_SPBEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ6 */
#define IFX_MCDS_SPBEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ6 */
#define IFX_MCDS_SPBEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ7 */
#define IFX_MCDS_SPBEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ7 */
#define IFX_MCDS_SPBEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ7 */
#define IFX_MCDS_SPBEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ8 */
#define IFX_MCDS_SPBEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ8 */
#define IFX_MCDS_SPBEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ8 */
#define IFX_MCDS_SPBEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ9 */
#define IFX_MCDS_SPBEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ9 */
#define IFX_MCDS_SPBEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ9 */
#define IFX_MCDS_SPBEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ10 */
#define IFX_MCDS_SPBEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ10 */
#define IFX_MCDS_SPBEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ10 */
#define IFX_MCDS_SPBEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ11 */
#define IFX_MCDS_SPBEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ11 */
#define IFX_MCDS_SPBEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ11 */
#define IFX_MCDS_SPBEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ12 */
#define IFX_MCDS_SPBEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ12 */
#define IFX_MCDS_SPBEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ12 */
#define IFX_MCDS_SPBEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ13 */
#define IFX_MCDS_SPBEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ13 */
#define IFX_MCDS_SPBEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ13 */
#define IFX_MCDS_SPBEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ14 */
#define IFX_MCDS_SPBEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ14 */
#define IFX_MCDS_SPBEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ14 */
#define IFX_MCDS_SPBEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_SPBEVT_Bits.EIQ15 */
#define IFX_MCDS_SPBEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBEVT_Bits.EIQ15 */
#define IFX_MCDS_SPBEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBEVT_Bits.EIQ15 */
#define IFX_MCDS_SPBEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIS0 */
#define IFX_MCDS_SPBACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIS0 */
#define IFX_MCDS_SPBACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIS0 */
#define IFX_MCDS_SPBACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIQ0 */
#define IFX_MCDS_SPBACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIQ0 */
#define IFX_MCDS_SPBACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIQ0 */
#define IFX_MCDS_SPBACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.LV0 */
#define IFX_MCDS_SPBACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.LV0 */
#define IFX_MCDS_SPBACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.LV0 */
#define IFX_MCDS_SPBACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIS1 */
#define IFX_MCDS_SPBACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIS1 */
#define IFX_MCDS_SPBACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIS1 */
#define IFX_MCDS_SPBACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIQ1 */
#define IFX_MCDS_SPBACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIQ1 */
#define IFX_MCDS_SPBACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIQ1 */
#define IFX_MCDS_SPBACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.LV1 */
#define IFX_MCDS_SPBACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.LV1 */
#define IFX_MCDS_SPBACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.LV1 */
#define IFX_MCDS_SPBACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIS2 */
#define IFX_MCDS_SPBACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIS2 */
#define IFX_MCDS_SPBACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIS2 */
#define IFX_MCDS_SPBACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIQ2 */
#define IFX_MCDS_SPBACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIQ2 */
#define IFX_MCDS_SPBACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIQ2 */
#define IFX_MCDS_SPBACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.LV2 */
#define IFX_MCDS_SPBACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.LV2 */
#define IFX_MCDS_SPBACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.LV2 */
#define IFX_MCDS_SPBACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIS3 */
#define IFX_MCDS_SPBACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIS3 */
#define IFX_MCDS_SPBACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIS3 */
#define IFX_MCDS_SPBACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.AIQ3 */
#define IFX_MCDS_SPBACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.AIQ3 */
#define IFX_MCDS_SPBACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.AIQ3 */
#define IFX_MCDS_SPBACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_SPBACT_Bits.LV3 */
#define IFX_MCDS_SPBACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_SPBACT_Bits.LV3 */
#define IFX_MCDS_SPBACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SPBACT_Bits.LV3 */
#define IFX_MCDS_SPBACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.EI */
#define IFX_MCDS_SRIDCSTS_EI_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.EI */
#define IFX_MCDS_SRIDCSTS_EI_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.EI */
#define IFX_MCDS_SRIDCSTS_EI_OFF (0u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.SUS */
#define IFX_MCDS_SRIDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.SUS */
#define IFX_MCDS_SRIDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.SUS */
#define IFX_MCDS_SRIDCSTS_SUS_OFF (1u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.ERR */
#define IFX_MCDS_SRIDCSTS_ERR_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.ERR */
#define IFX_MCDS_SRIDCSTS_ERR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.ERR */
#define IFX_MCDS_SRIDCSTS_ERR_OFF (2u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.SYSRES */
#define IFX_MCDS_SRIDCSTS_SYSRES_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.SYSRES */
#define IFX_MCDS_SRIDCSTS_SYSRES_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.SYSRES */
#define IFX_MCDS_SRIDCSTS_SYSRES_OFF (4u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.APPRES */
#define IFX_MCDS_SRIDCSTS_APPRES_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.APPRES */
#define IFX_MCDS_SRIDCSTS_APPRES_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.APPRES */
#define IFX_MCDS_SRIDCSTS_APPRES_OFF (5u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SRIDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SRIDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.CLKDIV */
#define IFX_MCDS_SRIDCSTS_CLKDIV_OFF (6u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SRIDCSTS_SAFEEI_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SRIDCSTS_SAFEEI_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.SAFEEI */
#define IFX_MCDS_SRIDCSTS_SAFEEI_OFF (8u)

/** \brief Length for Ifx_MCDS_SRIDCSTS_Bits.SLEEP */
#define IFX_MCDS_SRIDCSTS_SLEEP_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIDCSTS_Bits.SLEEP */
#define IFX_MCDS_SRIDCSTS_SLEEP_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIDCSTS_Bits.SLEEP */
#define IFX_MCDS_SRIDCSTS_SLEEP_OFF (9u)

/** \brief Length for Ifx_MCDS_SRI1BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI1BALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI1BALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI1BALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI1BALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDS_SRI1BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI1BALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_SRI1BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI1BALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDS_SRI1BALBND_Bits.BOUND */
#define IFX_MCDS_SRI1BALBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1BALBND_Bits.BOUND */
#define IFX_MCDS_SRI1BALBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1BALBND_Bits.BOUND */
#define IFX_MCDS_SRI1BALBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI1BALRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI1BALRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI1BALRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI1BALMAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDS_SRI1BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI1BALMAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_SRI1BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI1BALMAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDS_SRI1BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI1BALMAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDS_SRI1BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI1BALMAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_SRI1BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI1BALMAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDS_SRI1BALMAP_Bits.EN */
#define IFX_MCDS_SRI1BALMAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1BALMAP_Bits.EN */
#define IFX_MCDS_SRI1BALMAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1BALMAP_Bits.EN */
#define IFX_MCDS_SRI1BALMAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_SRI2BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI2BALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI2BALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2BALLUTD_Bits.DATA */
#define IFX_MCDS_SRI2BALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI2BALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDS_SRI2BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI2BALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_SRI2BALLUTA_Bits.ADDR */
#define IFX_MCDS_SRI2BALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDS_SRI2BALBND_Bits.BOUND */
#define IFX_MCDS_SRI2BALBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2BALBND_Bits.BOUND */
#define IFX_MCDS_SRI2BALBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2BALBND_Bits.BOUND */
#define IFX_MCDS_SRI2BALBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI2BALRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI2BALRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2BALRNG_Bits.RANGE */
#define IFX_MCDS_SRI2BALRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI2BALMAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDS_SRI2BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI2BALMAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_SRI2BALMAP_Bits.OFFSET */
#define IFX_MCDS_SRI2BALMAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDS_SRI2BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI2BALMAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDS_SRI2BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI2BALMAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_SRI2BALMAP_Bits.GRAIN */
#define IFX_MCDS_SRI2BALMAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDS_SRI2BALMAP_Bits.EN */
#define IFX_MCDS_SRI2BALMAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2BALMAP_Bits.EN */
#define IFX_MCDS_SRI2BALMAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2BALMAP_Bits.EN */
#define IFX_MCDS_SRI2BALMAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_SRI1EABND_Bits.BOUND */
#define IFX_MCDS_SRI1EABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1EABND_Bits.BOUND */
#define IFX_MCDS_SRI1EABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1EABND_Bits.BOUND */
#define IFX_MCDS_SRI1EABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1EARNG_Bits.RANGE */
#define IFX_MCDS_SRI1EARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1EARNG_Bits.RANGE */
#define IFX_MCDS_SRI1EARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1EARNG_Bits.RANGE */
#define IFX_MCDS_SRI1EARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI1WDBND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI1WDBND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI1WDBND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI1WDHBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI1WDHBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI1WDHBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI1WDRNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI1WDRNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI1WDRNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI1WDHRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI1WDHRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI1WDHRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI1WDMSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI1WDMSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI1WDMSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI1WDHMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI1WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI1WDHMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI1WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI1WDHMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI1WDSGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDS_SRI1WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI1WDSGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_SRI1WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI1WDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI1WDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI1WDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI1WDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_SRI1WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI1WDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI1WDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI1WDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_SRI1WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI1WDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI1WDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI1WDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_SRI1ACBND_Bits.BOUND */
#define IFX_MCDS_SRI1ACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_SRI1ACBND_Bits.BOUND */
#define IFX_MCDS_SRI1ACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SRI1ACBND_Bits.BOUND */
#define IFX_MCDS_SRI1ACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI1ACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_SRI1ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI1ACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SRI1ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI1ACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.SVM */
#define IFX_MCDS_SRI1ACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.SVM */
#define IFX_MCDS_SRI1ACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.SVM */
#define IFX_MCDS_SRI1ACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI1ACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI1ACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI1ACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI1ACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI1ACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI1ACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.WR */
#define IFX_MCDS_SRI1ACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.WR */
#define IFX_MCDS_SRI1ACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.WR */
#define IFX_MCDS_SRI1ACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.RD */
#define IFX_MCDS_SRI1ACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.RD */
#define IFX_MCDS_SRI1ACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.RD */
#define IFX_MCDS_SRI1ACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_SRI1ACMSK_Bits.MSK */
#define IFX_MCDS_SRI1ACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI1ACMSK_Bits.MSK */
#define IFX_MCDS_SRI1ACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI1ACMSK_Bits.MSK */
#define IFX_MCDS_SRI1ACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI1DTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI1DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI1DTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDS_SRI2EABND_Bits.BOUND */
#define IFX_MCDS_SRI2EABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2EABND_Bits.BOUND */
#define IFX_MCDS_SRI2EABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2EABND_Bits.BOUND */
#define IFX_MCDS_SRI2EABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2EARNG_Bits.RANGE */
#define IFX_MCDS_SRI2EARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2EARNG_Bits.RANGE */
#define IFX_MCDS_SRI2EARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2EARNG_Bits.RANGE */
#define IFX_MCDS_SRI2EARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI2WDBND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI2WDBND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_SRI2WDBND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI2WDHBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI2WDHBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_SRI2WDHBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI2WDRNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI2WDRNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_SRI2WDRNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI2WDHRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI2WDHRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_SRI2WDHRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI2WDMSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI2WDMSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_SRI2WDMSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI2WDHMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_SRI2WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI2WDHMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_SRI2WDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_SRI2WDHMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI2WDSGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDS_SRI2WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI2WDSGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_SRI2WDSGN_Bits.SIGN */
#define IFX_MCDS_SRI2WDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI2WDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI2WDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2WDSGN_Bits.EITHER */
#define IFX_MCDS_SRI2WDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_SRI2WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI2WDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI2WDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2WDSGN_Bits.BELOW */
#define IFX_MCDS_SRI2WDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_SRI2WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI2WDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI2WDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2WDSGN_Bits.RELOAD */
#define IFX_MCDS_SRI2WDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_SRI2ACBND_Bits.BOUND */
#define IFX_MCDS_SRI2ACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_SRI2ACBND_Bits.BOUND */
#define IFX_MCDS_SRI2ACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SRI2ACBND_Bits.BOUND */
#define IFX_MCDS_SRI2ACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI2ACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_SRI2ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI2ACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_SRI2ACRNG_Bits.RANGE */
#define IFX_MCDS_SRI2ACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.SVM */
#define IFX_MCDS_SRI2ACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.SVM */
#define IFX_MCDS_SRI2ACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.SVM */
#define IFX_MCDS_SRI2ACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI2ACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI2ACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.MASTER */
#define IFX_MCDS_SRI2ACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI2ACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI2ACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_SRI2ACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.WR */
#define IFX_MCDS_SRI2ACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.WR */
#define IFX_MCDS_SRI2ACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.WR */
#define IFX_MCDS_SRI2ACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.RD */
#define IFX_MCDS_SRI2ACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.RD */
#define IFX_MCDS_SRI2ACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.RD */
#define IFX_MCDS_SRI2ACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_SRI2ACMSK_Bits.MSK */
#define IFX_MCDS_SRI2ACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRI2ACMSK_Bits.MSK */
#define IFX_MCDS_SRI2ACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRI2ACMSK_Bits.MSK */
#define IFX_MCDS_SRI2ACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2DTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_SRI2DTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_SRI2DTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_SRI2DTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ0 */
#define IFX_MCDS_SRIEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ0 */
#define IFX_MCDS_SRIEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ0 */
#define IFX_MCDS_SRIEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ1 */
#define IFX_MCDS_SRIEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ1 */
#define IFX_MCDS_SRIEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ1 */
#define IFX_MCDS_SRIEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ2 */
#define IFX_MCDS_SRIEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ2 */
#define IFX_MCDS_SRIEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ2 */
#define IFX_MCDS_SRIEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ3 */
#define IFX_MCDS_SRIEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ3 */
#define IFX_MCDS_SRIEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ3 */
#define IFX_MCDS_SRIEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ4 */
#define IFX_MCDS_SRIEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ4 */
#define IFX_MCDS_SRIEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ4 */
#define IFX_MCDS_SRIEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ5 */
#define IFX_MCDS_SRIEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ5 */
#define IFX_MCDS_SRIEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ5 */
#define IFX_MCDS_SRIEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ6 */
#define IFX_MCDS_SRIEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ6 */
#define IFX_MCDS_SRIEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ6 */
#define IFX_MCDS_SRIEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ7 */
#define IFX_MCDS_SRIEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ7 */
#define IFX_MCDS_SRIEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ7 */
#define IFX_MCDS_SRIEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ8 */
#define IFX_MCDS_SRIEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ8 */
#define IFX_MCDS_SRIEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ8 */
#define IFX_MCDS_SRIEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ9 */
#define IFX_MCDS_SRIEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ9 */
#define IFX_MCDS_SRIEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ9 */
#define IFX_MCDS_SRIEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ10 */
#define IFX_MCDS_SRIEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ10 */
#define IFX_MCDS_SRIEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ10 */
#define IFX_MCDS_SRIEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ11 */
#define IFX_MCDS_SRIEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ11 */
#define IFX_MCDS_SRIEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ11 */
#define IFX_MCDS_SRIEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ12 */
#define IFX_MCDS_SRIEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ12 */
#define IFX_MCDS_SRIEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ12 */
#define IFX_MCDS_SRIEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ13 */
#define IFX_MCDS_SRIEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ13 */
#define IFX_MCDS_SRIEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ13 */
#define IFX_MCDS_SRIEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ14 */
#define IFX_MCDS_SRIEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ14 */
#define IFX_MCDS_SRIEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ14 */
#define IFX_MCDS_SRIEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_SRIEVT_Bits.EIQ15 */
#define IFX_MCDS_SRIEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIEVT_Bits.EIQ15 */
#define IFX_MCDS_SRIEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIEVT_Bits.EIQ15 */
#define IFX_MCDS_SRIEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIS0 */
#define IFX_MCDS_SRIACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIS0 */
#define IFX_MCDS_SRIACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIS0 */
#define IFX_MCDS_SRIACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIQ0 */
#define IFX_MCDS_SRIACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIQ0 */
#define IFX_MCDS_SRIACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIQ0 */
#define IFX_MCDS_SRIACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.LV0 */
#define IFX_MCDS_SRIACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.LV0 */
#define IFX_MCDS_SRIACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.LV0 */
#define IFX_MCDS_SRIACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIS1 */
#define IFX_MCDS_SRIACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIS1 */
#define IFX_MCDS_SRIACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIS1 */
#define IFX_MCDS_SRIACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIQ1 */
#define IFX_MCDS_SRIACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIQ1 */
#define IFX_MCDS_SRIACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIQ1 */
#define IFX_MCDS_SRIACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.LV1 */
#define IFX_MCDS_SRIACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.LV1 */
#define IFX_MCDS_SRIACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.LV1 */
#define IFX_MCDS_SRIACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIS2 */
#define IFX_MCDS_SRIACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIS2 */
#define IFX_MCDS_SRIACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIS2 */
#define IFX_MCDS_SRIACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIQ2 */
#define IFX_MCDS_SRIACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIQ2 */
#define IFX_MCDS_SRIACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIQ2 */
#define IFX_MCDS_SRIACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.LV2 */
#define IFX_MCDS_SRIACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.LV2 */
#define IFX_MCDS_SRIACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.LV2 */
#define IFX_MCDS_SRIACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIS3 */
#define IFX_MCDS_SRIACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIS3 */
#define IFX_MCDS_SRIACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIS3 */
#define IFX_MCDS_SRIACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.AIQ3 */
#define IFX_MCDS_SRIACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.AIQ3 */
#define IFX_MCDS_SRIACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.AIQ3 */
#define IFX_MCDS_SRIACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_SRIACT_Bits.LV3 */
#define IFX_MCDS_SRIACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_SRIACT_Bits.LV3 */
#define IFX_MCDS_SRIACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_SRIACT_Bits.LV3 */
#define IFX_MCDS_SRIACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.SUS */
#define IFX_MCDS_TCZDCSTS_SUS_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.SUS */
#define IFX_MCDS_TCZDCSTS_SUS_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.SUS */
#define IFX_MCDS_TCZDCSTS_SUS_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.IDLE */
#define IFX_MCDS_TCZDCSTS_IDLE_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.IDLE */
#define IFX_MCDS_TCZDCSTS_IDLE_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.IDLE */
#define IFX_MCDS_TCZDCSTS_IDLE_OFF (1u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.HALT */
#define IFX_MCDS_TCZDCSTS_HALT_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.HALT */
#define IFX_MCDS_TCZDCSTS_HALT_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.HALT */
#define IFX_MCDS_TCZDCSTS_HALT_OFF (2u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.ISR */
#define IFX_MCDS_TCZDCSTS_ISR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.ISR */
#define IFX_MCDS_TCZDCSTS_ISR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.ISR */
#define IFX_MCDS_TCZDCSTS_ISR_OFF (3u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.HBRK */
#define IFX_MCDS_TCZDCSTS_HBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.HBRK */
#define IFX_MCDS_TCZDCSTS_HBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.HBRK */
#define IFX_MCDS_TCZDCSTS_HBRK_OFF (4u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.SBRK */
#define IFX_MCDS_TCZDCSTS_SBRK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.SBRK */
#define IFX_MCDS_TCZDCSTS_SBRK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.SBRK */
#define IFX_MCDS_TCZDCSTS_SBRK_OFF (5u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.IEN */
#define IFX_MCDS_TCZDCSTS_IEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.IEN */
#define IFX_MCDS_TCZDCSTS_IEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.IEN */
#define IFX_MCDS_TCZDCSTS_IEN_OFF (7u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCZDCSTS_DBGEN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCZDCSTS_DBGEN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.DBGEN */
#define IFX_MCDS_TCZDCSTS_DBGEN_OFF (8u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCZDCSTS_CLKDIV_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCZDCSTS_CLKDIV_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.CLKDIV */
#define IFX_MCDS_TCZDCSTS_CLKDIV_OFF (9u)

/** \brief Length for Ifx_MCDS_TCZDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCZDCSTS_NESTED_ISR_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCZDCSTS_NESTED_ISR_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZDCSTS_Bits.NESTED_ISR */
#define IFX_MCDS_TCZDCSTS_NESTED_ISR_OFF (11u)

/** \brief Length for Ifx_MCDS_TCZCID_Bits.CURRENT */
#define IFX_MCDS_TCZCID_CURRENT_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCZCID_Bits.CURRENT */
#define IFX_MCDS_TCZCID_CURRENT_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCZCID_Bits.CURRENT */
#define IFX_MCDS_TCZCID_CURRENT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZCIP_Bits.CURRENT */
#define IFX_MCDS_TCZCIP_CURRENT_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCZCIP_Bits.CURRENT */
#define IFX_MCDS_TCZCIP_CURRENT_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCZCIP_Bits.CURRENT */
#define IFX_MCDS_TCZCIP_CURRENT_OFF (1u)

/** \brief Length for Ifx_MCDS_TCZCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCZCFT_VSHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCZCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCZCFT_VSHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCZCFT_Bits.VSHRT_FCT */
#define IFX_MCDS_TCZCFT_VSHRT_FCT_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCZCFT_SHRT_FCT_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCZCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCZCFT_SHRT_FCT_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCZCFT_Bits.SHRT_FCT */
#define IFX_MCDS_TCZCFT_SHRT_FCT_OFF (16u)

/** \brief Length for Ifx_MCDS_TCZPALLUTD_Bits.DATA */
#define IFX_MCDS_TCZPALLUTD_DATA_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZPALLUTD_Bits.DATA */
#define IFX_MCDS_TCZPALLUTD_DATA_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZPALLUTD_Bits.DATA */
#define IFX_MCDS_TCZPALLUTD_DATA_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCZPALLUTA_ADDR_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCZPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCZPALLUTA_ADDR_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCZPALLUTA_Bits.ADDR */
#define IFX_MCDS_TCZPALLUTA_ADDR_OFF (2u)

/** \brief Length for Ifx_MCDS_TCZPALBND_Bits.BOUND */
#define IFX_MCDS_TCZPALBND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZPALBND_Bits.BOUND */
#define IFX_MCDS_TCZPALBND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZPALBND_Bits.BOUND */
#define IFX_MCDS_TCZPALBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZPALRNG_Bits.RANGE */
#define IFX_MCDS_TCZPALRNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZPALRNG_Bits.RANGE */
#define IFX_MCDS_TCZPALRNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZPALRNG_Bits.RANGE */
#define IFX_MCDS_TCZPALRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCZPALMAP_OFFSET_LEN (10u)

/** \brief Mask for Ifx_MCDS_TCZPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCZPALMAP_OFFSET_MSK (0x3ffu)

/** \brief Offset for Ifx_MCDS_TCZPALMAP_Bits.OFFSET */
#define IFX_MCDS_TCZPALMAP_OFFSET_OFF (5u)

/** \brief Length for Ifx_MCDS_TCZPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCZPALMAP_GRAIN_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCZPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCZPALMAP_GRAIN_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCZPALMAP_Bits.GRAIN */
#define IFX_MCDS_TCZPALMAP_GRAIN_OFF (28u)

/** \brief Length for Ifx_MCDS_TCZPALMAP_Bits.EN */
#define IFX_MCDS_TCZPALMAP_EN_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZPALMAP_Bits.EN */
#define IFX_MCDS_TCZPALMAP_EN_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZPALMAP_Bits.EN */
#define IFX_MCDS_TCZPALMAP_EN_OFF (31u)

/** \brief Length for Ifx_MCDS_TCZEABND_Bits.BOUND */
#define IFX_MCDS_TCZEABND_BOUND_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZEABND_Bits.BOUND */
#define IFX_MCDS_TCZEABND_BOUND_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZEABND_Bits.BOUND */
#define IFX_MCDS_TCZEABND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZEARNG_Bits.RANGE */
#define IFX_MCDS_TCZEARNG_RANGE_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZEARNG_Bits.RANGE */
#define IFX_MCDS_TCZEARNG_RANGE_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZEARNG_Bits.RANGE */
#define IFX_MCDS_TCZEARNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCZWDBND_BOUND_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCZWDBND_BOUND_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDBND_Bits.BOUND_31_0 */
#define IFX_MCDS_TCZWDBND_BOUND_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCZWDHBND_BOUND_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCZWDHBND_BOUND_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDHBND_Bits.BOUND_63_32 */
#define IFX_MCDS_TCZWDHBND_BOUND_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCZWDRNG_RANGE_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCZWDRNG_RANGE_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDRNG_Bits.RANGE_31_0 */
#define IFX_MCDS_TCZWDRNG_RANGE_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCZWDHRNG_RANGE_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCZWDHRNG_RANGE_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDHRNG_Bits.RANGE_63_32 */
#define IFX_MCDS_TCZWDHRNG_RANGE_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCZWDMSK_MASK_31_0_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCZWDMSK_MASK_31_0_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDMSK_Bits.MASK_31_0 */
#define IFX_MCDS_TCZWDMSK_MASK_31_0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCZWDHMSK_MASK_63_32_LEN (32u)

/** \brief Mask for Ifx_MCDS_TCZWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCZWDHMSK_MASK_63_32_MSK (0xffffffffu)

/** \brief Offset for Ifx_MCDS_TCZWDHMSK_Bits.MASK_63_32 */
#define IFX_MCDS_TCZWDHMSK_MASK_63_32_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDSGN_Bits.SIGN */
#define IFX_MCDS_TCZWDSGN_SIGN_LEN (6u)

/** \brief Mask for Ifx_MCDS_TCZWDSGN_Bits.SIGN */
#define IFX_MCDS_TCZWDSGN_SIGN_MSK (0x3fu)

/** \brief Offset for Ifx_MCDS_TCZWDSGN_Bits.SIGN */
#define IFX_MCDS_TCZWDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZWDSGN_Bits.EITHER */
#define IFX_MCDS_TCZWDSGN_EITHER_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZWDSGN_Bits.EITHER */
#define IFX_MCDS_TCZWDSGN_EITHER_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZWDSGN_Bits.EITHER */
#define IFX_MCDS_TCZWDSGN_EITHER_OFF (14u)

/** \brief Length for Ifx_MCDS_TCZWDSGN_Bits.BELOW */
#define IFX_MCDS_TCZWDSGN_BELOW_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZWDSGN_Bits.BELOW */
#define IFX_MCDS_TCZWDSGN_BELOW_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZWDSGN_Bits.BELOW */
#define IFX_MCDS_TCZWDSGN_BELOW_OFF (15u)

/** \brief Length for Ifx_MCDS_TCZWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCZWDSGN_RELOAD_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCZWDSGN_RELOAD_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZWDSGN_Bits.RELOAD */
#define IFX_MCDS_TCZWDSGN_RELOAD_OFF (16u)

/** \brief Length for Ifx_MCDS_TCZACBND_Bits.BOUND */
#define IFX_MCDS_TCZACBND_BOUND_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCZACBND_Bits.BOUND */
#define IFX_MCDS_TCZACBND_BOUND_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCZACBND_Bits.BOUND */
#define IFX_MCDS_TCZACBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZACRNG_Bits.RANGE */
#define IFX_MCDS_TCZACRNG_RANGE_LEN (14u)

/** \brief Mask for Ifx_MCDS_TCZACRNG_Bits.RANGE */
#define IFX_MCDS_TCZACRNG_RANGE_MSK (0x3fffu)

/** \brief Offset for Ifx_MCDS_TCZACRNG_Bits.RANGE */
#define IFX_MCDS_TCZACRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.SVM */
#define IFX_MCDS_TCZACMSK_SVM_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.SVM */
#define IFX_MCDS_TCZACMSK_SVM_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.SVM */
#define IFX_MCDS_TCZACMSK_SVM_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.MASTER */
#define IFX_MCDS_TCZACMSK_MASTER_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.MASTER */
#define IFX_MCDS_TCZACMSK_MASTER_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.MASTER */
#define IFX_MCDS_TCZACMSK_MASTER_OFF (1u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCZACMSK_SUBCHANNEL_LEN (7u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCZACMSK_SUBCHANNEL_MSK (0x7fu)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.SUBCHANNEL */
#define IFX_MCDS_TCZACMSK_SUBCHANNEL_OFF (5u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.WR */
#define IFX_MCDS_TCZACMSK_WR_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.WR */
#define IFX_MCDS_TCZACMSK_WR_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.WR */
#define IFX_MCDS_TCZACMSK_WR_OFF (12u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.RD */
#define IFX_MCDS_TCZACMSK_RD_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.RD */
#define IFX_MCDS_TCZACMSK_RD_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.RD */
#define IFX_MCDS_TCZACMSK_RD_OFF (13u)

/** \brief Length for Ifx_MCDS_TCZACMSK_Bits.MSK */
#define IFX_MCDS_TCZACMSK_MSK_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACMSK_Bits.MSK */
#define IFX_MCDS_TCZACMSK_MSK_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACMSK_Bits.MSK */
#define IFX_MCDS_TCZACMSK_MSK_OFF (14u)

/** \brief Length for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCZDTUFLV_CURLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCZDTUFLV_CURLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL0 */
#define IFX_MCDS_TCZDTUFLV_CURLVL0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL0_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL0_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL0 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL0_OFF (4u)

/** \brief Length for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCZDTUFLV_CURLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCZDTUFLV_CURLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZDTUFLV_Bits.CURLVL1 */
#define IFX_MCDS_TCZDTUFLV_CURLVL1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL1_LEN (4u)

/** \brief Mask for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL1_MSK (0xfu)

/** \brief Offset for Ifx_MCDS_TCZDTUFLV_Bits.MAXLVL1 */
#define IFX_MCDS_TCZDTUFLV_MAXLVL1_OFF (12u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ0 */
#define IFX_MCDS_TCZEVT_EIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ0 */
#define IFX_MCDS_TCZEVT_EIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ0 */
#define IFX_MCDS_TCZEVT_EIQ0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ1 */
#define IFX_MCDS_TCZEVT_EIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ1 */
#define IFX_MCDS_TCZEVT_EIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ1 */
#define IFX_MCDS_TCZEVT_EIQ1_OFF (2u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ2 */
#define IFX_MCDS_TCZEVT_EIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ2 */
#define IFX_MCDS_TCZEVT_EIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ2 */
#define IFX_MCDS_TCZEVT_EIQ2_OFF (4u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ3 */
#define IFX_MCDS_TCZEVT_EIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ3 */
#define IFX_MCDS_TCZEVT_EIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ3 */
#define IFX_MCDS_TCZEVT_EIQ3_OFF (6u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ4 */
#define IFX_MCDS_TCZEVT_EIQ4_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ4 */
#define IFX_MCDS_TCZEVT_EIQ4_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ4 */
#define IFX_MCDS_TCZEVT_EIQ4_OFF (8u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ5 */
#define IFX_MCDS_TCZEVT_EIQ5_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ5 */
#define IFX_MCDS_TCZEVT_EIQ5_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ5 */
#define IFX_MCDS_TCZEVT_EIQ5_OFF (10u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ6 */
#define IFX_MCDS_TCZEVT_EIQ6_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ6 */
#define IFX_MCDS_TCZEVT_EIQ6_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ6 */
#define IFX_MCDS_TCZEVT_EIQ6_OFF (12u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ7 */
#define IFX_MCDS_TCZEVT_EIQ7_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ7 */
#define IFX_MCDS_TCZEVT_EIQ7_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ7 */
#define IFX_MCDS_TCZEVT_EIQ7_OFF (14u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ8 */
#define IFX_MCDS_TCZEVT_EIQ8_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ8 */
#define IFX_MCDS_TCZEVT_EIQ8_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ8 */
#define IFX_MCDS_TCZEVT_EIQ8_OFF (16u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ9 */
#define IFX_MCDS_TCZEVT_EIQ9_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ9 */
#define IFX_MCDS_TCZEVT_EIQ9_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ9 */
#define IFX_MCDS_TCZEVT_EIQ9_OFF (18u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ10 */
#define IFX_MCDS_TCZEVT_EIQ10_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ10 */
#define IFX_MCDS_TCZEVT_EIQ10_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ10 */
#define IFX_MCDS_TCZEVT_EIQ10_OFF (20u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ11 */
#define IFX_MCDS_TCZEVT_EIQ11_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ11 */
#define IFX_MCDS_TCZEVT_EIQ11_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ11 */
#define IFX_MCDS_TCZEVT_EIQ11_OFF (22u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ12 */
#define IFX_MCDS_TCZEVT_EIQ12_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ12 */
#define IFX_MCDS_TCZEVT_EIQ12_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ12 */
#define IFX_MCDS_TCZEVT_EIQ12_OFF (24u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ13 */
#define IFX_MCDS_TCZEVT_EIQ13_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ13 */
#define IFX_MCDS_TCZEVT_EIQ13_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ13 */
#define IFX_MCDS_TCZEVT_EIQ13_OFF (26u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ14 */
#define IFX_MCDS_TCZEVT_EIQ14_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ14 */
#define IFX_MCDS_TCZEVT_EIQ14_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ14 */
#define IFX_MCDS_TCZEVT_EIQ14_OFF (28u)

/** \brief Length for Ifx_MCDS_TCZEVT_Bits.EIQ15 */
#define IFX_MCDS_TCZEVT_EIQ15_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZEVT_Bits.EIQ15 */
#define IFX_MCDS_TCZEVT_EIQ15_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZEVT_Bits.EIQ15 */
#define IFX_MCDS_TCZEVT_EIQ15_OFF (30u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIS0 */
#define IFX_MCDS_TCZACT_AIS0_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIS0 */
#define IFX_MCDS_TCZACT_AIS0_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIS0 */
#define IFX_MCDS_TCZACT_AIS0_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIQ0 */
#define IFX_MCDS_TCZACT_AIQ0_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIQ0 */
#define IFX_MCDS_TCZACT_AIQ0_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIQ0 */
#define IFX_MCDS_TCZACT_AIQ0_OFF (5u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.LV0 */
#define IFX_MCDS_TCZACT_LV0_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.LV0 */
#define IFX_MCDS_TCZACT_LV0_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.LV0 */
#define IFX_MCDS_TCZACT_LV0_OFF (7u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIS1 */
#define IFX_MCDS_TCZACT_AIS1_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIS1 */
#define IFX_MCDS_TCZACT_AIS1_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIS1 */
#define IFX_MCDS_TCZACT_AIS1_OFF (8u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIQ1 */
#define IFX_MCDS_TCZACT_AIQ1_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIQ1 */
#define IFX_MCDS_TCZACT_AIQ1_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIQ1 */
#define IFX_MCDS_TCZACT_AIQ1_OFF (13u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.LV1 */
#define IFX_MCDS_TCZACT_LV1_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.LV1 */
#define IFX_MCDS_TCZACT_LV1_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.LV1 */
#define IFX_MCDS_TCZACT_LV1_OFF (15u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIS2 */
#define IFX_MCDS_TCZACT_AIS2_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIS2 */
#define IFX_MCDS_TCZACT_AIS2_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIS2 */
#define IFX_MCDS_TCZACT_AIS2_OFF (16u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIQ2 */
#define IFX_MCDS_TCZACT_AIQ2_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIQ2 */
#define IFX_MCDS_TCZACT_AIQ2_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIQ2 */
#define IFX_MCDS_TCZACT_AIQ2_OFF (21u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.LV2 */
#define IFX_MCDS_TCZACT_LV2_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.LV2 */
#define IFX_MCDS_TCZACT_LV2_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.LV2 */
#define IFX_MCDS_TCZACT_LV2_OFF (23u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIS3 */
#define IFX_MCDS_TCZACT_AIS3_LEN (5u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIS3 */
#define IFX_MCDS_TCZACT_AIS3_MSK (0x1fu)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIS3 */
#define IFX_MCDS_TCZACT_AIS3_OFF (24u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.AIQ3 */
#define IFX_MCDS_TCZACT_AIQ3_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.AIQ3 */
#define IFX_MCDS_TCZACT_AIQ3_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.AIQ3 */
#define IFX_MCDS_TCZACT_AIQ3_OFF (29u)

/** \brief Length for Ifx_MCDS_TCZACT_Bits.LV3 */
#define IFX_MCDS_TCZACT_LV3_LEN (1u)

/** \brief Mask for Ifx_MCDS_TCZACT_Bits.LV3 */
#define IFX_MCDS_TCZACT_LV3_MSK (0x1u)

/** \brief Offset for Ifx_MCDS_TCZACT_Bits.LV3 */
#define IFX_MCDS_TCZACT_LV3_OFF (31u)

/** \brief Length for Ifx_MCDS_TCZIDBND_Bits.BOUND */
#define IFX_MCDS_TCZIDBND_BOUND_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCZIDBND_Bits.BOUND */
#define IFX_MCDS_TCZIDBND_BOUND_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCZIDBND_Bits.BOUND */
#define IFX_MCDS_TCZIDBND_BOUND_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZIDRNG_Bits.RANGE */
#define IFX_MCDS_TCZIDRNG_RANGE_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCZIDRNG_Bits.RANGE */
#define IFX_MCDS_TCZIDRNG_RANGE_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCZIDRNG_Bits.RANGE */
#define IFX_MCDS_TCZIDRNG_RANGE_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZIDMSK_Bits.MASK */
#define IFX_MCDS_TCZIDMSK_MASK_LEN (3u)

/** \brief Mask for Ifx_MCDS_TCZIDMSK_Bits.MASK */
#define IFX_MCDS_TCZIDMSK_MASK_MSK (0x7u)

/** \brief Offset for Ifx_MCDS_TCZIDMSK_Bits.MASK */
#define IFX_MCDS_TCZIDMSK_MASK_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZIDSGN_Bits.SIGN */
#define IFX_MCDS_TCZIDSGN_SIGN_LEN (2u)

/** \brief Mask for Ifx_MCDS_TCZIDSGN_Bits.SIGN */
#define IFX_MCDS_TCZIDSGN_SIGN_MSK (0x3u)

/** \brief Offset for Ifx_MCDS_TCZIDSGN_Bits.SIGN */
#define IFX_MCDS_TCZIDSGN_SIGN_OFF (0u)

/** \brief Length for Ifx_MCDS_TCZIPBND_Bits.BOUND */
#define IFX_MCDS_TCZIPBND_BOUND_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCZIPBND_Bits.BOUND */
#define IFX_MCDS_TCZIPBND_BOUND_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCZIPBND_Bits.BOUND */
#define IFX_MCDS_TCZIPBND_BOUND_OFF (1u)

/** \brief Length for Ifx_MCDS_TCZIPRNG_Bits.RANGE */
#define IFX_MCDS_TCZIPRNG_RANGE_LEN (31u)

/** \brief Mask for Ifx_MCDS_TCZIPRNG_Bits.RANGE */
#define IFX_MCDS_TCZIPRNG_RANGE_MSK (0x7fffffffu)

/** \brief Offset for Ifx_MCDS_TCZIPRNG_Bits.RANGE */
#define IFX_MCDS_TCZIPRNG_RANGE_OFF (1u)

/** \}  */

/******************************************************************************/

/******************************************************************************/

#endif /* IFXMCDS_BF_H */
