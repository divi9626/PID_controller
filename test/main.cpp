/**
 * @defgroup   TEST test
 *
 * @brief      This file testing of the program.
 * @copyright Copyright 2020 Divyam Garg. All rights reserved
 * @author     Divyam
 * @date       2020
 */
#include <gtest/gtest.h>

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
