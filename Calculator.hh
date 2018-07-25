/*
 * calculator.hh
 *
 *  Created on: Jul 25, 2018
 *      Author: szymon
 */

#ifndef CALCULATOR_HH_
#define CALCULATOR_HH_

class Calculator {
public:
	Calculator();
	virtual ~Calculator();
	int AddNumbers(int first, int second);
	int MultipleNumbers(int first, int second);
	float DivideNumbers(int first, int second);
	int SubstractNumbers(int first, int second);
	bool CheckIfDivisorNotZero(int number);
};

#endif /* CALCULATOR_HH_ */
