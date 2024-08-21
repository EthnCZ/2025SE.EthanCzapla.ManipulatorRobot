#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    byte gammatable[256];
    Adafruit_TCS34725 tcs;
  public:
    RGBsensor () {} //do not use
    RGBsensor (
      byte gammatable[256], Adafruit_TCS34725 tcs
    );
    void RGBsensinit(); //initialises the system
    byte getCol(); //returns state corresponding to colours 0-red, 1-green, 2-blue, 3-none
};

#endif