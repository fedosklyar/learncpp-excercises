#include "functions.h"
#include <iostream>


void menu()
{
    std::cout << "=======This is the simple calculator=======" << "\n";
    std::cout << "It shows the result of '+', '-', '*' and '/' for a pair of numbers" << "\n";
    std::cout << "And the square (x^2) of both numbers" << "\n";
    std::cout << "Viel Spaß!" << "\n";
    std::cout << "============================================================" << "\n";
}


double getDoubleFromConsole()
{
    double x;

    std::cout << "Enter the value:";
    std::cin >> x;
    return x;
}

void printResult(double x, double y)
{
    std::cout << x << " + " << y << " = " << x + y << "\n";
    std::cout << x << " - " << y << " = " << x - y << "\n";
    std::cout << x << " * " << y << " = " << x * y << "\n";
    std::cout << x << " / " << y << " = " << x / y << "\n";
    
    std::cout << x << "^2" << " = " << x * x << "\n";
    std::cout<< y << "^2" << " = " << y * y << "\n";
}

