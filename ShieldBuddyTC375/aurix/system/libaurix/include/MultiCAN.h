/* Improved version by sinai1 */
/*



Improvements:

-Change from 16 MsgObj_Id to 64 MsgObj_Id

-Reduced the waiting time for CAN_Receive functions

-Added waiting time for CAN_SendMessage functions Without this, the program stops when nothing is connected.

-Change CAN0_SendMessage data from 2 uint32 to 1 CANMessagePayloadType Message, this helps to use the same variables for TX and RX

old function:

void CAN0_SendMessage_dword (uint32 CAN_Id, uint32 Lowdata, uint32 Highdata, uint8 dlc)


new function:

int CAN0_SendMessage (uint32 CAN_Id, CANMessagePayloadType * msg1, uint8 dlc)

*/

#ifndef MULTICAN_H
#define MULTICAN_H 1

#include "IfxCan_Reg.h"

/* Based on Fig3 on page 11 of AP32363 application note */
#define RAM_WORD_SIZE        	(2u)  /* 2 bytes per word? Not clear from diagram */
#define TRIGGER_RAM_SIZE     	(128u * RAM_WORD_SIZE)
#define TXBUFFERS_RAM_SIZE		(576u * RAM_WORD_SIZE)
#define TXEVENTFIFO_RAM_SIZE	(64u * RAM_WORD_SIZE)
#define RXBUFFER_RAM_SIZE		(1152u * RAM_WORD_SIZE)
#define RXFIFO1_RAM_SIZE		(1152u * RAM_WORD_SIZE)
#define RXFIFO0_RAM_SIZE		(1152u * RAM_WORD_SIZE)
#define FILTER29BIT_RAM_SIZE	(128u * RAM_WORD_SIZE)
#define FILTER11BIT_RAM_SIZE	(128u * RAM_WORD_SIZE)

#define TXBUFFERS_STARTADDRESS  	TRIGGER_RAM_SIZE
#define RXBUFFER_STARTADDRESS  		TRIGGER_RAM_SIZE + TXBUFFERS_RAM_SIZE + TXEVENTFIFO_RAM_SIZE
#define RXFIFO1_STARTADDRESS  		RXBUFFER_STARTADDRESS + RXBUFFER_RAM_SIZE
#define RXFIFO0_STARTADDRESS  		RXFIFO1_STARTADDRESS + RXFIFO1_RAM_SIZE
#define FILTER29BIT_STARTADDRESS  	RXFIFO0_STARTADDRESS + RXFIFO0_RAM_SIZE
#define FILTER11BIT_STARTADDRESS  	FILTER29BIT_STARTADDRESS + FILTER29BIT_RAM_SIZE

#define NODE0_RAM_OFFSET 0x0
#define NODE1_RAM_OFFSET 0x1000

#define NOT_USED   (IfxCan_RxBufferId) 0

/* CAN Modules */
#define DEFAULT_CAN_P202   0  /* On-Board CAN Transceiver (DEFAULT_CAN_P202) is on CAN1.0 */
#define CAN1_P406_23_22    1  /* HCC CAN Transceiver is on CAN0.1, RX P14.1 J406 pin23, TX P14.0 J406 pin22 */
#define CAN3_DAC0_PIN53    2  /* HCC CAN Transceiver is on CAN0.3, RX P20.9 DAC0, TX P20.10 J406 pin53      */
#define CAN0_CANRX_CANTX   3  /* Arduino CANRX, CANTX. P20.7 pin CANRX, TX P20.8 pin CANTX */

/* CAN Nodes: ShieldBuddy node numbers */
#define ONBOARD_CAN        0  /* On-board CAN */
#define CAN0			   1  /* J405 P20.7 pin CANRX, J405 P20.8 pin CANTX */
#define CAN1			   2  /* P14.1 RX P14.1 J406 pin23 P14.0 J406 pin22 */
#define CAN3			   3  /* RX P20.9 J405 DAC0, P20.10 J406 pin53 */
#define CAN3A			   4  /* J406 pin10 P00.2, J406 pin12 P00.3 */

