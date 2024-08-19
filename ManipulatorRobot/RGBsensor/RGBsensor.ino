#include <Wire.h>
#include "RGBsensor.h"

RGBsensor RGBreader;

void setup() {
  Serial.begin(9600);
  RGBreader.RGBsensinit();
}


void loop() {
  RGBreader.getCol();
}