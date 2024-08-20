#include "RGBsensor.h"

RGBsensor::RGBsensor (byte gammatable[256], Adafruit_TCS34725 tcs) {
  //data
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

void RGBsensor::getCol() {
  float red, green, blue;
  delay(60);  // takes 50ms to read
  tcs.getRGB(&red, &green, &blue);
  if (int(blue) > int(red) && int(blue) > int(green)) {
    Serial.print("Blue");
  }
  if (int(green) > int(red) && int(green) && int(blue)) {
    Serial.print("Green");
  }
  if (int(red) > int(blue) && int(red) > int(green)) {
    Serial.print("Red");
  }
}






