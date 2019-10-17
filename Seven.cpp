#include "Euler.h"
#include <iostream>

int primecounter() {
	int total = 1, status = 0, prime;

	while (total != 10001) {
		for (int i = 2; ; i++) {
			for (int j = 2; j < i; j++) {
				if (i % j == 0) {
					break;
				}
				else if (j == i - 1) {
					total++;
					status = 1;
					if (total == 10001) {
						std::cout << i;
						//int z = i++; local scope
					}
					break;
				}

			}
		}
		/*if (status == 1) {
			break;
		}*/
		//std::cout << "goo   " << z;
	}


	return 0;
}