/**
 * @defgroup   LIB library
 * 
 * @brief      This file implements class declaration.
 *
 * @author     Divyam
 * @date       2020
 * @copyright Copyright 2020 Divyam Garg. All rights reserved
 */
#pragma once

#include<iostream>


class PidController{
 private:
    float Kp, Ki, Kd;
 public:
    double desiredVel, currentVel;
    PidController();
    void setValues();
    double getPropotionalGain();
    double getTotalGain();
    double getLastGain();
    void setVelocity(double desiredVel, double currentVel);
    double runController();
    //~PidController();
};
