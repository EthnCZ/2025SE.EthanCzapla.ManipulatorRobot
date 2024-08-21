#include "processing.h"

RGBsensor col;
Elbow Elb1;
Elbow Elb2;
Elbow Elb3;
Claw claw;
Base base;

CPB::CPB(int bob, unsigned long placedelay, unsigned long resetdelay, unsigned long grabdelay) {

  placedelay = 2500; //time taken to place a block is 5000ms
  resetdelay = 1000; //time taken to reset position is 1000ms
  grabdelay = 2500; //time taken to get a block is 5000ms
} 

void CPB::initCPB() {
  col.RGBsensinit();
  Elb1.initE();
  Elb2.initE();
  Elb3.initE();
  claw.initC();
  base.initB();
} //initialise stuff

void CPB::getBlock() {
  claw.openC()
  base.turn(0);
  Elb1.turn(135); Elb2.turn(135); Elb3.turn(135);
  delay(grabdelay)
  claw.closeC()
} //grabs block

void CPB::placeBlock() {
  if (col.getCol() == 0) {
    base.turn(90);
  }//red blocks to red deposit
  if (col.getCol() == 1) {
    base.turn(135);
  }//green blocks to green deposit
  if (col.getCol() == 2) {
    base.turn(180);
  }//blue blocks to blue deposit
  Elb1.turn(45); Elb2.turn(45); Elb3.turn(45); //bring claw over deposit
  delay(placedelay); //allow everything to move
  claw.openC(); //drop block
}

void CPB::returntodefault() {
  Elb1.turn(90); Elb2.turn(90); Elb3.turn(90);
  delay(resetdelay);
}