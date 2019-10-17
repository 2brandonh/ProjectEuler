#include "Euler.h"
#include <iostream>
#include <stdio.h>     
#include <math.h>




//int a = 100;
//int b = 100;

//void Palindrome() {


//	return
//}

//bool Checker(int num) {
//	int length = Length(num);
//	for (int i = 0; i < Length(num); i++) {
//		if (Digit(i, num) != Digit(Length(num) - i - 1, num) {
//			return false;
//		}
//		else {
//			return true;
//		}
//}


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


