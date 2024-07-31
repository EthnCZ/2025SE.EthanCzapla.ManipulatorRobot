#include "RGBsensor.h"

RGBsensor::RGBsensor (int Rval, int Gval, int Bval, byte pin) {
  //input data
  this->Rval = Rval;
  this->Gval = Gval;
  this->Bval = Bval;
  this->pin = pin;
}


void RGBsensor::RGBsensinit(byte pin) {
  pinMode(pin, INPUT);
  byte gammatable[256]
  Adafruit_TCS34725 = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
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

void RGBsensor::getVals(float Rval, float Gval, float Bval) {
  delay(60);  // takes 50ms to read
  tcs.getRGB(&Rval, &Gval, &Bval);
  return(int(Rval)); 
  return(int(Gval)); 
  return(int(Bval));
  Serial.print("\n");
}

void RGBsensor::getCol(float Rval, float Gval, float Bval) {
  switch (getVals()) {
    case (Bval > Rval && Bval > Gval) {
        Serial.print("Blue");
      }
    case (Gval > Rval && Gval > Bval) {
        Serial.print("Green");
      }
    case (Rval > Gval && Rval > Bval) {
        Serial.print("Red");
      }
  }
}







