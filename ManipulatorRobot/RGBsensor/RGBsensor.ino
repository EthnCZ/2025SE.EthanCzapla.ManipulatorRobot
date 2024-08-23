#include <Wire.h>
#include "RGBsensor.h"

RGBsensor RGBreader;

void setup() {
  Serial.begin(9600);
  RGBreader.RGBsensinit();
}


void loop() {
  int i = RGBreader.getCol();
  if (i == 3) {
    //nothing
  }
  if (i == 0) {
    Serial.println("Red");
  }
  if (i == 1) {
    Serial.println("Green");
  }
  if (i == 2) {
    Serial.println("Blue");
  }
}