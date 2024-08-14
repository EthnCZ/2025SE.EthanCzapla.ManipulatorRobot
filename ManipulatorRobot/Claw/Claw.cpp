#include "Claw.h"
#include "Servo.h"

Servo aServo;

Claw::Claw(int pin){
  this->pin = pin;
}

void Claw::initC() {
  aServo.attach(pin);
}

void Claw::closeC() {
  aServo.write(165);
  delay(500);
}

void Claw::openC() {
  aServo.write(125);
  delay(500);
}