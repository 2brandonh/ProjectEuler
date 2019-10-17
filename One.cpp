#include "Euler.h"

int one() {
	int total, current;
	total = 0;

	for (int i = 1; i <= 333; i++) {
		current = 3 * i;
		total += current;
	}

	for (int i = 1; i <= 199; i++) {
		current = 5 * i;
		if ((current % 3) != 0) {
			total += current;
		}
	}

	return total;
}

