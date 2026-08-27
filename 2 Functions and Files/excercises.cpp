#include <iostream>


int getIntFromConsole()
{
    int num;
    std::cin >> num;
    return num; 
}

//#4 from 2.4
//Simply returns doubled integer 
int doubleNumber(int num)
{
    return num * 2;
}


int main()
{
    std::cout << "Enter an integer: ";
    int num = getIntFromConsole();

    std::cout << "Doubled int: "<< doubleNumber(num) << "\n";

    return 0;
}
