// Week2LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

bool isLeapYear(int year);

int main()
{
    int current;

    std::cout << "Enter the current year: ";
    std::cin >> current;

    if (isLeapYear(current)) {
        std::cout << current << " is a leap year." << std::endl;
    }
    else {
        std::cout << current << " is not a leap year." << std::endl;
    }
}

bool isLeapYear(int year) {
    if (year % 4 == 0) {

        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
            return false;
        }

        return true;

    }
    else {
        return false;
    }
}

