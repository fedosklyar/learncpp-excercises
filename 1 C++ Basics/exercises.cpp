#include <iostream>
using namespace std;


//Currently rather redundant, but in case of providing the validation totally makes sense
int getIntFromConsole()
{
    int temp;
    cin >> temp;
    return temp;
}

// the functions solves the question 2 of the lesson 1.5
void getThreeNumbersExercise()
{
    cout << "Enter three numbers: ";

    int x = getIntFromConsole();
    int y = getIntFromConsole();
    int z = getIntFromConsole();

    cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
}

//get the value, then print *2 and *3 of it
void printValueMultipliedByTwoAndThree()
{

    cout << "Enter an integer: ";
    int x = getIntFromConsole();
    
    cout << "Double " << x << " is: " << x * 2 << "\n";
    cout << "Triple " << x << " is: " << x * 3 << "\n";
}

void addAndSubtractTwoValues()
{
    cout << "Enter an integer: "; 
    int x = getIntFromConsole();

    cout << "Enter another integer: ";
    int y = getIntFromConsole();

    cout << x << " + " << y << " is " << x + y << ".\n";
    cout << x << " - " << y << " is " << x - y << ".\n";
}


int main()
{
    getThreeNumbersExercise();
    printValueMultipliedByTwoAndThree();
    addAndSubtractTwoValues();

    return 0;
}
