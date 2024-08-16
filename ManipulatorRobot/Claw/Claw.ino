#include "Claw.h"

#define Pclaw 11
Claw aClaw(Pclaw);

void setup() {
  Serial.begin(9600);
  aClaw.initC();
}

void loop() {
  aClaw.closeC();
  aClaw.openC();
}
