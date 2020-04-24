//// Makroboard
//// (CC) Marc Fischer
//// marcfischer.org
//// Simple Test Sketch to test the pcb

#include "pinconfig.h"

// LEDs Library
#include <FastLED.h>

/// measure clock frequency
#include <avr/sleep.h>
#include <avr/wdt.h>


volatile bool wdtFired = false;
unsigned long startuptime = 0;
ISR(WDT_vect) {
  wdt_disable();
  wdtFired = true;
}

/// end measure clock frequency


CRGB leds[NUM_LEDS];


void setup() {
  // measure the clock speed
  noInterrupts();
  MCUSR = 0;
  WDTCSR = bit(WDCE) | bit(WDE);
  WDTCSR = bit(WDIE);
  wdt_reset();
  wdtFired = false;
  interrupts();
  unsigned long startTime = micros();
  while (!wdtFired) {}
  unsigned long endTime = micros();
  startuptime = endTime - startTime;  // startuptime is aprox. 1/1000 of the cpu clock
  // end measure the clock speed

  pinMode(SW0, INPUT);
  pinMode(SW1, INPUT);
  pinMode(SW2, INPUT);
  pinMode(SW3, INPUT);
  pinMode(SW4, INPUT);
  pinMode(SW5, INPUT);
  pinMode(SW6, INPUT);
  pinMode(SW7, INPUT);


  FastLED.addLeds<NEOPIXEL, LEDs>(leds, NUM_LEDS);


  // circle all leds one time
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(200);
    leds[i] = CRGB::Black;
    FastLED.show();
  }
}

int leds_enabled[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void KeyPress(int key) {
  if (leds_enabled[key]) {
    leds[key] = CRGB::Black;
    leds_enabled[key] = 0;
  } else {
    leds[key] = CRGB::Blue;
    leds_enabled[key] = 1;
  }
  FastLED.show();
}


int millis_begin = 0;
int millis_old = 0;

void loop() {
  if (!digitalRead(SW0)) KeyPress(0);
  if (!digitalRead(SW1)) KeyPress(1);
  if (!digitalRead(SW2)) KeyPress(2);
  if (!digitalRead(SW3)) KeyPress(3);
  if (!digitalRead(SW4)) KeyPress(4);
  if (!digitalRead(SW5)) KeyPress(5);
  if (!digitalRead(SW6)) KeyPress(6);
  if (!digitalRead(SW7)) KeyPress(7);


}
