#include <iostream>
#include <unistd.h>
#include <lib.hpp>

PidController::PidController(){
	std::cout << "Constructor is called" << std::endl;
}

PidController::~PidController(){
	std::cout << "Distructor is called" << std::endl;
}

void PidController::setValues(){
	std::cout << "setValues function is called" << std::endl;
}

void PidController::setVelocity(double desiredVel, double currentVel){
	std::cout << "setVelocity function is called" << std::endl;
}

double PidController::runController(){
	std::cout << "runController function is called" << std::endl;
	return 0;
}
