#include <iostream>
#include "outputManipulation.h"

void changeBoolDisplay()
{
    std::cout << "The 'true' value is printed as: " << true << " and the 'false' as: " << false << "\n";
    std::cout << std::boolalpha;
    std::cout << "The 'true' value is printed as: " << true << " and the 'false' as: " << false << "\n";
}

bool enterBoolean()
{
    bool b;
    std::cout << "Enter some boolean value: ";
    std::cin >> b;
    return b;
}

