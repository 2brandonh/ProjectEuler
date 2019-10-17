#include "Euler.h"
#include <iostream>

int six() {
	int a = 1, c = 0;
	int squared, summed;

	for (int i = 1; i <= 100; i++) {
		c += a;
		a += 1;
	}

	summed = c * c;

	a = 0, c = 0;
	for (int i = 1; i <= 100; i++) {
		a = i;
		a = a * a;
		c += a;
	}

	squared = c;

	std::cout << summed - squared;
	return 0;
}