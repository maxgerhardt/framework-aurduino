/*
  TwoWire.h - TWI/I2C library for Arduino & Wiring
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

  Modified 2012 by Todd Krein (todd@krein.org) to implement repeated starts
  Modified 2019 by Mike Beach (mbeach@hitex.co.uk) to add Aurix support
*/

#ifndef TwoWire_h
#define TwoWire_h

#include <inttypes.h>

#ifdef DEC
	#undef DEC // Required to allow below include!
#endif
#include "I2c/I2c/IfxI2c_I2c.h"

#ifndef DEC
	#define DEC 10 // Required by print in Stream
#endif

#define BUFFER_LENGTH 32

typedef enum { UsePins_6_7, UsePins_20_21, UsePins_SDA_SCL, UsePins_SDA1_SCL1 } WirePinsType;

// WIRE_HAS_END means Wire has end()
#define WIRE_HAS_END 1

class TwoWire : public Stream
{
  private:
    static uint8_t rxBuffer[];
    static uint8_t rxBufferIndex;
    static uint8_t rxBufferLength;

    static uint8_t txAddress;
    static uint8_t txBuffer[];
    static uint8_t txBufferIndex;
    static uint8_t txBufferLength;

    static uint8_t transmitting;
    static void (*user_onRequest)(void);
    static void (*user_onReceive)(int);
    static void onRequestService(void);
    static void onReceiveService(uint8_t*, int);
  public:
    TwoWire();
    void begin();
    void begin(uint8_t);
    void begin(int);
    void end();
    void setClock(uint32_t);
    void beginTransmission(uint8_t);
    void beginTransmission(int);
    uint8_t endTransmission(void);
    uint8_t endTransmission(uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t);
    uint8_t requestFrom(uint8_t, uint8_t, uint8_t);
	uint8_t requestFrom(uint8_t, uint8_t, uint32_t, uint8_t, uint8_t);
    uint8_t requestFrom(int, int);
    uint8_t requestFrom(int, int, int);
    virtual size_t write(uint8_t);
    virtual size_t write(const uint8_t *, size_t);
    virtual int available(void);
    virtual int read(void);
    virtual int peek(void);
    virtual void flush(void);
    void onReceive( void (*)(int) );
    void onRequest( void (*)(void) );
    void setWireBaudrate(uint32 _WireBaudrate);
    void setWirePins(WirePinsType _pins);

    uint8 I2cWriteBuffer(uint8_t slave_address, uint8_t* data, uint8_t length, uint8_t wait, uint8_t sendStop);
    uint8 I2CReadFrom(uint8_t slave_address, uint8_t* data, uint8_t length, uint8_t sendStop);

    inline size_t write(unsigned long n) { return write((uint8_t)n); }
    inline size_t write(long n) { return write((uint8_t)n); }
    inline size_t write(unsigned int n) { return write((uint8_t)n); }
    inline size_t write(int n) { return write((uint8_t)n); }
    using Print::write;
	WirePinsType WirePins;
    uint32 WireBaudrate;
    uint32 WireSlaveAddress;
    uint32 I2cErrors;

	//IfxI2c_I2c_Device i2cDev;
	IfxI2c_I2c i2c;                      // i2c handle
	IfxI2c_I2c_Config config;
	IfxI2c_I2c_deviceConfig i2cDeviceConfig;

};

extern TwoWire Wire;

#endif

