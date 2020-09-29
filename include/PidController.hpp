/**
 * @file PidController.hpp
 * @brief Header file for PID class.
 * @Created on: Sep 24, 2020
 * @copyright 2020. All rights reserved
 * @Author Part 1: Divyam Garg (Driver),   Pradeep Gopal (Navigator)
 * @Author Part 2: Aditya Goswami (Driver),   Loic Barret (Navigator)
 */
#pragma once

#include<iostream>

/**
 * The PIDController class has variables for each of the term as well as time
 * interval and error variables. It has the method to implement PID controller to achieve the 
 * desired goal and methods to get the error variables and time interval. 
 */
class PidController {
    // Contains private data members
 private:
    float Kp, Ki, Kd;

    // Contains public data members
 public:
    double desiredVel, currentVel;

  /**
   * @brief Default PID Constructor
   * @param none
   * @return none
   */      
    PidController();

  /**
   * @brief setter function to set the values of gains
   * @param none
   * @return none
   */ 
    void setValues();
  /**
   * @brief getter function to proportion gain (Kp)
   * @param none
   * @return none
   */ 
    double getPropotionalGain();
  /**
   * @brief getter function to proportion gain (Ki)
   * @param none
   * @return none
   */     
    double getTotalGain();
  /**
   * @brief getter function to proportion gain (Kd)
   * @param none
   * @return none
   */ 
    double getLastGain();
  /**
   * @brief function to set velocity value
   * @param Target Velocity and Actual Velocity
   * @return none
   */ 
    void setVelocity(double desiredVel, double currentVel);
/**
 * @brief This function to implement the error formula for the PID controller.
 * @param[1] TargetVelocity, which is the target velocity
 * @param[2] InputVelocitu, which is the acutal velocity
 * @param[3] PreviousError This is the error from the previous instance at which
 *                  PID controller error was calculated.
 * @return Control Error of data type double which is converted to current velocity.
 */
    double runController();
};
