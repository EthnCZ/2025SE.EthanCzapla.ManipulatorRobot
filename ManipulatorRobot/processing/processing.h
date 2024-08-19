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
  public:
  CPB () {}
  CPB (int bob)
  void initCPB();
  void getBlock();
  void placeBlock();
}

#endif