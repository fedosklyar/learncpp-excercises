//This is the first instance of the console calculator application
//After the meaningful advancement through the tutorial it will be extended
//with the other functionality. Here it simply takes 2 numbers and then
//perform several operations, making use of the inputs

#include <iostream>
using namespace std;

double getDoubleFromConsole()
{
    double x;
    cin >> x;
    return x;
}


int main()
{
    cout << "=======This is the simple calculator=======" << "\n";
    cout << "It shows the result of '+', '-', '*' and '/' for a pair of numbers" << "\n";
    cout << "And the square (x^2) of both numbers" << "\n";
    cout << "Viel Spaß!" << "\n";
    cout << "============================================================" << "\n";

    cout << "Enter the 1st number: ";
    double first = getDoubleFromConsole();

    cout << "Enter the 2nd number: ";
    double second = getDoubleFromConsole();

    cout << first << " + " << second << " = " << first + second << "\n";
    cout << first << " - " << second << " = " << first - second << "\n";
    cout << first << " * " << second << " = " << first * second << "\n";
    cout << first << " / " << second << " = " << first / second << "\n";
    
    cout << first << "^2" << " = " << first * first << "\n";
    cout << second << "^2" << " = " << second * second << "\n";

    return 0;
}
