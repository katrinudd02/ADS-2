// Copyright 2022 NNTU-CS
#include <cstdint>
#include <cmath>
#include <iostream>
#include "alg.h"


using namespace std;


double pown(double value, uint16_t n) {

	return pow(value, n);

}

uint64_t fact(uint16_t n) {

	if (n <= 1) {
		return 1;
	} else {
		return n * fact(n - 1);
	}

}

double calcItem(double x, uint16_t n) {

	return (pown(x, n) / fact(n));

}

double expn(double x, uint16_t count) {

	int result_ex = 0;
	for (int n = 0; n < count; n++) {
		result_ex += pown(x, n) / fact(n);
	}
	return result_ex;

}

double sinn(double x, uint16_t count) {

	if (count == 1) {
		return x;
	}
	
	int result_sin = 0;
	for (int n = 0; n < count; n++) {
		result_sin += (pown(-1, n - 1)) * ((pown(x, 2 * n - 1)) / (fact(2 * n - 1)));
	}

	return result_sin;

}

double cosn(double x, uint16_t count) {

	int result_cos = 0;

	if (count == 1) {
		return x;
	}

	for (int n = 0; n < count; n++) {
		result_cos += (pown(-1, n - 1)) * ((pown(x, 2 * n - 1)) / (fact(2 * n - 2)));
	}

	return result_cos;

}
