#include "Claw.h"
#include "Servo.h"

Claw aClaw;

Claw::Claw(int pin, int degree) {
  this->pin = pin
  this->degree = degree;
}

void Claw::initC(int degree) {
  Servo.attach(11);
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