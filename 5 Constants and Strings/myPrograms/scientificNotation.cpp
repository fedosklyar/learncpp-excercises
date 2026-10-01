#include "scientificNotation.h"
#include <string>
#include <iostream>

void transformToScientificNotation(std::string_view value)
{
    //For now we will assume, that the value is the correct double
    int power {};
    int significant {};
    bool isNegative = false;
    //bool avoidFrontZeros = true; 

    //Decide, whether the |value| > 1 or not
    //For that, we need to check the first symbol

    //Should I assess the case for the number, which already satisfies the scientific notation?
    //which is in the range of [1; 10)

    //Firstly, we check the value for being negative
    //If it is so, we store the info about that and getting rid of the '-' sign
    //We will simply display it in the end after the whole processing
    if(value[0] == '-')
    {
        isNegative = true;
        value.remove_prefix(1);
    }

    //For the correct double, if the 1st symbol is 0 
    //We ignore the zeros before the first natural; get rid of them
    if(value[0] == '0')
    {
        //We have at least one '0' before the meaningful
        --power;

        //skip the 1st '0' and '.'
        //'.' is guaranteed to be the 2nd character, I think
        value.remove_prefix(2);
        
        while(value[0] == '0')
        {
            --power;
            value.remove_prefix(1);
        }

        //Now, we have the value in the format xyyyyy, where x is the number in the range of [1;9]
        //and the following numbers will go after '.', which is to be added
        
        //The string is in the best state for the significant assessment
        significant = static_cast<int>(value.length());
        
        
        //if we have the one-digit value in the end, there is no '.' to add
        if(value.length() == 1)
        {
            displayInScientificNotation(value, significant, power, isNegative);
            return;
        }

        std::string scientific {value};
        //The dot is the 2nd character 
        scientific.insert(1, ".");

        displayInScientificNotation(scientific, significant, power, isNegative);
    }

    //We have the [value] > 1, which means, there is no 0s in front to ignore
    //Just move the dot to the left
    //There could be no dot at all, actually
    //To treat those value uniformly, probably, I should check the presence of the dot
    //and remove it, if it is here and preserve the index of it
    //it will impact on how we will iterate throug the number
    //or, there is no iteration to do, but just to measure the amount of
    //digits and (-re)position the dot
    else
    {
        std::string stringToModify {value};

        //we can determine the significant immediately 
        //nope, we need to ensure that the dot is not the part of the string
        //significant = static_cast<int>(value.length());
        
        size_t dotIndex = stringToModify.find(".");
        
        if(dotIndex != std::string::npos)
        {
            //So,the value is float. Get rid of dot
            stringToModify.erase(dotIndex, 1);

            //Let us find the power value
            power = static_cast<int>(dotIndex - 1);
        }
        else
        {
            power = static_cast<int>(value.length() - 1);
            
            //Let's get rid of potential trailing zeros
            size_t last = value.length() - 1;

            while(value[last] == '0')
            {
                //get rid of '0' and update the last_index
                value.remove_suffix(1);
                last = value.length() - 1;
            }

            if(value.length() == 1)
            {
                //The significant is guaranteed to be 1
                displayInScientificNotation(value, 1, power, isNegative);
                return;
            }

            stringToModify = value;
        }
        
        significant = static_cast<int>(stringToModify.length());

        //put the dot back or create it
        stringToModify.insert(1, ".");

        displayInScientificNotation(stringToModify, significant, power, isNegative);
    }
    
}


void displayInScientificNotation(std::string_view value, int significant, int power, bool isNegative)
{
    std::cout   << "The value in scentific notation is: ";

    //Display the '-' sign, if the value is negative
    if(isNegative)
        std::cout << "-";

    std::cout   << value << "e" << power <<"\n"
                <<"The significant part is: " << significant << "\n"; 
}
