#include "processing.h"

RGBsensor col;


CPB::CPB(int bob, unsigned long placedelay) {

  placedelay = 5000; //time taken to place a block is 5000ms
} 

void CPB::initCPB() {

} //initialise stuff

void CPB::getBlock() {



} //grabs block

void CPB::placeBlock() {
  if (col.getCol() == red) {

  }//places red blocks to red deposit
  if (col.getCol() == green) {

  }//places green blocks to green deposit
  if (col.getCol() == blue) {

  }//places blue blocks to blue deposit


}

