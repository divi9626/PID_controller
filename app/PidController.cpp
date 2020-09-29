/**
 * @file PidController.cpp
 * @version 1.0
 * @brief This file populates PidController class.
 * @Created on: Sep 24, 2020
 * @copyright 2020. All rights reserved
 * @Author Divyam Garg (Driver),  Pradeep Gopal (Navigator)
 */

// user defined header file
#include "PidController.hpp"
#include <unistd.h>

// C++ header files
#include <iostream>

/**
 * @brief PidController constructor
 * @param none
 * @return none
 */
PidController::PidController()
    : Kp(0),
      Ki(0),
      Kd(0),
      desiredVel(0),
      currentVel(0) {
}

/**
 * @brief PidController destructor
 * @param none
 * @return none
 */
// PidController::~PidController() {
  
// }
 /**
 * @brief This function sets the gain values for the PID controller.
 */
void PidController::setValues() {
  
  Kp = 0.2;
  Ki = 0.2;
  Kd = 0.2; 
}
/**
 * @brief      Next three functions return values of KP, Ki and Kd
 * @param      none
 * @return     The propotional gain.
 * @return     The total gain
 * @return     The last gain
 */
double PidController::getPropotionalGain() {
  return Kp;
}
double PidController::getTotalGain() {
  return Ki;
}
double PidController::getLastGain() {
  return Kd;
}
/**
 * @brief This function sets the velocities.
 * @param desiredVel is the desired velocity 
 * @param currentVel is the current velocity 
 */
void PidController::setVelocity(double desiredVel, double currentVel) {
  
  this->desiredVel = desiredVel;
  this->currentVel = currentVel;
}
/**
 * @brief This function implements the error formula for the PID controller
 * for a given fixed point and the input. This is calculated at a particular
 * time instant. It outputs the new velocity and the control error.
 * @param TargetVelocity This is the target velocity to be tracked by the controller.
 * @param InputVelocity This is the input velocity.
 * @param PreviousError This is the error from the previous instance at which
 *                  PID controller error was calculated.
 * @return Control Error of data type double which is converted to current velocity.
 */
double PidController::runController() {
  std::cout << "New Velocity is " << std::endl; 
  double P, I, D;
  double input = 0;
  double prev_error = 0;
  double error = 0;
  double total_gain = 0;
  double current_error = 0;
  double total_error = current_error; 

  while(currentVel <= desiredVel){
    prev_error = current_error;
    error = (desiredVel - currentVel);
    current_error = error;

    if (total_error > error || total_error == 0){
      total_error = 0;
    }
    else {
      total_error = total_error + current_error;
    }
    P = Kp * error;
    I = Ki * total_error;
    D = Kd * (current_error - prev_error);
    total_gain = P + I + D;
    input = total_gain;
    currentVel = input + currentVel;
    if (error <= 0.01){
      break;
    }
    usleep(200000);
  }
  return currentVel;
}
