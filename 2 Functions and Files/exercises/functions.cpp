#include<iostream>
#include "functions.h"

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

int doMath(int first, int second, int third, int fourth)
{
    return first + second * third / fourth;
}
