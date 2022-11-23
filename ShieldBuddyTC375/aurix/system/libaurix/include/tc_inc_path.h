/*====================================================================
* Project:  Board Support Package (BSP)
* Function: macros for handling different AURIX 2G devices and boards
*
* Copyright HighTec EDV-Systeme GmbH 1982-2019
*====================================================================*/

#ifndef __TC_INC_PATH_H__
#define __TC_INC_PATH_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(__TC37XX__)
# if defined(TRIBOARD_TC37XA)
#  define TCPATH	tc37xa
# else
#  error "Unknown TC37x board"
# endif /* TRIBOARD_TC37XA */
#else
# error "Unsupported AURIX 2G device"
#endif /* __TC37XX__ */

#define TC_STR(s)		# s
#define TC_INCLUDE(f)	TC_STR(f)

/* check for application kits (there are currently no such kits) */
#define RUN_ON_APPKIT	0

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __TC_INC_PATH_H__ */
