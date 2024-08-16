#ifndef BASE_H
#define BASE_H

#include <Arduino.h>
#include <Wire.h>

class Base {
  private:
  public:
    int pin;
    Base() {}
    Base(int pin);
    void initB();
    void turn(int angle);
};

#endif