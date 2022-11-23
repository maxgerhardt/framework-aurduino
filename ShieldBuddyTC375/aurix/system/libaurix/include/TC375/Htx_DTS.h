/**
 \verbatim
 ******************************************************************************
 * Copyright (c) Hitex (UK) Ltd., all rights reserved.
 ******************************************************************************
 * This source code and any compilation or derivative thereof is the sole
 * property of Hitex (UK) Ltd. and is provided pursuant to a
 * Software License  Agreement. This code is the proprietary information of
 * Hitex (UK) Ltd. and is confidential in nature. Its use and
 * dissemination by any other party other than Hitex (UK) Ltd.
 * is strictly limited by the confidential information provisions of the
 * Agreement referenced above.
 ******************************************************************************
 \endverbatim
 ******************************************************************************
 ******************************************************************************
 *  Project     4296 Die Temperature Sensor Driver
 * \file        Htx_DTS.h
 * \brief       Header file for Htx_DTS driver
 * \details     DTS Driver
 * \author      Hitex (UK) Ltd
 * \date        \$LastChangedDate:: 2#$
 * \version     \$Revision: 14697 $
 * \attention   -
 ******************************************************************************
 */
#ifndef HTX_DTS_H
#define HTX_DTS_H


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


#include "Htx_DTS_Cfg.h"

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

/*
 ******************************************************************************
 * Routine prototypes
 ******************************************************************************
 */

extern uint8 Htx_DTS_Init(void);
extern uint8 Htx_DTS_ReadMeasurementResult(float * DTS_Result);

#endif /* HTX_DTS_H */


/* EOF */
/* Template version:    4.0         */
/* Template status:     RELEASED    */
