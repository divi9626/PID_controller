/**
 * @defgroup   LIB library
 *
 * @brief      This file populates PidController class.
 * @Created on Sept 24th 2020
 * @author     Divyam
 * @date       2020
 * @copyright Copyright 2020. All rights reserved
 */

#include <iostream>
#include "PidController.hpp"

/**
 * @brief      Constructor initialises the variables
 */
PidController::PidController()
    : Kp(0),
      Ki(0),
      Kd(0),
      desiredVel(0),
      currentVel(0) {
  std::cout << "Constructor is called" << std::endl; }

PidController::~PidController() {
  std::cout << "Destructor is called" << std::endl; }
 /**
 * @brief This function sets the gain values for the PID controller.
 */
void PidController::setValues() {
  std::cout << "setValues function is called" << std::endl;
  Kp = 0.2;
  Ki = 0.2;
  Kd = 0.2; 
}
/**
 * @brief       Next three functions return values of KP, Ki and Kd
 *
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
  std::cout << "setVelocity function is called" << std::endl; 
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
  std::cout << "runController function is called" << std::endl; }
