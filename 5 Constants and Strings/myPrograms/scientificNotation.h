#pragma once
#include <string_view>

void transformToScientificNotation(std::string_view value);
void displayInScientificNotation(std::string_view value, int significant, int power);
