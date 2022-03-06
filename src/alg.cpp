// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return value;
    } else {
        return value * (pown(value, n - 1));
    }
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
    double result_ex = 1;
    for (int n = 0; n < count; n++) {
        result_ex += pown(x, n) / fact(n);
    }
    return result_ex;
}

double sinn(double x, uint16_t count) {
    if (count == 1) {
        return x;
    }
    double result_sin = 0;
    for (int n = 0; n < count; n++) {
        result_sin += (pown((-1), n - 1))*((pown(x, 2 * n - 1))
            /(fact(2 * n - 1)));
    }
    return result_sin;
}

double cosn(double x, uint16_t count) {
    double result_cos = 0;
    if (count == 1) {
        return x;
    }
    for (int n = 0; n < count; n++) {
        result_cos += (pown((-1), n - 1))*((pown(x, 2 * n - 2))
            /(fact(2 * n - 2)));
    }
    return result_cos;
}
