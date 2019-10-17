#include "Euler.h"

int two() {
	int first, second, temp, total_even;
	first = 1;
	second = 2;
	total_even = 0;

	while (total_even < 4000000) {
		temp = first + second;

		if (temp % 2 == 0) {
			total_even += temp;
		}
		first = second;
		second = temp;
	}

	total_even += 2;
	return total_even;
}
