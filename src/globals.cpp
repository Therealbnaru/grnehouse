#include "globals.hpp"
#include "main.h"

pros::Motor intake(-4, pros::v5::MotorGears::green); // Motor is a reversed green motor on port 4
pros::Motor hood(16, pros::v5::MotorGears::blue); // Motor is a normal blue motor on port 16
pros::Motor hopper(18, pros::v5::MotorGears::green); // Motor is a normal green motor on port 10

//Pneumatics
pros::adi::Pneumatics matchLoads('A', true); // Starts clamp in the false (Down) position when the code starts in port A
pros::adi::Pneumatics hoodP('B', false); // Starts tipper in the false (Down) position when the code starts in port A
pros::adi::Pneumatics odomPull('C', true); // Starts clamp in the false (Down) position when the code starts in port A
pros::adi::Pneumatics redirect('H', true);
//Sensors
int alliance = 1; // Default alliance is 1 which is red