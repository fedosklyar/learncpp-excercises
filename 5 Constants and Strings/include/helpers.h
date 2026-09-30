#pragma once
#include <string>
#include <string_view>

//Input helpers
std::string getStringFromConsole(std::string_view message);
int getIntFromConsole(std::string_view message);
double getDoubleFromConsole(std::string_view message);
char getCharFromConsole(std::string_view message);

void clearInputBuffer();
