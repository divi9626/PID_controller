/**
 * @defgroup   LIB library
 *
 * @brief      This file is the main function which instantiate the object and implemets the function.
 * @created on 24th Sept 2020
 * @author     Divyam Garg(driver) Pradeep Gopal(navigator) 
 * @date       2020
 * @copyright Copyright 2020. All rights reserved
 */
// c++ header file
#include <iostream>

// user defined header file for PID Controller
#include "PidController.hpp"

int main() {
  double actual_vel;
  PidController pid;
  pid.setValues();
  pid.setVelocity(100.0, 5.0);
  actual_vel = pid.runController();
  std::cout << actual_vel << std::endl;
  return 0;
}
