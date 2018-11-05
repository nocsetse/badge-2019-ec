/*!
   @file hardware_test.ino
    ____  _____      _    ____    _  ___     ____ ____
   |  _ \| ____|_   / \  |  _ \ _/ |/ _ \ _ / ___| ___|
   | | | |  _| (_) / _ \ | | | (_) | | | (_) |   |___ \
   | |_| | |___ _ / ___ \| |_| |_| | |_| |_| |___ ___) |
   |____/|_____(_)_/   \_\____/(_)_|\___/(_)\____|____/


   Author : @dead10c5 @theDevilsVoice
   Date   : November 4th, 2018
   Version: 0.1
*/
#include "hardware_test.h"


SoftwareSerial serial(rxPin, txPin);



void setup() {
  
  power_adc_disable();
  power_usi_disable();
  power_timer1_disable();

  /* tune internal oscillator 
     https://becomingmaker.com/tuning-attiny-oscillator/
  OSCCAL += 3; 
  */
  if (CLKPR == 3)           // If clock set to 1MHz
    TCCR0B = (1<<CS00);     // Set prescaler to /1 (1uS at 1Mhz)
  else                      // Otherwise clock set to 8MHz
    TCCR0B = (2<<CS00);     // Set prescaler to /8 (1uS at 8Mhz)
  // Disconnect PWM from output
  GTCCR = 0b00000000;
  // Reconnect PWM to output
 GTCCR = 0b01010000;

  // Enable CTC mode (mode 2); TCNT0 counts from 0 to OCR0A inclusive
  TCCR0A |= ( 1<<WGM01 ); 
}

void loop() {
  

}
