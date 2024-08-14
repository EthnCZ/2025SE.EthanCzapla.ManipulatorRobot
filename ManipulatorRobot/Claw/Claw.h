#ifndef CLAW_H
#define CLAW_H

#include <Arduino.h>
#include <Wire.h>

class Claw {
  private:
  public:
    int pin;
    Claw() {}
    Claw(int pin);
    void initC();
    void openC();
    void closeC();
};

#endif