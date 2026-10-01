#include "simpleCalculator.h"
#include <helpers.h>
#include <iostream>
#include <math.h>

void calculator()
{
    displayTask();
    double x {getDoubleFromConsole("")};
    char operation {getCharFromConsole("")};
    double y {getDoubleFromConsole("")};

    if(!isValidOperation(operation))
    {
        std::cout << "The expression: " ; displayExpression(x, operation, y);
        std::cout << " is invalid, because the operation '" << operation << " is not allowed\n"; 
    }

    else
    {
        double result = doCalculation(x, operation, y);
        displayExpression(x, operation, y);
        displayResult(result);
    }
}

void displayTask()
{
    std::cout << "=======This is the simple calculator=======" << "\n";
    std::cout << "Enter the expression in the following format" << "\n";
    std::cout << "(x op y), where x and y are double values;" << "\n";
    std::cout << "op - the operation from the list ('+','-','*','/','^2','^3')" << "\n";
    std::cout << "============================================================" << "\n\n\n";

    std::cout << "Enter the expression: ";
}

void displayExpression(double x, char operation, double y)
{
    if(operation != '^')
        std::cout << x << " " << operation << " " << y;
    else
        std::cout << x << operation << y;
}

bool isValidOperation(char operation)
{
    return  operation == '+' ||
            operation == '-' ||
            operation == '*' ||
            operation == '/' ||
            operation == '^'
    ;
}

double doCalculation(double x, char operation, double y)
{
    if(operation == '+')
        return x + y;
    else if(operation == '-')
        return x - y;
    else if(operation == '*')
        return x * y;
    else if(operation == '/')
        return x / y;
    else
        return pow(x, y);
}

void displayResult(double  result)
{
    std::cout << " = " << result << "\n";
}
