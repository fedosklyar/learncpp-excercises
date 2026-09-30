#include <iostream>
#include <limits>
#include "helpers.h"

int getIntFromConsole(std::string_view message)
{
    int num;
    std::cout << message;
    std::cin >> num;
    return num; 
}

double getDoubleFromConsole(std::string_view message)
{
    double num;
    std::cout << message;
    std::cin >> num;
    return num;
}

char getCharFromConsole(std::string_view message)
{
    char symbol;
    std::cout << message;
    std::cin >> symbol;
    return symbol; 
}

std::string getStringFromConsole(std::string_view message)
{
    std::string input;
    std::cout << message;
    std::getline (std::cin >> std::ws, input);
    return input; 
}


void clearInputBuffer()
{
    std::cin.clear(); //resets the state
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //cleans the buffer
}
