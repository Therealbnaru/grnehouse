#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"

extern pros::Motor intake;
extern pros::Motor hood;
extern pros::Motor hopper;



//pneumatics
extern pros::adi::Pneumatics matchLoads;
extern pros::adi::Pneumatics hoodP;
extern pros::adi::Pneumatics odomPull;
extern pros::adi::Pneumatics redirect;


//Sensors
extern pros::Optical optical_sensor;
extern pros::Rotation rotation_sensor;
extern pros::Distance distance_sensor;
extern pros::adi::DigitalIn limitSwitch;

//Variables
extern int alliance;
extern int team;