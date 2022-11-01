// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in October 2022
// A program that finds if the chosen year is a leap year or not

#include <iostream>
#include <string>

int yearInt;

int main() {
    // finds if the chosen year is a leap year or not

    std::string year;
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << std::endl;
    try {
        yearInt = std::stoi(year);
        if (yearInt > 0) {
            if (yearInt % 4 == 0) {
                if (yearInt % 100 == 0) {
                    if (yearInt % 400 == 0) {
                        std::cout << yearInt << " is a leap year.";
                    } else {
                        std::cout << yearInt << " is a common year.";
                    }
                } else {
                    std::cout << yearInt << " is a leap year.";
                }
            } else {
                std::cout << yearInt << " is a common year.";
            }
        } else {
            std::cout << yearInt << " is not in the common era.";
        }
        std::cout << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "Error: " << year << " is not an integer.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
