#include <iostream>
using namespace std;

// the functions solves the question 2 of the lesson 1.5
void getThreeNumbersExercise()
{
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;
    cout << "You entered " << x << ", " << y << ", and " << z << ".\n";
}


int main()
{
    getThreeNumbersExercise();

    return 0;
}
