/*
  HardwareSerial.h - Hardware serial library for Wiring
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

  Modified 28 September 2010 by Mark Sproul
  Modified 14 August 2012 by Alarus
  Modified 3 December 2013 by Matthijs Kooijman
*/

#ifndef HardwareSerial_h
#define HardwareSerial_h

#include <inttypes.h>

#include "Stream.h"
#include <Asclin/Asc/IfxAsclin_Asc.h>

// Define constants and variables for buffering incoming serial data.  We're
// using a ring buffer (I think), in which head is the index of the location
// to which to write the next incoming character and tail is the index of the
// location from which to read.
#if !(defined(SERIAL_TX_BUFFER_SIZE) && defined(SERIAL_RX_BUFFER_SIZE))
#if (RAMEND < 1000)
#define SERIAL_TX_BUFFER_SIZE 16
#define SERIAL_RX_BUFFER_SIZE 16
#else
#define SERIAL_TX_BUFFER_SIZE 64
#define SERIAL_RX_BUFFER_SIZE 64
#endif
#endif
#if (SERIAL_TX_BUFFER_SIZE>256)
typedef uint16_t tx_buffer_index_t;
#else
typedef uint8_t tx_buffer_index_t;
#endif
#if  (SERIAL_RX_BUFFER_SIZE>256)
typedef uint16_t rx_buffer_index_t;
#else
typedef uint8_t rx_buffer_index_t;
#endif


#define PARITYENABLE  0x80u
#define PARITYDISABLE 0x00u
#define PARITYODD     0x40u
#define PARITYEVEN    0x00u
#define STOPBITS1	  0x10u
#define STOPBITS2	  0x20u


// Define config for Serial.begin(baud, config);
#define SERIAL_5N1 		(0x05 | PARITYDISABLE | STOPBITS1)
#define SERIAL_6N1 		(0x06 | PARITYDISABLE | STOPBITS1)
#define SERIAL_7N1 		(0x07 | PARITYDISABLE | STOPBITS1)
#define SERIAL_8N1 		(0x08 | PARITYDISABLE | STOPBITS1)
#define SERIAL_5N2 		(0x05 | PARITYDISABLE | STOPBITS2)
#define SERIAL_6N2 		(0x06 | PARITYDISABLE | STOPBITS2)
#define SERIAL_7N2 		(0x07 | PARITYDISABLE | STOPBITS2)
#define SERIAL_8N2 		(0x08 | PARITYDISABLE | STOPBITS2)
#define SERIAL_5E1 		(0x05 | PARITYENABLE | PARITYEVEN | STOPBITS1)
#define SERIAL_6E1 		(0x06 | PARITYENABLE | PARITYEVEN | STOPBITS1)
#define SERIAL_7E1 		(0x07 | PARITYENABLE | PARITYEVEN | STOPBITS1)
#define SERIAL_8E1 		(0x08 | PARITYENABLE | PARITYEVEN | STOPBITS1)
#define SERIAL_5E2 		(0x05 | PARITYENABLE | PARITYEVEN | STOPBITS2)
#define SERIAL_6E2 		(0x06 | PARITYENABLE | PARITYEVEN | STOPBITS2)
#define SERIAL_7E2 		(0x07 | PARITYENABLE | PARITYEVEN | STOPBITS2)
#define SERIAL_8E2 		(0x08 | PARITYENABLE | PARITYEVEN | STOPBITS2)
#define SERIAL_5O1 		(0x05 | PARITYENABLE | PARITYODD | STOPBITS1)
#define SERIAL_6O1 		(0x06 | PARITYENABLE | PARITYODD | STOPBITS1)
#define SERIAL_7O1 		(0x07 | PARITYENABLE | PARITYODD | STOPBITS1)
#define SERIAL_8O1 		(0x08 | PARITYENABLE | PARITYODD | STOPBITS1)
#define SERIAL_5O2 		(0x05 | PARITYENABLE | PARITYODD | STOPBITS2)
#define SERIAL_6O2 		(0x06 | PARITYENABLE | PARITYODD | STOPBITS2)
#define SERIAL_7O2 		(0x07 | PARITYENABLE | PARITYODD | STOPBITS2)
#define SERIAL_8O2 		(0x08 | PARITYENABLE | PARITYODD | STOPBITS2)


#define ASC_BUFFERSIZE  256  /* Must be a power of 2 and less than 256 */


/* Service Request Control register TC375 */
typedef union _Ifx_SRC_t
{
	volatile unsigned int R;
	struct _bits
	{
		unsigned int SRPN:8;            /**< \brief [7:0] Service Request Priority Number (rw) */
		unsigned int reserved_8:2;      /**< \brief [9:8] \internal Reserved */
		unsigned int SRE:1;             /**< \brief [10:10] Service Request Enable (rw) */
		unsigned int TOS:3;             /**< \brief [13:11] Type of Service Control (rw) */
		unsigned int reserved_14:2;     /**< \brief [15:14] \internal Reserved */
		unsigned int ECC:5;             /**< \brief [20:16] Error Correction Code (rwh) */
		unsigned int reserved_21:3;     /**< \brief [23:21] \internal Reserved */
		unsigned int SRR:1;             /**< \brief [24:24] Service Request Flag (rh) */
		unsigned int CLRR:1;            /**< \brief [25:25] Request Clear Bit (w) */
		unsigned int SETR:1;            /**< \brief [26:26] Request Set Bit (w) */
		unsigned int IOV:1;             /**< \brief [27:27] Interrupt Trigger Overflow Bit (rh) */
		unsigned int IOVCLR:1;          /**< \brief [28:28] Interrupt Trigger Overflow Clear Bit (w) */
		unsigned int SWS:1;             /**< \brief [29:29] SW Sticky Bit (rh) */
		unsigned int SWSCLR:1;          /**< \brief [30:30] SW Sticky Clear Bit (w) */
		unsigned int reserved_31:1;     /**< \brief [31:31] \internal Reserved */
	} B;
} Ifx_SRC_t;



class HardwareSerial : public Stream
{

  protected:


  private:

	uint8 volatile ASC_rxchar[ASC_BUFFERSIZE];
	uint8 volatile ASC_txchar[ASC_BUFFERSIZE];

	uint8 volatile RxDataIn;
	uint8 volatile RxDataOut;

	uint8 volatile TxDataIn;
	uint8 volatile TxDataOut;

	uint8 volatile TxBufferReady;
	uint8 volatile RxDataReady;
	uint8 volatile LastRxDataIn;
	uint16 volatile ASC_SRC_ID;
	Ifx_ASCLIN *ASCLIN_base;


  public:
	HardwareSerial();

	void ConfigureSerialChannel(Ifx_ASCLIN *ASCLIN_base);

    void begin(unsigned long baud) { begin(baud, SERIAL_8N1); }
    void begin(unsigned long, uint8_t);
    void end();
    virtual int available(void);
    virtual int peek(void);
    virtual int read(void);
    int availableForWrite(void);
    virtual void flush(void);
    virtual size_t write(uint8_t);
    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write; // pull in write(str) and write(buf, size) from Print
    operator bool() { return true; }

    void TxIsrHandler(void);
    void RxIsrHandler(void);



    uint32 PortInUse;

};


extern void serialEventRun(void) __attribute__((weak));

#endif
