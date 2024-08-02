#include "RGBsensor.h"

RGBsensor::RGBsensor (int Rval, int Gval, int Bval, byte pin, byte gammatable[256], Adafruit_TCS34725 tcs) {
  //input data
  this->Rval = Rval;
  this->Gval = Gval;
  this->Bval = Bval;
  this->pin = pin;
  this->gammatable[256] = gammatable[256];
  tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
}


void RGBsensor::RGBsensinit(byte pin) {
  pinMode(pin, INPUT);
  if (tcs.begin()) {
    Serial.println("Found sensor");
  } else {
    Serial.println("No TCS34725 found ... check your connections");
    while (1); // halt!
  }
  for (int i=0; i<256; i++) {
    float x = i;
    x /= 255;
    x = pow(x, 2.5);
    x *= 255;
    gammatable[i] = 255 - x;
  }
}

void RGBsensor::getVals(int Rval, int Gval, int Bval) {
  float r, g, b;
  delay(60);  // takes 50ms to read
  tcs.getRGB(&r, &g, &b);
  Rval = int(r); 
  Gval = int(g); 
  Bval = int(b);
}

void RGBsensor::getCol(int Rval, int Gval, int Bval) {
  switch (getVals()) {
    case ((Bval > Rval) && (Bval > Gval)): {
        Serial.print("Blue");
      }
    case (Gval > Rval && Gval > Bval): {
        Serial.print("Green");
      }
    case (Rval > Gval && Rval > Bval): {
        Serial.print("Red");
      }
  }
}







