#include "base.h"
#include "Servo.h"

Servo aServo;

Base::Base(int pin){
  this->pin = pin;
}

void Base::initB() {
  aServo.attach(pin);
}

void Base::turn(int angle) {
  aServo.write(angle);
  delay(500);
}