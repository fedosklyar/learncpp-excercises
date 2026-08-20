#include <iostream>
#include <limits>
#include <fstream>
#include "nlohmann/json.hpp"

using namespace std;


const int numStandards = 7;
    
// The C++26 stdCode is a placeholder since the exact code won't be determined until the standard is finalized
const long stdCode[numStandards] = { 199711L, 201103L, 201402L, 201703L, 202002L, 202302L, 202612L};
const char* stdName[numStandards] = { "Pre-C++11", "C++11", "C++14", "C++17", "C++20", "C++23", "C++26" };



long getCPPStandard()
{

//Determines the mechanisms of fetching the standard`s version
#if defined (_MSVC_LANG)
    return _MSVC_LANG;
#elif defined (_MSC_VER)
    // If we're using an older version of Visual Studio, bail out
    return -1;
#else
    // __cplusplus is the intended way to query the language standard code (as defined by the language standards)
    return __cplusplus;
#endif
}

void printLanguageVersion()
{
    long standard = getCPPStandard();

    if (standard == -1)
    {
        cout<<"Error: Unable to determine your language standard. I am sorry for my country, sozusagen" << endl;
        return;
    }

    for(int i = 0; i < numStandards; i++)
    {
        if(standard == stdCode[i])
        {
            cout << "Your compiler is using " << stdName[i]
                << " (language standard code " << standard << "L)" << endl ;
            break;
        }

        //For the case of having an intermediate/not finalized version
        //The simple check for 'less' in enough
        if (standard < stdCode[i])
        {
            std::cout << "Your compiler is using a preview/pre-release of " << stdName[i]
                << " (language standard code " << standard << "L)\n";
            break;
        }
    }
}


void printHelloWorld()
{
    cout << "Hello world" << endl;
}

void handleClosing()
{
    cin.clear(); //reset any error flags
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); //Ignore all characters in the input buffer except a new line
    cin.get(); //Get one or more chars from the user 
}

void printWhetherNewLineInsertedInTheEnd()
{
    ifstream file(".vscode/settings.json");
    string message = "The feature of adding the new line to the end of a file is ";

    if(file)
    {
        //get the contents of the file
        auto contents = nlohmann::json::parse(file);
        
        //get the value at the specified key
        bool value = contents.at("files.insertFinalNewline").get<bool>();
        
        //define the extension`s contents
        string onOrOf = value == true ? "ON" : "OFF";
        
        cout << message + onOrOf << endl;
    }

    else
    {
        cout << "Failed to open the file stream" << endl;
    }
}

int main()
{
    printHelloWorld();
    printLanguageVersion();
    printWhetherNewLineInsertedInTheEnd();

    handleClosing();
    
    return 0;
}
