#ifndef ELBOW_H
#define ELBOW_H

#include <Arduino.h>
#include <Wire.h>

class Elbow {
  private:
  public:
    int pin;
    Elbow() {}
    Elbow(int pin);
    void initE();
    void turn(int angle);
};

#endif