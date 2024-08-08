#include "Claw.h"

Claw claw;

void setup() {
  claw.initC();
}

void loop() {
  claw.closeC();
  claw.openC();
}
