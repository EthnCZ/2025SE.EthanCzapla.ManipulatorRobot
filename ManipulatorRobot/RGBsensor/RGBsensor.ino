#include <Wire.h>
#include "RGBsensor.h"

RGBsensor RGBreader;

void setup() {
  Serial.begin(9600);
  RGBreader.RGBsensinit();
}


void loop() {
  switch(RGBreader.getCol()) {
    case(3):
      break;
    case(2):
      Serial.println("Blue");
      break;
    case(1):
      Serial.println("Green");
      break;
    case(0):
      Serial.println("Red");
      break;
  }
}