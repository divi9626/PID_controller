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

/**
 * This test checks the convergence
 */
TEST(test1, check_computing) {
    double actual_vel;
    pid.setValues();
    pid.setVelocity(100.0, 5.0);
    actual_vel = pid.runController();
    EXPECT_NEAR(actual_vel, 100.0, 0.1);
}

/**
 * This test checks the values of gain coeffecients
 */
TEST(test2, check_gains) {
    pid.setValues();
    ASSERT_FLOAT_EQ(pid.getPropotionalGain(), 0.2);
    ASSERT_FLOAT_EQ(pid.getTotalGain(), 0.2);
    ASSERT_FLOAT_EQ(pid.getLastGain(), 0.2);
}
