#include "RGBsensor.h"

RGBsensor::RGBsensor (int Rval, int Gval, int Bval, byte gammatable[256], Adafruit_TCS34725 tcs) {
  //input data
  this->Rval = Rval;
  this->Gval = Gval;
  this->Bval = Bval;
  this->gammatable[256] = gammatable[256];
  tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);
}


void RGBsensor::RGBsensinit() {
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

void RGBsensor::getCol(int Rval, int Gval, int Bval) {
  float red, green, blue;
  delay(60);  // takes 50ms to read
  tcs.getRGB(&red, &green, &blue);
  Rval = int(red); 
  Gval = int(green); 
  Bval = int(blue);
  if (Bval > Rval && Bval > Gval) {
    Serial.print("Blue");
  }
  if (Gval > Rval && Gval > Bval) {
    Serial.print("Green");
  }
  if (Rval > Gval && Rval > Bval) {
    Serial.print("Red");
  }
}







