// the following has been modified from the original example provided by Adafruit 
//   which was shared with the MIT license
//
//   * PID419  Membrane 3x4 Matrix Keypad  <-- this modified example
//                                             uses the Adafruit 419 membrane keypad


#include "keypad_test0.h"


void setup() {
  Serial.begin(115200);   // will compile for a ESP32S2 which generally is set to 115200
  Keypad419.begin();
}

void loop() {

  Keypad419.tick();

  while(Keypad419.available()){
    keypadEvent e = Keypad419.read();
    if(e.bit.EVENT == KEY_JUST_PRESSED) Serial.print((char)e.bit.KEY);
  }

  delay(10);
}