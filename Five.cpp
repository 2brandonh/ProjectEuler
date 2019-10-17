#include "Euler.h"
#include <iostream>

int five() {
	int status = 0;
	for (int i = 20; ; i++) {
		for (int a = 1; a <= 20; a++) {
			if (i % a != 0) {
				break;
			}
			else if(a == 20){
				std::cout << i;
				status = 1;
				break;
			}
		}
		if (status == 1) {
			break;
		}
	}
	return 0;

}