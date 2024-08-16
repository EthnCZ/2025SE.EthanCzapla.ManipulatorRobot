#include "elbow.h"
#include "Servo.h"

Servo aServo;

Elbow::Elbow(int pin){
  this->pin = pin;
}

void Elbow::initE() {
  aServo.attach(pin);
}

void Elbow::turn(int angle) {
  aServo.write(angle);
  delay(500);
}