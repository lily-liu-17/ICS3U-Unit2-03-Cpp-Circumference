// Copyright 2021
// Author: Lily Liu
// This program calculates the circumference using tau
// With user input

#include <iostream>

int main() {
    // this function calculates circumference
    const double TAU = 6.28;
    int radius;
    double circumference;

    // input
    std::cout << "Enter the radius of the circle (cm): ";
    std::cin >> radius;

    // process
    circumference = TAU*radius;

    // output
    std::cout << "The circumference is" << circumference << " cm." << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
