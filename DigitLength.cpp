#include "Euler.h"
#include <iostream>
#include <stdio.h>     
#include <math.h>

int DigitLength::Length(int x) {
	int lengthCount = 0;
	for (x; x != 0; x /= 10, lengthCount++) {
	}
	return lengthCount;
}

int DigitLength::Digit(int digit, int num) {
	int rem = 0;
	int length = Length(num);
	int j = length - digit;

	for (int i = 0; i <= j; i++) {
		rem = num % 10;
		num = num / 10;
	}
	return rem;
}


