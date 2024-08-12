#ifndef CLAW_H
#define CLAW_H

#include <Servo.h>

class Claw {
  private:
    int pin
    int degree;
  public:
    Claw();
    Claw(int degree);
    void initC(int pin);
    void openC(int degree);
    void closeC();
};

#endif