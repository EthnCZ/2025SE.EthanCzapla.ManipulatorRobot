#include "base.h"

#define PBase 5
Base aBase(PBase);

void setup() {
  Serial.begin(9600);
  aBase.initB();
}

void loop() {
  aBase.turn(90);
}
