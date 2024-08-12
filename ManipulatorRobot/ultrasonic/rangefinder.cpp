#include "rangefinder.h"
#include "Ultrasonic.h"

Ultrasonic rf;

rangefinder::rangefinder(int pin, long d) {
  this->pin = pin;
  this->d = d;
}

void rangefinder::getd(long d) {
  d = rf.MeasureInMillimeters();
  delay(50);
}