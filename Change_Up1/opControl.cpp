#include "vex.h"
#include "opControl.h"

using namespace vex;

void joystickControl(){
  //while(true){
    left_bottom.spin(directionType::fwd, (Controller1.Axis2.value() + Controller1.Axis1.value())/2, velocityUnits::pct); 
    right_bottom.spin(directionType::fwd, (Controller1.Axis2.value() - Controller1.Axis1.value())/2, velocityUnits::pct);
    left_top.spin(directionType::fwd, (Controller1.Axis2.value() + Controller1.Axis1.value())/2, velocityUnits::pct);
    right_top.spin(directionType::fwd, (Controller1.Axis2.value() - Controller1.Axis1.value())/2, velocityUnits::pct);
  //}
}

void intakeToggle(){
  while(true){
      if (Controller1.ButtonR2.pressing()) {
      intake_left.spin(fwd, 100, velocityUnits::pct);
      intake_right.spin(fwd, 100, velocityUnits::pct);
    } 
    else if (Controller1.ButtonR1.pressing()) {
      intake_left.spin(directionType::rev, 100, velocityUnits::pct);
      intake_right.spin(directionType::rev, 100, velocityUnits::pct);
    }
    else{
      //nothing needed in else but it just makes the code look a bit cleaner
    }
    task::sleep(10);
  }
}

void conveyorToggle(){
  while(true){
      if (Controller1.ButtonL2.pressing()) {
      conveyor_left.spin(fwd, 100, velocityUnits::pct);
      conveyor_right.spin(fwd, 100, velocityUnits::pct);
    } 
    else if (Controller1.ButtonL1.pressing()) {
      conveyor_left.spin(directionType::rev, 100, velocityUnits::pct);
      conveyor_right.spin(directionType::rev, 100, velocityUnits::pct);
    }
    else{
      //nothing needed in else but it just makes the code look a bit cleaner
    }
    task::sleep(10);
  }
}
