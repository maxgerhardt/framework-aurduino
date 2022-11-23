/**
 * \file IfxGeth_cfg.h
 * \brief GETH on-chip implementation data
 * \ingroup IfxLld_Geth
 *
 * \version iLLD_1_0_1_7_0
 * \copyright Copyright (c) 2018 Infineon Technologies AG. All rights reserved.
 *
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
 *
 * Implementation layer
 *
 * \defgroup IfxLld_Geth GETH
 * \ingroup IfxLld
 * \defgroup IfxLld_Geth_Impl Implementation
 * \ingroup IfxLld_Geth
 * \defgroup IfxLld_Geth_Std Standard Driver
 * \ingroup IfxLld_Geth
 */

#ifndef IFXGETH_CFG_H
#define IFXGETH_CFG_H 1

/******************************************************************************/
/*----------------------------------Includes----------------------------------*/
/******************************************************************************/

/******************************************************************************/
/*-----------------------------------Macros-----------------------------------*/
/******************************************************************************/

/** \brief Number of Tx queues in MTL block
 */
#define IFXGETH_NUM_TX_QUEUES     (4)

/** \brief Number of Rx queues in MTL block
 */
#define IFXGETH_NUM_RX_QUEUES     (4)

/** \brief Number of
 */
#define IFXGETH_NUM_MODULES       (2)

/** \brief Number of Tx DMA channels of DMA
 */
#define IFXGETH_NUM_TX_CHANNELS   (4)

/** \brief Number of Rx Channels of DMA
 */
#define IFXGETH_NUM_RX_CHANNELS   (4)

/** \brief Maximum timeout value to wait against at
 */
#define IFXGETH_MAX_TIMEOUT_VALUE (1000)

/** \brief Number of DMA channels
 */
#define IFXGETH_NUM_DMA_CHANNELS  (4)

#endif /* IFXGETH_CFG_H */
