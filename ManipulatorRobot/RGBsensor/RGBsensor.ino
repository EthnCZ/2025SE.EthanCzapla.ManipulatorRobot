#include <Wire.h>
#include "RGBsensor.h"

RGBsensor Bob;

void setup() {
  Serial.begin(9600);
  Bob.RGBsensinit();
}


void loop() {
  Bob.getCol();
}