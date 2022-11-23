/*
  HardwareSerial.cpp - Hardware serial library for Wiring
  Copyright (c) 2006 Nicholas Zambetti.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
  
  Modified 23 November 2006 by David A. Mellis
  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>
#include "Arduino.h"

#include "HardwareSerial.h"



void serialEventRun(void)
{

}

#ifndef  _AURIXLITE_
/* SerialASC */
const IfxAsclin_Asc_Pins Asc3pins = {
    NULL_PTR,                           IfxPort_InputMode_pullUp,    // CTS pin not used
    &IfxAsclin3_RXD_P32_2_IN,   IfxPort_InputMode_pullUp,   // Rx pin
    NULL_PTR,                          IfxPort_OutputMode_pushPull, // RTS pin not used
    &IfxAsclin3_TX_P15_7_OUT,   IfxPort_OutputMode_pushPull, // Tx pin
    IfxPort_PadDriver_cmosAutomotiveSpeed1
};
#else
/* Serial */
const IfxAsclin_Asc_Pins Asc3pins = {
    NULL_PTR,                           IfxPort_InputMode_pullUp,    // CTS pin not used
    &IfxAsclin3_RXC_P20_3_IN,   IfxPort_InputMode_pullUp,   // Rx pin
    NULL_PTR,                          IfxPort_OutputMode_pushPull, // RTS pin not used
    &IfxAsclin3_TX_P20_0_OUT,   IfxPort_OutputMode_pushPull, // Tx pin
    IfxPort_PadDriver_cmosAutomotiveSpeed1
};
#endif

/* Serial RxTx */
const IfxAsclin_Asc_Pins Asc0pins = {
    NULL_PTR,                           IfxPort_InputMode_pullUp,    // CTS pin not used
    &IfxAsclin0_RXA_P14_1_IN,   IfxPort_InputMode_pullUp,   // Rx pin
    NULL_PTR,                          IfxPort_OutputMode_pushPull, // RTS pin not used
    &IfxAsclin0_TX_P14_0_OUT,   IfxPort_OutputMode_pushPull, // Tx pin
    IfxPort_PadDriver_ttlSpeed4
};


/* Serial Rx0/Tx0 */
const IfxAsclin_Asc_Pins Asc1pins = {
    NULL_PTR,                           IfxPort_InputMode_pullUp,    // CTS pin not used
    &IfxAsclin1_RXA_P15_1_IN,   IfxPort_InputMode_pullUp,   // Rx pin
    NULL_PTR,                          IfxPort_OutputMode_pushPull, // RTS pin not used
    &IfxAsclin1_TX_P15_0_OUT,   IfxPort_OutputMode_pushPull, // Tx pin
    IfxPort_PadDriver_cmosAutomotiveSpeed1
};



/* Serial Rx1/Tx1 */
const IfxAsclin_Asc_Pins Asc2pins = {
    NULL_PTR,                           IfxPort_InputMode_pullUp,    // CTS pin not used
    &IfxAsclin2_RXE_P33_8_IN,   IfxPort_InputMode_pullUp,   // Rx pin
    NULL_PTR,                          IfxPort_OutputMode_pushPull, // RTS pin not used
    &IfxAsclin2_TX_P33_9_OUT,   IfxPort_OutputMode_pushPull, // Tx pin
    IfxPort_PadDriver_cmosAutomotiveSpeed1
};



/* LMU uninitialised data */
StartOfInitialised_LMURam_Variables

EndOfInitialised_LMURam_Variables

// Actual interrupt handlers //////////////////////////////////////////////////////////////

void asc3linTxISR(int i)
{

	/* Call Handler */
	//SerialASC.TxIsrHandler();
	Serial.TxIsrHandler();
}

void asc3linRxISR(int i)
{

	/* Call Handler */
	//SerialASC.RxIsrHandler();
	Serial.RxIsrHandler();

}

void asc0linTxISR(int i)
{

	/* Call Handler */
	SerialASC.TxIsrHandler();
	//Serial.TxIsrHandler();
}

void asc0linRxISR(int i)
{

	/* Call Handler */
	//Serial.RxIsrHandler();
	SerialASC.RxIsrHandler();
}

void asc1linTxISR(int i)
{

	/* Call Handler */
	Serial0.TxIsrHandler();
}

void asc1linRxISR(int i)
{

	/* Call Handler */
	Serial0.RxIsrHandler();

}

void asc2linTxISR(int i)
{

	/* Call Handler */
	Serial1.TxIsrHandler();
}

