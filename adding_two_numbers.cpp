// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: April 2021
// This program adds two inputted numbers

#include <iostream>

int main() {
    // This function adds two numbers
    float number_one;
    float number_two;
    float total;

    // Input
    std::cout << "This program adds two number.";
    std::cout << "Enter the first number: ";
    std::cin >> number_one;
    std::cout << "Enter the second number: ";
    std::cin >> number_two;

    // Process
    total = number_one + number_two;

    // Output
    std::cout << number_one << " + " << number_two << " = "<< total
    << "." << std::endl;
    std::cout << "\nDone." << std::endl;
}
