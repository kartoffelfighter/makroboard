# Makroboard 

This keyboard has 8 cherry switches and 8 rgb-leds, connected to an ATMEGA32U4 (Arduino Leonardo) to emulate a keyboard.

Its porpuse is to store Makros which are not defined per default on a keyboard



## Keys

Default layout (in firmware folder)

| CTRL + F1  | CTRL + F2   | CTRL + F3  | CTRL + F4  |
| ---------- | ----------- | ---------- | ---------- |
| Media_PREV | Media_PAUSE | Media_NEXT | Media_STOP |
|            |             |            |            |
## Dependencies

The firmware uses the FastLed and Project-HID Librarys. You can find these on github, but also in the arduino library manager.

[FastLed (FastLED)]: https://github.com/FastLED/FastLED
[Project-HID (NicoHood)]: https://github.com/NicoHood/HID

### Notes

The Source code is not optimized and might hang sometimes. Since i'm using this board at most to control my teamspeak-mute i didn't care to optimize. If you wan't to, feel free.

Software and Hardware come as-is without any warranty.

My board was etched at jlcpcb, parts came from mouser, assembling was done by hand. 

If you're interested in a board feel free to contact me, i do still have some laying here.