void asc2linRxISR(int i)
{

	/* Call Handler */
	Serial1.RxIsrHandler();

}

// Public Methods //////////////////////////////////////////////////////////////


/* Constructor */
HardwareSerial::HardwareSerial()
{

}

void HardwareSerial::TxIsrHandler(void)
{

	ASCLIN_base->FLAGSCLEAR.U = 0;

	/* Create circular buffer */
	TxDataOut &= (ASC_BUFFERSIZE - 1);
	/* Create circular buffer */
	TxDataIn &= (ASC_BUFFERSIZE - 1);

	/* Is there anything to send? */
	if(TxDataOut != TxDataIn)
	{

		/* send the character & create next interrupt */
		ASCLIN_base->TXDATA.U = ASC_txchar[TxDataOut++];

		TxBufferReady = 0x00;

	}
	else
	{

		TxBufferReady = 0x01;

	}

}


void HardwareSerial::RxIsrHandler(void)
{

	/* Capture last character received (for peek() function */
	LastRxDataIn = RxDataIn;

	/* Tell read function that there is data in the RX buffer */
	ASC_rxchar[RxDataIn++] = ASCLIN_base->RXDATA.U;
	/* Create circular buffer */
	RxDataIn &= (ASC_BUFFERSIZE - 1);

	ASCLIN_base->FLAGSCLEAR.U = 0;

	RxDataReady = 1;

}

void HardwareSerial::ConfigureSerialChannel(Ifx_ASCLIN *ASCLINbase)
{

    IfxAsclin_Asc_Pins pins;
	Ifx_P *PortModule;
	uint8 PinNo;
	uint16 endinitPw;

	/* Update classes ASCLIN_base base */
	ASCLIN_base = ASCLINbase;

}



