// main.cpp
#include <iostream>
#include "operations.h"

int main() {
    double num1, num2;
    char op;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << subtract(num1, num2) << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl;
            break;
        case '/':
            std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl;
            break;
        default:
            std::cout << "Invalid operator!" << std::endl;
    }

    return 0;
}