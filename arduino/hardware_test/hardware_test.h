/*!
   @file hardware_test.h
    ____  _____      _    ____    _  ___     ____ ____
   |  _ \| ____|_   / \  |  _ \ _/ |/ _ \ _ / ___| ___|
   | | | |  _| (_) / _ \ | | | (_) | | | (_) |   |___ \
   | |_| | |___ _ / ___ \| |_| |_| | |_| |_| |___ ___) |
   |____/|_____(_)_/   \_\____/(_)_|\___/(_)\____|____/


   Author : @theDevilsVoice @dead10c5
   Date   : November 4th, 2018
   Version: 0.1


                    ATMEL ATTINY84 / ARDUINO

                             +-\/-+
                       VCC  1|    |14  GND
               (D  0)  PB0  2|    |13  AREF (D 10)
               (D  1)  PB1  3|    |12  PA1  (D  9)
                       PB3  4|    |11  PA2  (D  8)
    PWM  INT0  (D  2)  PB2  5|    |10  PA3  (D  7)
    PWM        (D  3)  PA7  6|    |9   PA4  (D  6)
    PWM        (D  4)  PA6  7|    |8   PA5  (D  5)        PWM
                             +----+

IDE Attiny84 Physical Pin
  0      PA0           13
  1      PA1           12
  2      PA2           11
  3      PA3           10
  4      PA4            9
  5      PA5            8
  6      PA6            7
  7      PA7            6
  8      PB2            5
  9      PB1            3
 10      PB0            2

*/
#ifndef HARDWARE_TEST_H
#define HARDWARE_TEST_H
#define VERSION "0.1"

#define F_CPU 8000000

#include <Arduino.h>

// use the chip's EEPROM
#include <EEPROM.h>

#include <avr/sleep.h>
#include <avr/power.h>
#include <avr/io.h>
//#include <avr/wdt.h>
#include <avr/interrupt.h>

#include <SoftwareSerial.h>

// ***
// *** Define the RX and TX pins. Choose any two
// *** pins that are unused. Try to avoid D0 (pin 5)
// *** and D2 (pin 7) if you plan to use I2C.
// ***
#define rxPin    PB1
#define txPin    PB0

#endif
