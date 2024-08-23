#include "Claw.h"

#define Pclaw 3
Claw aClaw(Pclaw);

void setup() {
  Serial.begin(9600);
  aClaw.initC();
}

void loop() {
  aClaw.closeC();
  delay(1000);
  aClaw.openC();
}
