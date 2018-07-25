/*
 * Calculator_test.cpp
 *
 *  Created on: Jul 25, 2018
 *      Author: szymon
 */

#include "../Calculator.hh"
#include <gmock/gmock.h>
#include <gmock/internal/gmock-internal-utils.h>
#include <gtest/internal/gtest-internal.h>

class Calculator_test : public ::testing::Test
{
public:
	Calculator_test() : mTestObject() {
	}
	Calculator mTestObject;
};

TEST_F(Calculator_test, Add_2_and_3_should_be_5){
	int result = mTestObject.AddNumbers(2,3);
	ASSERT_EQ(result, 5);
}

TEST_F(Calculator_test, Substract_5_and_1_should_be_4){
	int result = mTestObject.SubstractNumbers(5,1);
	ASSERT_EQ(result, 4);
}

TEST_F(Calculator_test, Multiple_3_and_4_should_be_12){
	int result = mTestObject.MultipleNumbers(3,4);
	ASSERT_EQ(result, 12);
}

TEST_F(Calculator_test, Divide_8_and_2_should_be_4){
	int result = mTestObject.DivideNumbers(8,2);
	ASSERT_EQ(result, 4);
}

TEST_F(Calculator_test, Divisor_0_should_be_false){;
	ASSERT_FALSE(mTestObject.CheckIfDivisorNotZero(0));
}
