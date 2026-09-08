#include "functions.h"
#include <iostream>

int main()
{
    menu();
    
    double x {getDoubleFromConsole()};
    double y {getDoubleFromConsole()};
    
    printResult(x, y);
    
    return 0;
}
