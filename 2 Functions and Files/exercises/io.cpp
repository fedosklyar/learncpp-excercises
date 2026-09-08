#include <iostream>
#include "io.h"


int readNumber()
{
    int input;
    
    std::cout << "Enter an integer:";
    std::cin >> input;
    return input;
}

void writeAnswer(int value)
{
    std::cout << "The result is: " << value << "\n";
}
