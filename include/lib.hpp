/**
 * @defgroup   LIB library
 *
 * @brief      This file implements library.
 *
 * @author     Divyam
 * @date       2020
 */
#pragma once

#include<iostream>
#include <unistd.h>

class PidController{
private:
	float Kp, Ki, Kd;

public:

	double desiredVel, currentVel;

	PidController();


	void setValues();


	void setVelocity(double desiredVel, double currentVel);


	double runController();


	~PidController();

};
