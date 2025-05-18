// basic_math.cpp
#include "operations.h"
#include <iostream> // For potential error messages

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        std::cerr << "Error: Division by zero!\n";
        return 0; // Or handle the error as needed
    }
}