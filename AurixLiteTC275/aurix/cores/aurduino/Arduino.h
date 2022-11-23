

/*
 * This header file contains variables/defines/data etc that is
 * global to the arduino framework and is not specific to a
 * particular chip.
 */


#ifndef _ARDUINO_H
#define _ARDUINO_H

#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


#ifdef __cplusplus
extern "C"{
#endif // _cplusplus

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "wiring_analog.h"
#include "wiring.h"

void yield(void);

/* From wiring_pulses.c */
unsigned long pulseIn(uint8_t pin, uint8_t state, unsigned long timeout);
unsigned long pulseInLong(uint8_t pin, uint8_t state, unsigned long timeout);

#ifdef __cplusplus
}
//#include "WCharacter.h"

#include "WString.h"
#include "Tone.h"
#include "WMath.h"
#include "HardwareSerial.h"

//#include "wiring_pulse.h"
#endif // _cplusplus

#include "variant.h"

#include "wiring.h"
#include "wiring_digital.h"
//#include "wiring_analog.h"
#include "wiring_shift.h"
//#include "WInterrupts.h"

#define clockCyclesPerMicrosecond() ( F_CPU / 1000000L )
#define clockCyclesToMicroseconds(a) ( (a) / clockCyclesPerMicrosecond() )
#define microsecondsToClockCycles(a) ( (a) * clockCyclesPerMicrosecond() )

#define lowByte(w) ((uint8_t) ((w) & 0xff))
#define highByte(w) ((uint8_t) ((w) >> 8))

#define bitRead(value, bit) (((value) >> (bit)) & 0x01)
#define bitSet(value, bit) ((value) |= (1UL << (bit)))
#define bitClear(value, bit) ((value) &= ~(1UL << (bit)))
#define bitWrite(value, bit, bitvalue) (bitvalue ? bitSet(value, bit) : bitClear(value, bit))

#endif

/* Special trick for Ethernet Shield W5100 */
/* The default bitrate for the W5100 is 14MBit/s for the ShieldBuddy.
 * This is too fast as the maximum safe speed is 8Mbit/s, like the Arduino Mega.
 * By defining for "ARDUINO_ARCH_ARC32" just W5100.h, we can cause the
 * #define SPI_ETHERNET_SETTINGS SPISettings(8000000, MSBFIRST, SPI_MODE0) to be used.
 * This is OK because W5100.h only appears in W5100.cpp.
 */
#ifdef	W5100_H_INCLUDED
#define ARDUINO_ARCH_ARC32
#endif


