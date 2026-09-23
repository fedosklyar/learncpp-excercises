#include "scientificNotation.h"
#include "tasks.h"
#include <iostream>

void displayInScientificNotation(double value)
{
    //firstly, we need to get to know, what kind of value are we dealing with
    int ePower = 0;
    bool isPowerPositive = true;
    double initialValue = value;

    if(abs(value) >= 1 && abs(value) <= 10 || value == 0)
    {
        std::cout << "The value: " << value << " already satisfies scientific notation" << "\n";
        return;
    }
    else if (abs(value) < 1)
    {
        isPowerPositive = false;
        while(abs(value) < 1)
        {
            value *= 10;
            ++ePower;
        }
    }
    else
    {
        while (abs(value) >= 10)
        {
            value /= 10;
            ++ePower;
        }
    }
    
    //There the modification of the display could be used, because a number
    //with a big floating point part is represented in scientific notation by default then
    std::cout   << "The initial value '" <<initialValue << "' in scientific notation: "
                << value << "e";
    
    if(!isPowerPositive)
        std::cout << "-";
    
    std::cout << ePower << "\n";
} 

// double getDoubleFromConsole()
// {
//     double input;
//     std::cout << "Enter the value: ";
//     std::cin >> input;
//     return input;
// }
