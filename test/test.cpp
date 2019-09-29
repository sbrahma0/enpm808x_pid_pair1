/*!
 *  @author 	part1: Sayan Brahma(driver) Akwashi a Obeng(navigator)
 *  @file  		Test file - test.cpp
 *  @brief 		This is the test file in the test folder which contains the test cases
 *  @copyright  Sayan Brahma and Akwashi a Obeng- part1
 *
 */

#include <gtest/gtest.h>
#include "../include/pid_controller.hpp"

pidController ob(1.0, 0.0, 0.0, 1.0);  // object creation
pidController ob1(0.0, 0.0, 0.0, 1.0);  // object creation
pidController ob2(-1.0, -1.0, -1.0, 1.0);  // object creation
pidController ob3(1.0, 1.0, 1.0, -1.0);  // object creation



/**
 * @brief This is the kp test i.e., it is only a proportional controller with all the parameters set to 0
 */

TEST(kptest, should_pass) {
  EXPECT_DOUBLE_EQ(ob.compute(12, 10), 2.0);
}
/**
 * @brief This is the zero test i.e., when all the parameters are zero then the final value should be 0
 */

TEST(zerotest, should_pass) {
  EXPECT_DOUBLE_EQ(ob1.compute(12, 10), 0.0);
}

/**
 * @brief This is the negative test i.e., when all the parameters are -ve then the final value should be -ve
 */

TEST(negativetest, should_pass) {
  EXPECT_DOUBLE_EQ(ob2.compute(12, 10), -6.0);
}

/**
 * @brief This is the dttest i.e., when all the parameters are set to some value but the dt is less than 0
 */

TEST(dttest, should_pass) {
  EXPECT_DOUBLE_EQ(ob3.compute(12, 10), 0.0);
}


