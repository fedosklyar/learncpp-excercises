#include <iostream> //Should I include it here or in the header?
#include <helpers.h>
#include "tasks.h"

void nameLengthAndAgeTask()
{   
    //You can not do so, because the initializing value will be destroyed 
    //after the execution of the experession and thus will cause an undefined behavior
    //upon call to the 'name' object 
    // std::string_view name {getTheStringFromConsole("Enter your full name: ")};

    std::string name {getStringFromConsole("Enter your full name: ")};
    int age {getIntFromConsole("Enter your age: ")};
    std::cout << "Your age + length of name is: " << age + static_cast<int>(name.length()) << "\n"; 
}

void defineTheOlderOfTwo()
{
    //the 1st person
    std::string firstPerson {getStringFromConsole("Enter the name of person #1: ")};
    int ageFirst {getIntFromConsole("Enter the age of " + firstPerson + ": ")};

    //the 2nd person
    std::string secondPerson {getStringFromConsole("Enter the name of person #2: ")};
    int ageSecond {getIntFromConsole("Enter the age of " + secondPerson + ": ")};

    if(ageFirst > ageSecond)
    {
        std::cout   << firstPerson << " (age " << ageFirst << ") is older than "
                    << secondPerson << " (age " << ageSecond << ").\n";
    }
    else if(ageSecond > ageFirst)
    {
        std::cout   << secondPerson << " (age " << ageSecond << ") is older than "
                    << firstPerson << " (age " << ageFirst << ").\n";
    }
    else
        std::cout << "Both are of the same age\n";
    
    return;
}
