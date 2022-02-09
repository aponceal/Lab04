// Lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int number;
    int sum = 1;
    std::cout << "Enter a number: ";
    std::cin >> number;
    if (number <= 0) {
        std::cout << "Only positive integers are allowed";
    }
    else {
        std::cout << "I'm going to calculate the factorial of " << number << std::endl;
        for (int i = 1; i <= number; i = i + 1) {
            sum = sum * i;
        }
        std::cout << number << "! = ";
        int repeat = 1;
        while (repeat < number) {
            std::cout << repeat << " * ";
            repeat = repeat + 1;
        }
        std::cout <<number << " = " << sum;

    }
}