void HardwareSerial::begin(unsigned long baud, byte config)
{

    IfxAsclin_Asc_Pins pins;
	Ifx_P *PortModule;
	uint8 PinNo;
	unsigned int numerator;
	unsigned int denominator;
	uint16 endinitPw;
	uint8 StopBits;
	uint8 ParityEnable;
	uint8 ParitySense;
	uint8 DataLen;

	StopBits = (config & (STOPBITS1 | STOPBITS2));
	StopBits >>= 4u;
	ParityEnable = (config & PARITYENABLE) >> 7u;
	ParitySense = (config & PARITYODD) >> 6u;
	DataLen = config & 0x0Fu;

	/* Enable ASCn */
	endinitPw = IfxScuWdt_getCpuWatchdogPassword ();
	IfxScuWdt_clearCpuEndinit (endinitPw);
	ASCLIN_base->CLC.U = 0;
	IfxScuWdt_setCpuEndinit (endinitPw);
	/* read back to activate module */
	(void)ASCLIN_base->CLC.U;

	if(ASCLIN_base == &MODULE_ASCLIN3)
	{
		/* This is the SerialASC on ASC3 */

		/* Setup interrupts */
		/* install handlers for transmit and receive interrupts */
		InterruptInstall(SRC_ID_ASCLIN3TX, asc3linTxISR, IFX_INTPRIO_ASCLIN3_TX, 0);
		InterruptInstall(SRC_ID_ASCLIN3RX, asc3linRxISR, IFX_INTPRIO_ASCLIN3_RX, 0);

		/* Set interrupt SRC */
		ASC_SRC_ID = SRC_ID_ASCLIN3TX;

		/* Setup Pins */

		/* Manually set pad driver to speed grade 1 (otherwise 3v3 is not seen as a '1' ) */
		PortModule = &MODULE_P32;
		PinNo = 2u;
		pins = Asc3pins;
	}

	if(ASCLIN_base == &MODULE_ASCLIN0)
	{
		/* This is the SerialRxTx on ASC0 */

		/* Setup interrupts */
		/* install handlers for transmit and receive interrupts */
		InterruptInstall(SRC_ID_ASCLIN0TX, asc0linTxISR, IFX_INTPRIO_ASCLIN0_TX, 0);
		InterruptInstall(SRC_ID_ASCLIN0RX, asc0linRxISR, IFX_INTPRIO_ASCLIN0_RX, 0);

		/* Set interrupt SRC */
		ASC_SRC_ID = SRC_ID_ASCLIN0TX;

		/* Setup Pins */

		/* Manually set pad driver to speed grade 1 (otherwise 3v3 is not seen as a '1' ) */
		PortModule = &MODULE_P14;
		PinNo = 3u;
		pins = Asc0pins;
	}

	if(ASCLIN_base == &MODULE_ASCLIN1)
	{
		/* This is the Serial0 Rx0/Tx0 on ASC1 */

		/* Setup interrupts */
		/* install handlers for transmit and receive interrupts */
		InterruptInstall(SRC_ID_ASCLIN1TX, asc1linTxISR, IFX_INTPRIO_ASCLIN1_TX, 0);
		InterruptInstall(SRC_ID_ASCLIN1RX, asc1linRxISR, IFX_INTPRIO_ASCLIN1_RX, 0);

		/* Set interrupt SRC */
		ASC_SRC_ID = SRC_ID_ASCLIN1TX;

		/* Setup Pins */

		/* Manually set pad driver to speed grade 1 (otherwise 3v3 is not seen as a '1' ) */
		PortModule = &MODULE_P15;
		PinNo = 1u;
		pins = Asc1pins;
	}

	if(ASCLIN_base == &MODULE_ASCLIN2)
	{
		/* This is the Serial Rx1/Tx1 on ASC2 */

		/* Setup interrupts */
		/* install handlers for transmit and receive interrupts */
		InterruptInstall(SRC_ID_ASCLIN2TX, asc2linTxISR, IFX_INTPRIO_ASCLIN2_TX, 0);
		InterruptInstall(SRC_ID_ASCLIN2RX, asc2linRxISR, IFX_INTPRIO_ASCLIN2_RX, 0);

		/* Set interrupt SRC */
		ASC_SRC_ID = SRC_ID_ASCLIN2TX;

		/* Setup Pins */

		/* Manually set pad driver to speed grade 1 (otherwise 3v3 is not seen as a '1' ) */
		PortModule = &MODULE_P33;
		PinNo = 8u;
		pins = Asc2pins;
	}


	/* Generic Section */
	/* Setup pins */
	IfxAsclin_Cts_In *cts = pins.cts;

	if (cts != NULL_PTR)
	{
	    IfxAsclin_initCtsPin(cts, pins.ctsMode);
	}

	IfxAsclin_Rx_In *rx = pins.rx;

	if (rx != NULL_PTR)
	{
	    IfxAsclin_initRxPin(rx, pins.rxMode);
	}

	IfxAsclin_Rts_Out *rts = pins.rts;

	if (rts != NULL_PTR)
	{
	   IfxAsclin_initRtsPin(rts, pins.rtsMode, pins.pinDriver);
	}

	IfxAsclin_Tx_Out *tx = pins.tx;

	if (tx != NULL_PTR)
	{
	    IfxAsclin_initTxPin(tx, pins.txMode, pins.pinDriver);
	}


	/* Manually set pad driver to speed grade 1 (otherwise 3v3 is not seen as a '1' ) */
	IfxPort_setPinPadDriver(PortModule, PinNo, IfxPort_PadDriver_cmosAutomotiveSpeed1) ;  // Pad driver may need tuning MJB


	/* Program ASC3 */
	ASCLIN_base->CSR.U = 0;

	/* configure TX and RX FIFOs */
	ASCLIN_base->TXFIFOCON.U = (1 << 6)	/* INW: (1 == 1 byte) */
						  | (1 << 1)	/* ENO */
						  | (1 << 0);	/* FLUSH */
	ASCLIN_base->RXFIFOCON.U = (1 << 6)	/* OUTW: (1 == 1 byte) */
						  | (1 << 1)	/* ENI */
						  | (1 << 0);	/* FLUSH */

	/* Default config */
	ASCLIN_base->BITCON.U = ( 9 << 0)		/* PRESCALER: 10 */
					   | (15 << 16)		/* OVERSAMPLING: 16 */
					   | ( 9 << 24)		/* SAMPLEPOINT: position 7,8,9 */
					   | (1u << 31);	/* SM: 3 samples per bit */

	/* data format: 8N1 */
	//ASCLIN_base->FRAMECON.U = (1 << 9)		/* STOP: 1 bit */
	//					 | (0 << 16)	/* MODE: Init */
		//				 | (0 << 30);	/* PEN: no parity */

	//ASCLIN_base->DATCON.U = (7 << 0);		/* DATLEN: 8 bit */

	ASCLIN_base->FRAMECON.U = 0;
	ASCLIN_base->FRAMECON.B.STOP = StopBits;
	ASCLIN_base->FRAMECON.B.PEN = ParityEnable;
	ASCLIN_base->FRAMECON.B.ODD = ParitySense;
	ASCLIN_base->DATCON.U = 0;
	ASCLIN_base->DATCON.B.DATLEN = DataLen - 1u;

	if(baud <= 256000u)
	{
		/* Low speed for normal PC Comms */
		ASCLIN_base->BITCON.B.OVERSAMPLING = HTX_ASCLIN_OVERSAMPLE_LOW_SPEED;	    /* Over-sampling = 16 */
		ASCLIN_base->BITCON.B.PRESCALER   = HTX_ASCLIN_PRESCALER_LOW_SPEED;		/* PRESCALER = 10 */
		denominator = HTX_ASCLIN_DENOMINATOR_LOW_SPEED;

		/* NUMERATOR */
		numerator = ((uint32)baud * (uint32)HTX_ASCLIN_DENOMINATOR_LOW_SPEED) / (uint32)HTX_ASCLIN_DIVISOR_LOW_SPEED;
		ASCLIN_base->BITCON.B.SAMPLEPOINT = HTX_ASCLIN_SAMPLE_POINT_LOW_SPEED;
	}
	else
	{
		/* High speed for specialist ECU-ECU communications */
		ASCLIN_base->BITCON.B.OVERSAMPLING = HTX_ASCLIN_OVERSAMPLE_HIGH_SPEED;	/* Over-sampling = 5 */
		ASCLIN_base->BITCON.B.PRESCALER = HTX_ASCLIN_PRESCALER_HIGH_SPEED;		/* PRESCALER = 2 */
		denominator = HTX_ASCLIN_DENOMINATOR_HIGH_SPEED;

	  	/* NUMERATOR */
	  	numerator = ((uint32)baud * (uint32)HTX_ASCLIN_DENOMINATOR_HIGH_SPEED) / (uint32)HTX_ASCLIN_DIVISOR_HIGH_SPEED;
	  	ASCLIN_base->BITCON.B.SAMPLEPOINT = HTX_ASCLIN_SAMPLE_POINT_HIGH_SPEED;
	}

	/* set baudrate value */
	ASCLIN_base->BRG.U = (denominator << 0)	/* DENOMINATOR */
					| (numerator << 16);	/* NUMERATOR */

	ASCLIN_base->FRAMECON.B.MODE = 1;			/* ASC mode */
	ASCLIN_base->FLAGSCLEAR.U = 0xFFFFFFFFUL;
	ASCLIN_base->FLAGSENABLE.U = 0xF0000000UL;	/* Enable TX & RX ints */
	ASCLIN_base->CSR.U = 1;					/* select CLC as clock source */

	RxDataIn = 0;
	RxDataOut = 0;

	TxDataIn = 0;
	TxDataOut = 0;

	TxBufferReady = 0x01u;
    RxDataReady = 0x00u;

    /* Required by spinlocks etc. */
    PortInUse = Htx_RESOURCE_FREE;

}

