#ifndef PROCESSING_H
#define PROCESSING_H

#include "Arduino.h"
#include "elbow.h"
#include "claw.h"
#include "base.h"
#include "RGBsensor.h"

class CPB {
  private:
    int bob //place holder for data
    unsigned long placedelay;
    unsigned long resetdelay;
    unsigned long grabdelay;
  public:
  CPB () {}
  CPB (int bob, unsigned long placedelay, unsigned long resetdelay, unsigned long grabdelay)
  void initCPB(); //initialises hardware
  void getBlock(); //grabs the block
  void placeBlock(); //deposits block based on colour
  void returntodefault(); //return to straight up
}

#endif