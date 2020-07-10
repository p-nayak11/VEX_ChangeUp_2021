#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor left_top = motor(PORT1, ratio6_1, false);
motor left_bottom = motor(PORT5, ratio6_1, false);
motor right_top = motor(PORT20, ratio6_1, true);
motor right_bottom = motor(PORT15, ratio6_1, true);
motor conveyor_left = motor(PORT8, ratio6_1, false);
motor conveyor_right = motor(PORT12, ratio6_1, true);
motor intake_left = motor(PORT9, ratio18_1, false);
motor intake_right = motor(PORT11, ratio18_1, true);
controller Controller1 = controller(primary);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}