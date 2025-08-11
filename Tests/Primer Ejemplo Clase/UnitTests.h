#pragma once
#pragma once
#include <iostream>
#include <string>
using namespace std;

void assertEquals(double a, double b) {
    double error = 0.002;
    double difference = a - b;
    if (abs(difference) < error) {
        cout << "Assert Pass :)" << endl;
    }
    else {
        cout << "Assert Fail - expected: " << a << " obtained: " << b << endl;
    }
}

template<class T>
void assertEquals(T a, T b) {
    if (a == b) {
        cout << "Assert Pass :)" << endl;
    }
    else {
        cout << "Assert Fail - expected: " << a << " obtained: " << b << endl;
    }
}

void assertTrue(bool value) {
    if (value) {
        cout << "Assert Pass :)" << endl;
    }
    else {
        cout << "Assert Fail - value: " << value << " should be true" << endl;
    }
}

void assertFalse(bool value) {
    assertTrue(!value);
}