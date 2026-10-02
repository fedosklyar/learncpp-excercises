#include <string_view>

constexpr bool isEven(int value);

//We will return only C-style strings, which should live for the whole lifecycle of the program
//Thus, we can make use of string_view instead of plain 'string' 
std::string_view getQuantityPhrase(int quantity);
std::string_view getApplesPluralized(int quantity);

void quantityAndPluralizedProgram();
void isEvenOrOddProgram();

