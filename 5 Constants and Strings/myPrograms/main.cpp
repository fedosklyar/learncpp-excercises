#include "scientificNotation.h"
#include <helpers.h>

int main()
{
    std::string value {getStringFromConsole("Enter the double value: ")};

    transformToScientificNotation(value);

    return 0;
}
