#include <iostream>
#include "functions.h"


int main()
{
    std::cout << "Enter an integer:";
    int num = getIntFromConsole();

    std::cout << "Doubled int: "<< doubleNumber(num) << "\n";

    return 0;
}
