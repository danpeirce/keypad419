# Testing Adafruit 419 Membrane 3x4 Keypad

We have a class set of the Adafruit 419 membrane 3x4 keypad. This repository provides a simple method to test
the keypads before giving them to students. It is a minor modification to the example **keypad_test** included
in the Adafruit keypad library.

* The Adafruit_Keypad library repository is at https://github.com/adafruit/Adafruit_Keypad 
* The **keypad_test0** repository is simply a modification of the keypad_test example from the Adafruit_Keypad library.

## Using ESP32S2 board for Testing

I'm using the ESP32S2 on a solderless breadboard and the Arduino IDE for testing.

### Modifications to the Code

* using 115200 baud rate which is more typical for the ESP32 board
* reversed the order of the GPIO pins so that the keybad flex PCB cable would
   not pass over the board when connected and top side of keypad could be 
   kept print side up.

~~~~C 
#define R1    8
#define R2    7
#define R3    6
#define R4    5
#define C1    4
#define C2    3
#define C3    2
~~~~


## Installing Adafruit Keyboard Library

The procedure for installing the library is given here https://learn.adafruit.com/matrix-keypad/arduino 
