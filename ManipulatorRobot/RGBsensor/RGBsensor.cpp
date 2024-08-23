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

int RGBsensor::getCol() { //does not return state
  float r, g, b;
  delay(60);  // takes 50ms to read
  tcs.getRGB(&r, &g, &b);
  if (int(r) < 100 && int(g) < 100 && int(b) < 100) {
    return 3; //nothing
  }
  else if (int(b) > int(r) && int(b) > int(g)) {
    return 2; //blue colour
  }
  else if (int(g) > int(r) && int(g) > int(b)) {
    return 1; //green colour
  }
  else if (int(r) > int(b) && int(r) > int(g)) {
    return 0; //red colour
  }
  delay(440); //read every 500ms
}







