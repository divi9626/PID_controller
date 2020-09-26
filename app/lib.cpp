#include <iostream>
#include <unistd.h>
#include <lib.hpp>

PidController::PidController(){}

PidController::~PidController(){}

void PidController::setValues(){};

void PidController::setVelocity(double desiredVel, double currentVel){};

double PidController::runController(){
	return 0;
};
