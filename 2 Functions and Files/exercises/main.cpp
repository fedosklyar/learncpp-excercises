//This file contains the exercises to the summary section
//The first requirement was to write it in the single file, called main.cpp
//#include <iostream>
#include "io.h"

// int readNumber();
// void writeAnswer(int value);


int main()
{
    int firstValue {readNumber()};
    int secondValue {readNumber()};

    writeAnswer(firstValue + secondValue);

    return 0;
}
