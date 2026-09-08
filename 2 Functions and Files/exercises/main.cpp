#include "io.h"

int main()
{
    int firstValue {readNumber()};
    int secondValue {readNumber()};

    writeAnswer(firstValue + secondValue);

    return 0;
}
