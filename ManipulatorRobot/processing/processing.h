#ifndef PROCESSING_H
#define PROCESSING_H

#include "Arduino.h"
#include "elbow.h"
#include "claw.h"
#include "base.h"
#include "RGBsensor.h"

class CPU {
  private:
  int bob
  public:
  CPU () {}
  CPU (int bob)
  void initCPU();
  void getBlock();
  void placeBlock();
}

#endif