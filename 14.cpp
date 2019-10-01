#include <iostream>
#include <chrono> 

int counter, largest = 1, largest_chain = 1;
long long collatz[1000001];


void calc(long long n) {
	collatz[1] = 1;
	long long start = n;
	while ((collatz[n] == 0) && (n != 1)) {
		((n % 2) == 0) ? n /= 2 : n = (3 * n + 1);
		counter++;

		while (n > 1000000) { //need this because over 1,000,000 will not fit in array
			((n % 2) == 0) ? n /= 2 : n = (3 * n + 1);
			counter++;
		}
	}

	collatz[start] = counter + collatz[n];

	if (collatz[start] > largest_chain) {
		largest = start, largest_chain = collatz[start];
	}
}

//function needs to be declared before main

int main() {
	auto start = std::chrono::high_resolution_clock::now();

	for (int i = 2; i <= 1000000; i++) {
		counter = 0;
		calc(i);
	}

	auto finish = std::chrono::high_resolution_clock::now();

	std::cout << largest;

	std::chrono::duration<double> elapsed = finish - start;
	std::cout << "\n" << "Elapsed time: " << elapsed.count() << " s\n";
	return 0;
}