/*
CAN0 RX P20.7 pin CANRX
CAN0 TX P20.8 pin CANTX
CAN1 RX P14.1 J406 pin23
CAN1 TX P14.0 J406 pin22
CAN3 RX P20.9 J405 DAC0
CAN3 TX P20.10 J406 pin53
*/


/* How many concurrent RX objects */
#define REQUIREDNUMBEROFRXFILTERS	32u
#define MAX_NUMBEROFRXFILTERS		128u  /* TC375 */

#if REQUIREDNUMBEROFRXFILTERS > MAX_NUMBEROFRXFILTERS
#error Too Many RX Filters Requested For TC375
#endif

/* How many concurrent TX objects */
#define REQUIREDNUMBEROFTXOBJECTS	8u
#define MAX_NUMBEROFTXOBJECTS		32u  /* TC375 */

#if REQUIREDNUMBEROFTXOBJECTS > MAX_NUMBEROFTXOBJECTS
#error Too Many TX Objects Requested For TC375
#endif

typedef enum
{
	IfxCan_dedicatedBuffers,  /**< \brief Rx dedicated buffers operation */
	IfxCan_fifo0,             /**< \brief Rx FIFO 0 operation */
	IfxCan_fifo1,             /**< \brief Rx FIFO 1 operation */
} IfxCan_MsgMode;

typedef enum { CANStructuresNotInitialised, CANStructuresInitialised } CAN_InitialisedType;


typedef enum { NoNewData, NewDataReceived }  NewDataType;
typedef union { uint8 bytes[8]; uint32 dword[2]; } CANMessagePayloadType;

typedef struct
{

	IfxCan_Message ReceivedMessage;
	CANMessagePayloadType Payload;
	uint8 FillLevel;
	NewDataType NewData;

} CanRxMessageObjectType;

typedef struct
{

	IfxCan_Message UserCanTxMessages[REQUIREDNUMBEROFTXOBJECTS]; /**< \brief CAN Destination Message object */
    IfxCan_Filter RxFilters[REQUIREDNUMBEROFRXFILTERS];
    CanRxMessageObjectType CanRxMessageObject[REQUIREDNUMBEROFRXFILTERS];
    boolean InterruptProcessed;
    CAN_InitialisedType CAN_Initialised;

} CanDataType;

/** CAN information */
typedef struct
{
	IfxCan_Can can[4];             /**< \brief CAN handle */
	IfxCan_Can_Node canNode[4];    /**< \brief CAN Node handles */
    IfxCan_Message UserCanTxMessages[REQUIREDNUMBEROFTXOBJECTS]; /**< \brief CAN Destination Message object */
    IfxCan_Filter RxFilters[REQUIREDNUMBEROFRXFILTERS];
    CanRxMessageObjectType CanRxMessageObject[REQUIREDNUMBEROFRXFILTERS];
    uint32 UserCanTxIds[REQUIREDNUMBEROFTXOBJECTS];
    uint32 UserCanRxIds[REQUIREDNUMBEROFRXFILTERS];
    boolean InterruptProcessed;
    CAN_InitialisedType CAN_Initialised;

} App_Can;


extern App_Can g_App_Can;

extern void CAN_Init(uint32 Baudrate);
extern void CAN_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern void CAN_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern IfxCan_Status CAN_ReceiveMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern int CAN_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);

extern void CAN1_Init(uint32 Baudrate);
extern void CAN1_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern void CAN1_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern IfxCan_Status CAN1_ReceiveMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern int CAN1_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);

extern void CAN3_Init(uint32 Baudrate);
extern void CAN3A_Init(uint32 Baudrate);
extern void CAN3_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern void CAN3_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern IfxCan_Status CAN3_ReceiveMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern int CAN3_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);

extern void CAN0_Init(uint32 Baudrate);
extern void CAN0_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern void CAN0_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, uint8 MsgObj_Id);
extern IfxCan_Status CAN0_ReceiveMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern int CAN0_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);

#endif
