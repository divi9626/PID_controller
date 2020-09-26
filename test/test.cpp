/**
 * @defgroup   TEST test
 *
 * @brief      This file testing of the program.
 * @copyright Copyright 2020 Divyam Garg. All rights reserved
 * @author     Divyam
 * @date       2020
 */
#include <gtest/gtest.h>
#include "PidController.hpp"

PidController pid;

TEST(test1, check_computing) {
    double actual_vel;
    pid.setValues();
    pid.setVelocity(100.0, 5.0);
    actual_vel = pid.runController();
    EXPECT_NEAR(actual_vel, 100.0, 0.1);
}
