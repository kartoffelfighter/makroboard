//// Makroboard
// KEYS:
#include <HID-Project.h>
#define LAYOUT_GERMAN
/**
   |---------|---------|---------|---------|
   |--Key 1--|--Key 2--|--Key 3--|--Key 4--|
   |--Vol X--|--Vol- --|--Vol+ --|--MUTE --|
   |---------|---------|---------|---------|
   |--PREV --|--PAUSE--|--NEXT --|--STOP --|
   |---------|---------|---------|---------|
*/

// see all keys @ https://github.com/NicoHood/HID/wiki/Consumer-API
// note: all keys for the default keyboard layout will be sent with a pressed left CTRL to ensure no complications with other software. if you don't need that, dig deeper in the code.


#define KEY_1 KEY_F1  // F1
#define KEY_1_CONSUMER false
#define KEY_2 KEY_F2  // F2
#define KEY_2_CONSUMER false
#define KEY_3 KEY_F3  // F3
#define KEY_3_CONSUMER false
#define KEY_4 KEY_F4  // F4
#define KEY_4_CONSUMER false
#define KEY_5 MEDIA_PREVIOUS    // Previos Track
#define KEY_5_CONSUMER true
#define KEY_6 MEDIA_PLAY_PAUSE  // PlayPause
#define KEY_6_CONSUMER true
#define KEY_7 MEDIA_NEXT    // Next Track
#define KEY_7_CONSUMER true
#define KEY_8 MEDIA_STOP  // Stop
#define KEY_8_CONSUMER true

/**
   ----------------------------------------------------------------------------------
   EDIT only VALUES ABOVE
   ----------------------------------------------------------------------------------
*/

// Constants:
#define DEBOUNCE_TIME 15 // debounce time in ms. modify to lower if you think its to slow, to higher if its to clicky
#define DEBOUNCE_TRESHOLD 4 // modify only if you have misreads
#define LOOP_TIME 100 // communication loop to pc - the register with keystrokes gets polled in the loop and send as keys to the pc
#define MIN_LOOP_TIME 10  //mS a loop should take in minimum, arduinos get somehow a hiccup when running to fast

byte DEFINED_KEY[8] = {KEY_1, KEY_2, KEY_3, KEY_4, KEY_5, KEY_6, KEY_7, KEY_8};
bool KEY_LIB[8] = {KEY_1_CONSUMER, KEY_2_CONSUMER, KEY_3_CONSUMER, KEY_4_CONSUMER, KEY_5_CONSUMER, KEY_6_CONSUMER, KEY_7_CONSUMER, KEY_8_CONSUMER};

#include "pinconfig.h"

// LEDs Library
#include <FastLED.h>
CRGB leds[NUM_LEDS];

void setup() {

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

  //Keyboard.begin();
  Consumer.begin();
  Keyboard.begin();
}

int leds_enabled[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void toggleLed(int key, bool self, int state = -1) {
  if (leds_enabled[key]) {
    if (state != on) {
      leds[key] = CRGB::Black;
      leds_enabled[key] = 0;
    }
  } else {
    if (state != off) {
      leds[key] = self ? CRGB::Blue : CRGB::Red;
      leds_enabled[key] = 1;
    }
  }
}


void KeyPress(int key) {
  toggleLed(key, true);
  FastLED.show();
  if (KEY_LIB[key]) {
    Consumer.write(DEFINED_KEY[key]);
  } else {
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.write(DEFINED_KEY[key]);
    Keyboard.releaseAll();
  }

}


int debounce[8] = {0, 0, 0, 0, 0, 0, 0, 0};
long last_debounce_millis = 0;
long last_loop_time = 0;
long begin_time_loop = 0; // store the loop begin time to prevent the arduino from 'running-to-fast-hiccup'

void loop() {
  begin_time_loop = millis();
  /**
     Debounce:
     read all pins over again in the loop. increment the representing value in debounce after DEBOUNCE_TIME. after reading in loop check the array for values above 5 (450ms high should be fine)
  */
  if (millis() - DEBOUNCE_TIME > last_debounce_millis) { // check, if the last debouncing time is longer ago than the treshold for the next click increment
    last_debounce_millis = millis();
    if (!digitalRead(SW0)) debounce[0]++;
    if (!digitalRead(SW1)) debounce[1]++;
    if (!digitalRead(SW2)) debounce[2]++;
    if (!digitalRead(SW3)) debounce[3]++;
    if (!digitalRead(SW4)) debounce[4]++;
    if (!digitalRead(SW5)) debounce[5]++;
    if (!digitalRead(SW6)) debounce[6]++;
    if (!digitalRead(SW7)) debounce[7]++;
  }

  if (millis() - LOOP_TIME > last_loop_time) {
    for (int i = 0; i < 8; i++) {
      if (debounce[i] > DEBOUNCE_TRESHOLD) {
        debounce[i] = 0;
        KeyPress(i);
      }
    }
  }
  if (millis() - begin_time_loop > MIN_LOOP_TIME)
    delay(MIN_LOOP_TIME - (millis() - begin_time_loop));
}
