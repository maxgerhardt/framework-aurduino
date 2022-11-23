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

#define CAN0_TxMsgObject   0  /* Object numbers must be unique */
#define CAN1_TxMsgObject   1
#define CAN3_TxMsgObject   2
#define CAN0_RxMsgObject   3
#define CAN1_RxMsgObject   4
#define CAN3_RxMsgObject   5

enum {
      MsgObject0, MsgObject1, MsgObject2, MsgObject3, MsgObject4, MsgObject5, MsgObject6, MsgObject7,
      MsgObject8, MsgObject9, MsgObject10, MsgObject11, MsgObject12, MsgObject13, MsgObject14, MsgObject15,
      MsgObject16, MsgObject17, MsgObject18, MsgObject19, MsgObject20, MsgObject21, MsgObject22, MsgObject23,
      MsgObject24, MsgObject25, MsgObject26, MsgObject27, MsgObject28, MsgObject29, MsgObject30, MsgObject31,
      MsgObject32, MsgObject33, MsgObject34, MsgObject35, MsgObject36, MsgObject37, MsgObject38, MsgObject39,
      MsgObject40, MsgObject41, MsgObject42, MsgObject43, MsgObject44, MsgObject45, MsgObject46, MsgObject47,
      MsgObject48, MsgObject49, MsgObject50, MsgObject51, MsgObject52, MsgObject53, MsgObject54, MsgObject55,
      MsgObject56, MsgObject57, MsgObject58, MsgObject59, MsgObject60, MsgObject61, MsgObject62, MsgObject63,
      NO_OFAVAILABLECANMESSAGESLOTS};

typedef union { uint8 bytes[8]; uint32 dword[2]; } CANMessagePayloadType;

/** CAN information */
typedef struct
{
    struct
    {
        IfxMultican_Can        can;          /**< \brief CAN driver handle */
        IfxMultican_Can_Node   canNode0;   /**< \brief CAN Node 0 */
        IfxMultican_Can_Node   canNode1;   /**< \brief CAN Node 1 */
        IfxMultican_Can_Node   canNode3;   /**< \brief CAN Node 3 */
        IfxMultican_Can_MsgObj UserCanMessages[NO_OFAVAILABLECANMESSAGESLOTS]; /**< \brief CAN Destination Message object */
        uint32 UserCanTxIds[NO_OFAVAILABLECANMESSAGESLOTS];
        uint32 UserCanRxIds[NO_OFAVAILABLECANMESSAGESLOTS];

    }drivers;
} App_MulticanBasic;


extern App_MulticanBasic g_MulticanBasic;

extern void CAN0_Init(uint32 Baudrate);
extern void CAN0_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN0_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN0_SendMessage_dword(uint32 CAN_Id, uint32 Lowdata, uint32 Highdata, uint8 dlc);
extern int CAN0_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern IfxMultican_Status CAN0_ReceiveMessage(uint32 CAN_Id, IfxMultican_Message *msg1, uint8 dlc);

extern void CAN1_Init(uint32 Baudrate);
extern void CAN1A_Init(uint32 Baudrate);
extern void CAN1_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN1_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN1_SendMessage_dword(uint32 CAN_Id, uint32 Lowdata, uint32 Highdata, uint8 dlc);
extern int CAN1_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern IfxMultican_Status CAN1_ReceiveMessage(uint32 CAN_Id, IfxMultican_Message *msg1, uint8 dlc);

extern void CAN3A_Init(uint32 Baudrate);
extern void CAN3_Init(uint32 Baudrate);
extern void CAN3_RxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN3_TxInit(uint32 CAN_Id, uint32 AcceptanceMask, uint8 dlc, uint32 ExtFrame, IfxMultican_MsgObjId MsgObj_Id);
extern void CAN3_SendMessage_dword(uint32 CAN_Id, uint32 Lowdata, uint32 Highdata, uint8 dlc);
extern int CAN3_SendMessage(uint32 CAN_Id, CANMessagePayloadType *msg1, uint8 dlc);
extern IfxMultican_Status CAN3_ReceiveMessage(uint32 CAN_Id, IfxMultican_Message *msg1, uint8 dlc);

#endif
