#include <iostream>
#include "Euler.h"

int Four::Palindrome() {
	int ctemp, c = 0;
	int a2, b2;

	for (int a = 100; a <= 999; a++) {
		for (int b = 100; b <= 999; b++) {
			ctemp = a * b;
			if (Checker(ctemp) && ctemp > c) {
				c = ctemp;
				a2 = a;
				b2 = b;
			}
		}
	}
	std::cout << a2 << "  " << b2 << "  ";
	return c;
}


bool Four::Checker(int num) {
	DigitLength tool;
	int length = tool.Length(num) / 2;

	for (int i = 0; i <= length; i++) {
		if (tool.Digit(i + 1, num) != tool.Digit(tool.Length(num) - i, num)) {
			return false;
			break;
		}
	}
	return true;

}

bool Four::BetterChecker(int num) {
	int new_num, digit = 0;
	int rev = 0;
	new_num = num;

	do
	{
		digit = num % 10;
		rev = (rev * 10) + digit;
		num = num / 10;
	} while (num != 0);

	if (rev == new_num) {
		return true;
	}
	else {
		return false;
	}
}

