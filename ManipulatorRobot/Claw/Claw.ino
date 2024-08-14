#include "Claw.h"

int pin = 11;
Claw aClaw(pin);

void setup() {
  Serial.begin(9600);
  aClaw.initC();
}

void loop() {
  aClaw.closeC();
  aClaw.openC();
}
