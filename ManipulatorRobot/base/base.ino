#include "base.h"

int pin = 5;
Base aBase(pin);

void setup() {
  Serial.begin(9600);
  aBase.initB();
}

void loop() {
  aBase.turn(90);
}
