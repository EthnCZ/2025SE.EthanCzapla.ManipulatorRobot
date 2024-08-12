#ifndef rangefinder_H
#define rangefinder_H

#include <Arduino.h>

class rangefinder {
  private:
    int pin;
    long d;
  public:
    rangefinder();
    rangefinder(int pin, long d);
    void getd(long d);
};

#endif rangefinder_H