

#ifndef _AURIXLITETC275_H
#define _AURIXLITETC275_H

/* Convert AurixLite X1 pins into ShielBuddy & Arduino-style pin numbers */
#define X1_3   (77u)
#define X1_4   (80u)
#define X1_5   (81u)
#define X1_6   (82u)
#define X1_7   (66u)
#define X1_8   (83u)
#define X1_9   (70u)
#define X1_10  (67u)
#define X1_11  (74u)
#define X1_12  (75u)
#define X1_13  (61u)
#define X1_14  (63u)
#define X1_15  (49u)
#define X1_16  (73u)
#define X1_17  (50u)
#define X1_18  (62u)
#define X1_19  (84u)
#define X1_20  (48u)
#define X1_21  (60u)
#define X1_22  (85u)
#define X1_23  (18u) 	// SB TXD2
#define X1_24  (86u)
#define X1_25  (19u) 	// SB RXD2
// #define X1_26  (00u)  // ESR1
// #define X1_27  (00u)  // ESR0
#define X1_28  (87u)
#define X1_29  (20u)  	// SB SDA0
// #define X1_30  (00u)  // PORST#
#define X1_31  (21u)	// SB SCL0
#define X1_32  (88u)
#define X1_33  (43u)
#define X1_34  (42u)
#define X1_35  (41u)
#define X1_36  (47u)
#define X1_37  (46u)
#define X1_38  (45u)

/* X1 SPI */
#define X1_SS	X1_16    // P22.2, AD9, D73
#define X1_MTSR	X1_14    // P22.0
#define X1_MDIO	X1_20    // P21.3
#define X1_SCLK	X1_18    // P22.3

/* X2 Definitions */
#define X2_3   (25u)
#define X2_4   (27u)
#define X2_5   (29u)
#define X2_6   (31u)
#define X2_7   (37u)
#define X2_8   (35u)
#define X2_9   (26u)
#define X2_10  (39u)
#define X2_11  (30u)
#define X2_12  (28u)
#define X2_13  (34u)
#define X2_14  (32u)

#define X2_28  (40u)
#define X2_29  (38u)
#define X2_30  (36u)
#define X2_31  (44u)
#define X2_32  (89u)
#define X2_33  (90u)
#define X2_34  (72u)
#define X2_35  (91u)
#define X2_36  (17u)  // SB RXD1, Serial1.begin()
#define X2_37  (16u)  // SB TXD1, Serial1.begin()
#define X2_38  (76u)

/* X2 Analogs */
#define X2_AN0	(8u)  /* Maps to SB AD8 */
#define POTENTIOMETER  X2_AN0
#define X2_AN1	(9u)
#define X2_AN2	(10u)
#define X2_AN3	(11u)

#define X2_AN4	(22u)
#define X2_AN5	(23u)
#define X2_AN6	(24u)
#define X2_AN7	(25u)

#define X2_AN44	(12u)  /* Maps to SB AD12 */
#define X2_AN45	(13u)
#define X2_AN46	(14u)
#define X2_AN47	(15u)

/* Mikrobus */
/* Analog */
#define AN26_MB (16u)
#define PWM_MB	(96u) // P2.8 TOUT8
#define INT_MB  (57u) // P10.7  ERU ERS0.2
#define SS_MB   (56u) // P10.0  AD4
#define RXD0_MB	(15u) // P15.1  Serial0 Rx
#define TXD0_MB	(14u) // P15.0	Serial0 Tx
#define SCL0 	(55u) // P13.1  SCL1 55
#define SDA0    (54u) // P13.2  SDA1 54
#define RST_MB	(97u) // P10.6


/* Shield To Go */
/* Analogs      */
#define AN1_S2G1 (17u)
#define AN2_S2G1 (18u)
#define AN1_S2G2 (19u)
#define AN2_S2G2 (20u)

/* Interrupts */
#define INT_S2G1  (33u)  // ERU
#define INT_S2G2  (52u)  // ERU

#define PWM_S2G1  (92u) // P20.12 Not available (CIC61508).  Define new PWM channel and pin TOUT68
#define PWM_S2G2  (93u) // P20.13 Not available (CIC61508)   Define new PWM channel and pin TOUT69

#define CS_S2G1   (X1_38) // P11.2
#define CS_S2G2   (X1_34) // P11.10

#define GPIO1_S2G1  (94u) // P32.2   // ASC3 RX.  Define new pin for AurixLite
#define GPIO1_S2G2	(95u) // P32.3   // AD0 dual use pin

#define SerialS2G1 Serial1
#define SerialS2G2 Serial
#define Serial_MB Serial0

/* CAN Interface */
/* Map to CAN0 P207 P20.8 */
#define CAN_Init CAN0_Init
#define CAN_TxInit CAN0_TxInit
#define CAN_RxInit CAN0_RxInit
#define CAN_SendMessage  CAN0_SendMessage
#define CAN_SendMessage_dword CAN0_SendMessage_dword

/* Button */
#define BUTTON1 		(39u)

/* LEDs */
#define AURIXLITE_LED0	(35u)
#define AURIXLITE_LED1	(37u)

#endif /* _AURIXLITETC275_H */
