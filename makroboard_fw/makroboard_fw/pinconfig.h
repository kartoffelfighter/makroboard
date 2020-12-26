// Hardware PINs

#ifndef Arduino_h
// if not in an arduino environment

#define LEDs PD0

#define HW_SW1 PC7
#define HW_SW2 PE6
#define HW_SW3 PD0
#define HW_SW4 PD4
#define HW_SW5 PC6
#define HW_SW6 PB7
#define HW_SW7 PD2
#define HW_SW8 PD3

#else

#define LEDs 3  // All LEDS are at pin 3

#define HW_SW1 13
#define HW_SW2 7
#define HW_SW3 4
#define HW_SW4 2
#define HW_SW5 5
#define HW_SW6 11
#define HW_SW7 0
#define HW_SW8 1

#endif
/////////////////////////////////////
// Mapping
// HW_Switch   HW_SW1 HW_SW3 HW_SW5 HW_SW7
// SW_Switch     SW0   SW1    SW2     SW3
//    LED         0     1      2      3
//--------------------------------------------
// HW_Switch   HW_SW2 HW_SW4 HW_SW6 HW_SW8
// SW_Switch     SW4    SW5   SW6    SW7
//    LED         4      5     6      7
/////////////////////////////////////

#define NUM_LEDS 8
#define SW0 HW_SW1
#define SW1 HW_SW2
#define SW2 HW_SW3
#define SW3 HW_SW4
#define SW4 HW_SW5
#define SW5 HW_SW6
#define SW6 HW_SW7
#define SW7 HW_SW8

#define CRYSTAL 16000000L
// makros to toggle leds easier..
#define off 0
#define on 1
