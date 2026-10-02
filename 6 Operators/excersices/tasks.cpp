#include "tasks.h"
#include <helpers.h>
#include <iostream>

constexpr bool isEven(int value)
{
    //return value % 2 == 0;

    //Modification for it to use logical NOT
    //So, for even number x, x % 2 is 0
    //To return true, we negate the result
    return !(value % 2);
}

void isEvenOrOddProgram()
{
    int value {getIntFromConsole("Enter an integer: ")};

    if(isEven(value))
        std::cout << value << " is even\n";
    else
        std::cout << value << " is odd\n";
}


std::string_view getQuantityPhrase(int quantity)
{
    if (quantity < 0)
        return "negative";
    else if (quantity == 0)
        return "no";
    else if (quantity == 1)
        return "a single";
    else if (quantity == 2)
        return "a couple of";
    else if (quantity == 3)
        return "a few";
    else
        return "many";
}

std::string_view getApplesPluralized(int quantity)
{
    return quantity == 1? "apple" : "apples";
}

void quantityAndPluralizedProgram()
{
    constexpr int maryApples {3};
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << " " << getApplesPluralized(maryApples) << ".\n";

    int numApples {getIntFromConsole("How many apples do you have? ")};

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";
}
