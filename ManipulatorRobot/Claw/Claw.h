#ifndef CLAW_H
#define CLAW_H

#include <Arduino.h>
#include <Wire.h>

class Claw {
  private:
    int pin
  public:
    int degree;
    Claw();
    Claw(int pin, int degree);
    void initC(int pin);
    void openC(int degree);
    void closeC();
};

#endif