#include "scientificNotation.h"
#include "simpleCalculator.h"
#include <helpers.h>

int main()
{
    std::string value {getStringFromConsole("Enter the double value: ")};

    transformToScientificNotation(value);

    calculator();

    return 0;
}
