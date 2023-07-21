#include "Adafruit_Keypad.h"

// define your specific keypad here via PID
//#define KEYPAD_PID419

// reversed the order of these pins so that the keybad flex PCB cable would
//   not pass over the board when connected and top side of keypad could be 
//   kept print side up.
// these pin assignments are goof for the ESP32-S2-DEVKITM-1-N4R2 
//   you may have to change the pins for other Arduino campatiable boards!
#define R1    8
#define R2    7
#define R3    6
#define R4    5
#define C1    4
#define C2    3
#define C3    2

extern Adafruit_Keypad Keypad419;
