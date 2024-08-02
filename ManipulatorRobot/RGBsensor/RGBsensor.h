#ifndef RGBsensor_H
#define RGBsensor_H

#include <Arduino.h>
#include <Wire.h>
#include "Adafruit_TCS34725.h"

class RGBsensor {
  private: 
    int Rval;
    int Gval;
    int Bval;
    byte pin;
    byte gammatable[256];
    Adafruit_TCS34725 tcs;
  public:
    RGBsensor () {} //do not use
    RGBsensor (
      int Rval, int Gval, int Bval, byte pin, byte gammatable[256], Adafruit_TCS34725 tcs
    );
    void RGBsensinit(byte pin); //initialises the system
    void getVals(int Rval, int Gval, int Bval); //return colour in RGB values
    void getCol(int Rval, int Gval, int Bval); //return colour as string
};

#endif