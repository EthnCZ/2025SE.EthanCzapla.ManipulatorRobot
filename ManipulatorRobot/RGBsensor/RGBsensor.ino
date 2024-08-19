#include <Wire.h>
#include "RGBsensor.h"

RGBsensor RGBreader;

void setup() {
  Serial.begin(9600);
  RGBreader.RGBsensinit();
}


void loop() {
  int st;
  RGBreader.getCol(st);
  /*if (st == 3) {
    return;
  }
  else if (st == 0) {
    Serial.println("Red");
  }
  else if (st == 1) {
    Serial.println("Green");
  }
  else if (st == 2) {
    Serial.println("Blue");
  }*/
  switch(st) {
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