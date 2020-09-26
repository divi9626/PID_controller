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

TEST(test1, check) {
    EXPECT_EQ(1, 1)
}
