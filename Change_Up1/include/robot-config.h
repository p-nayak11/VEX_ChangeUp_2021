using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor left_top;
extern motor left_bottom;
extern motor right_top;
extern motor right_bottom;
extern motor conveyor_left;
extern motor conveyor_right;
extern motor intake_left;
extern motor intake_right;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );