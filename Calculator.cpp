/*
 * Calculator.cpp
 *
 *  Created on: Jul 25, 2018
 *      Author: szymon
 */

#include "Calculator.hh"

Calculator::Calculator() {
	// TODO Auto-generated constructor stub

}

Calculator::~Calculator() {
	// TODO Auto-generated destructor stub
}

int Calculator::AddNumbers(int first, int second){
	int result = first + second;
	return result;
}

int Calculator::MultipleNumbers(int first, int second){
	int result = first * second;
	return result;
}

float Calculator::DivideNumbers(int first, int second){
	float result = first/second;
	return result;
}

int Calculator::SubstractNumbers(int first, int second){
	int result = first - second;
	return result;
}

bool Calculator::CheckIfDivisorNotZero(int number){
	if (number) return true;
	else return false;
}
