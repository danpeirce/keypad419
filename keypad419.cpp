// the following has been modified from the original example provided by Adafruit 
//   which was shared with the MIT license
//
//   * PID419  Membrane 3x4 Matrix Keypad  <-- this modified example
//                                             uses the Adafruit 419 membrane keypad

// note moved simplified keyboard_config.h into the this ino file 

#include "Adafruit_Keypad.h"
#include "keypad419.h"



const byte ROWS = 4; // rows
const byte COLS = 3; // columns
// define the symbols on the buttons of the keypads
char keys[ROWS][COLS] = {
    {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}, {'*', '0', '#'}};
byte rowPins[ROWS] = {R1, R2, R3,
                      R4};         // connect to the row pinouts of the keypad
byte colPins[COLS] = {C1, C2, C3}; // connect to the column pinouts of the
                                   // keypad

//initialize an instance of class NewKeypad
Adafruit_Keypad Keypad419 = Adafruit_Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