void HardwareSerial::end()
{
  // wait for transmission of outgoing data

	while(!TxBufferReady) { ; }

}

int HardwareSerial::available(void)
{

	if(RxDataOut != RxDataIn)
	{
		/* Return no of bytes in rx buffer */
		return abs(RxDataOut - RxDataIn) & (ASC_BUFFERSIZE-1);
	}
	else
	{
		return 0;
	}

}


int HardwareSerial::peek(void)
{

	/* Return last received character */
	return(ASC_rxchar[LastRxDataIn]);

}

int HardwareSerial::read(void)
{

	int rxchar;

	while(RxDataOut == RxDataIn)
	{
		;
	}

	RxDataReady = 0x00;

	rxchar = ASC_rxchar[RxDataOut++];

	/* Create circular buffer */
	RxDataOut &= (ASC_BUFFERSIZE - 1);

	return(rxchar);

}

int HardwareSerial::availableForWrite(void)
{

	/* Return how many bytes are free in the tx buffer */
	return(ASC_BUFFERSIZE - abs(TxDataIn - TxDataOut));

}


void HardwareSerial::flush()
{

	/* Wait until tx buffer is all sent */
	while(TxBufferReady == 0x00) { ; }

}


#define MODULESRC /*lint --e(923)*/ ((*(Ifx_SRC_t *)0xF0038000u))

size_t HardwareSerial::write(uint8_t c)
{

	Ifx_SRC_t *ModuleSrc;

	while(TxBufferReady == 0x00) { ; }
	TxBufferReady = 0x00;

	/* Create circular buffer */
	TxDataIn &= (ASC_BUFFERSIZE - 1u);

	ASC_txchar[TxDataIn++] = c ;

	/* Create an interrupt request to start transmission */
	ModuleSrc = (((Ifx_SRC_t *)0xF0038000u));
	ModuleSrc[ASC_SRC_ID].B.SETR = 1u;

	return 1;
}








