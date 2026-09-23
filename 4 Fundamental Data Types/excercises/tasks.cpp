#include "iostream"
#include "tasks.h"

int getIntFromConsole(const std::string& message)
{
    int num;
    std::cout << message;
    std::cin >> num;
    return num; 
}

double getDoubleFromConsole(const std::string& message)
{
    double num;
    std::cout << message;
    std::cin >> num;
    return num;
}

char getCharFromConsole(const std::string& message)
{
    char symbol;
    std::cout << message;
    std::cin >> symbol;
    return symbol; 
}


bool isPrime(int value)
{
    if(value == 2 || value == 3 || value == 5 || value == 7)
    {
        return true;
    }
    else if (value > 9 && value < 0)
        std::cout<<"The value " << value <<" violates the specified range" << "\n";
    
    return false;
}

void displayASCIIValueWithExplicitConversion(char symbol)
{
    std::cout <<"You entered '" << symbol << "', which has ASCII code " << static_cast<int>(symbol) << ".\n";
}

void displayASCIIValueWithImplicitConversion(char symbol)
{
    int ASCII = symbol;
    std::cout <<"You entered '" << symbol << "', which has ASCII code " << ASCII << ".\n";
}

void displayResultForArithmetic(double first, double second, char op)
{
    //Invalid operation
    if(op != '+' && op != '-' && op != '*' && op != '/')
        return;

    std::cout << first << " " << op <<  " " << second << " is ";

    if(op == '+')
        std::cout << first + second;
    else if(op == '-')
        std::cout << first - second;
    else if(op == '*')
        std::cout << first * second;
    else //we are left with the division
        std::cout << first / second;

    std::cout << "\n";
}

void simulateTheFall(double height)
{
    const double gravity = 9.8;
    
    calculateBallHeight(height, gravity, 0);
    calculateBallHeight(height, gravity, 1);
    calculateBallHeight(height, gravity, 2);
    calculateBallHeight(height, gravity, 3);
    calculateBallHeight(height, gravity, 4);
    calculateBallHeight(height, gravity, 5);
}

void calculateBallHeight(double height, double gravity, int seconds)
{
    double distanceFallen = gravity * seconds * seconds / 2;
    height -= distanceFallen;

    if(height < 0)
        std::cout << "At " << seconds << " seconds, the ball is on the ground\n";    
    else
        std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " meters\n";
}

void clearInputBuffer()
{
    std::cin.clear(); //resets the state
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //cleans the buffer
}
