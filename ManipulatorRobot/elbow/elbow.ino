#include "elbow.h"

#define P_Elb1 6
#define P_Elb2 7
#define P_Elb3 8

Elbow Elb1(P_Elb1);
Elbow Elb2(P_Elb2);
Elbow Elb3(P_Elb3);

void setup() {
  Serial.begin(9600);
  Elb1.initE();
  Elb2.initE();
  Elb3.initE();
}

void loop() {
  int ang1 = 90; int ang2 = 45; int ang3 = 45;
  Elb1.turn(ang1);
  Elb2.turn(ang2);
  Elb3.turn(ang2);
}
