/**
 * @defgroup   LIB library
 *
 * @brief      This file is the main function which instantiate the object and implemets the function.
 *
 * @author     Divyam
 * @date       2020
 * @copyright Copyright 2020 Divyam Garg. All rights reserved
 */

#include <iostream>
#include <lib.hpp>

int main() {
  double _desiredVel = 2.0;
  double _currentVel = 3.0;
  PidController pid;
  pid.setValues();
  pid.setVelocity(_desiredVel, _currentVel);
  pid.runController();
  return 0;
}
