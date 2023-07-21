# Testing Adafruit 419 Membrane 3x4 Keypad

This library is a modification of an basic example included with Adafruit's Adafruit_Keypad library. 
The goal was to further simplify usage of that library by providing a cpp file specific to the Adafruit 419 membrane keypad. 
We have a class set of the Adafruit 419 membrane 3x4 keypad. This repository provides a simple method to test
the keypads before giving them to students. 

* The Adafruit_Keypad library repository is at https://github.com/adafruit/Adafruit_Keypad 
* The **keypad419** repository is simply a modification of the keypad_test example from the Adafruit_Keypad library removing the generalizations so that
  the new examples are specific to just this 419 keypad.

## Using ESP32S2 board for Testing

I'm using the ESP32S2 on a solderless breadboard and the Arduino IDE for testing.

### Modifications to the Code

* using 115200 baud rate which is more typical for the ESP32 board
* the example header file had definitions that I thought should be in a cpp file. 
      Moving the definitions into the ino file resolves that issue.
* reversed the order of the GPIO pins so that the keypad flex PCB cable would
   not pass over the board when connected and top side of keypad could be 
   kept print side up. This pin assignment is now in **keypad419.h** . 

~~~~C 
#define R1    8
#define R2    7
#define R3    6
#define R4    5
#define C1    4
#define C2    3
#define C3    2
~~~~

* That pin assignment works well with the ESP32-S2-DEVKITM-1-N4R2 in a breadboard. Other boards may require the 
  macro definitions to be changed in **keypad419.h**

## Installing the keypad419 Library

There are multiple methods. 

* It can be installed manually after downloading and unzipping the keypad419 folder. That folder can be placed in the local 
  Arduino/libraries folder.
* alternatively one can use git and clone this repository into the keypad419 folder (if you are familiar with that procedure
* alternatively one can use the Sketch menu item to install the library from a downloaded zip file.

## Installing Adafruit Keyboard Library

The procedure for installing the library is given here https://learn.adafruit.com/matrix-keypad/arduino 


## The Following is Verbatim from [Adafruit Library](https://github.com/adafruit/Adafruit_Keypad/tree/master)

# Adafruit Keypad Library 

This is a library for using diode multiplexed keypads with GPIO pins on Arduino.

Adafruit invests time and resources providing this open source code, please support Adafruit and open-source hardware by purchasing products from Adafruit!

Written by Dean Miller for Adafruit Industries.
MIT license, all text above must be included in any redistribution
