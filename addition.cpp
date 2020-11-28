// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on November 2020
// This program can do addition for two numbers

#include <iostream>

int main()  {
    // this function can do addition
    int firstNumber;
    int secondNumber;
    int sum;

    // input
    std::cout << "Enter the 1st number you want to add: " << std::endl;
    std::cin >> firstNumber;
    std::cout << "Enter the 2nd number you want to add: " << std::endl;
    std::cin >> secondNumber;

    // process
    sum = firstNumber + secondNumber;

    // output
    std::cout << "" << std::endl;
    std::cout << firstNumber << " + " << secondNumber << " = " << sum
              << std::endl;
}
