#include <iostream>
#include <unistd.h>
#include <lib.hpp>


int main()
{
	double _desiredVel = 2.0;
	double _currentVel = 3.0;
	PidController pid;
	pid.setValues();
	pid.setVelocity(_desiredVel, _currentVel);
	pid.runController();
    return 0;
}
