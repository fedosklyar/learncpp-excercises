#include <iostream>
#include "functions.h"

//#2.7. Make use of forward declaration
// int getIntFromConsole();
// int doubleNumber(int num);
// int doMath(int first, int second, int third, int fourth);

int main()
{
    std::cout << "Enter an integer:";
    int num = getIntFromConsole();

    std::cout << "Doubled int: "<< doubleNumber(num) << "\n";

    return 0;
}


// int getIntFromConsole()
// {
//     int num;
//     std::cin >> num;
//     return num; 
// }

// //#4 from 2.4
// //Simply returns doubled integer 
// int doubleNumber(int num)
// {
//     return num * 2;
// }

// int doMath(int first, int second, int third, int fourth)
// {
//     return first + second * third / fourth;
// }
