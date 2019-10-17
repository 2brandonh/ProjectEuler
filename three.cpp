#include "Euler.h"
#include <iostream>

int n = 0;
int factors[52];
int i = 2;

void factorization(long long y) {
		if (y >= i * i) {

			if (y % i == 0){
				y = y / i;
				factors[n] = i;
				n++;
				factorization(y);
			}
			else {
				i++;
				factorization(y);
			}
		}
		else {
			factors[n] = y;
			n++;

			for (int j = 0; j < n; j++) {
				std::cout << factors[j] << "  ";
		}
	} 
}


//600851475143