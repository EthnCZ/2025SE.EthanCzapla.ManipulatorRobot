#include "Claw.h"

Claw::Claw(int degree) {
  this->degree = degree;
}

void Claw::initC(int degree) {
  Servo.attach(9);
  degree = 180;
}

void Claw::closeC(int degree) {
  Servo.write(degree);
  delay(250);
}

void Claw::openC() {
  Servo.write(0);
  delay(250);
}