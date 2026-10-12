#include <bitset>
#include <iostream>


std::bitset<4> rotl(std::bitset<4> bits)
{
    bool lastToOne {bits.test(3)};
    
    bits <<= 1;

    if(lastToOne)
        bits.set(0);

    return bits;
}

// Only using bitwise operators 
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> leftShift (bits << 1);
    std::bitset<4> leftMostCheck (bits >> 3);

    return leftShift | leftMostCheck;
}

int main()
{
    std::bitset<4> bits1 {0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2 {0b1001};
    std::cout << rotl(bits2) << '\n';

    return 0;
}
