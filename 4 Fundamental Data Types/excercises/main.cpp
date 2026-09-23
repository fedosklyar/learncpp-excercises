#include <iostream>
#include "outputManipulation.h"
#include "tasks.h"
#include "scientificNotation.h"

int main()
{
    std::cout << "==============================Scientific notation==============================" << "\n";
    
    double scientificValue {getDoubleFromConsole("Enter the value: ")};
    displayInScientificNotation(scientificValue);

    std::cout << "==============================Display ASCII code==============================" << "\n";
    
    char symbol {getCharFromConsole("Enter a single character: ")};
    displayASCIIValueWithExplicitConversion(symbol);
    displayASCIIValueWithImplicitConversion(symbol);

    std::cout << "==============================Perform arithmetic==============================" << "\n";

    double x {getDoubleFromConsole("Enter a double value: ")};
    double y {getDoubleFromConsole("Enter a double value: ")};
    char op {getCharFromConsole("Enter +, -, *, or /: ")};

    displayResultForArithmetic(x, y, op);

    std::cout << "==============================Fall from the tower simulation==============================" << "\n";

    double height {getDoubleFromConsole("Enter the height of the tower in meters: ")};
    simulateTheFall(height);

    std::cout << "==============================Output manipulation part==============================" << "\n";
    bool b = enterBoolean();
    std::cout << "The value before change of display: " << b << "\n";
    
    changeBoolDisplay();

    clearInputBuffer();

    //allow to enter true and false for 'bool'
    std::cin >> std::boolalpha;

    b = enterBoolean();
    std::cout << "The value after change of display: " << b << "\n";

    std::cout << "==============================Actual tasks part==============================" << "\n";
    
    clearInputBuffer();

    int value {getIntFromConsole("Enter the value in the range (1;9): ")};
    
    if(isPrime(value))
        std::cout << "The value: " << value << " is prime" << "\n";
    else
        std::cout << "The value: " << value << " is not prime" << "\n";
}
