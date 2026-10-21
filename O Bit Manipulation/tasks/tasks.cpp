#include "tasks.h"
#include <iostream>
#include <cstdint>

//The 1st variance of rotateLeft implementation, using 'test' and 'set' functions of bitset library
// std::bitset<4> rotl(std::bitset<4> bits)
// {
//     bool lastToOne {bits.test(3)};
    
//     bits <<= 1;

//     if(lastToOne)
//         bits.set(0);

//     return bits;
// }

// Only using bitwise operators 
std::bitset<4> rotl(std::bitset<4> bits)
{
    std::bitset<4> leftShift (bits << 1);
    std::bitset<4> leftMostCheck (bits >> 3);

    return leftShift | leftMostCheck;
}

void rotateLeftTask()
{
    std::bitset<4> bits1 {0b0001};
    std::cout << rotl(bits1) << '\n';

    std::bitset<4> bits2 {0b1001};
    std::cout << rotl(bits2) << '\n';
}

void articleTask()
{
    std::cout <<  "====================The Artcile Task====================\n";

    [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
    [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
    [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
    [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
    [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };
    std::cout << "The initial value is: " << std::bitset<8>{ myArticleFlags } << '\n';


    // Place all lines of code for the following quiz here
    
    //a. Make the article viewed
    myArticleFlags |= option_viewed;

    //b. Check that the article was deleted
    std::cout << "The article is ";

    //if we have 0, then the flag for deleted is 0
    //thefore, print add if the value is non-0, which in turn will mean that the article is not deleted 
    if (!(myArticleFlags & option_deleted))
        std::cout <<"not ";
    
    std::cout << "deleted\n";

    //c. Clear the favorite flag
    myArticleFlags &= ~option_favorited; //Should use static_cast here as well ideally

    //d. Extra credit: why are the following two lines identical?
    // myflags &= ~(option4 | option5); // turn options 4 and 5 off
    // myflags &= ~option4 & ~option5; // turn options 4 and 5 off
    
    //The answer
    //Because we deal with the De Morgan's law here, which says that we need to flip the
    //operation to the opposite one if we want to negate both arguments in the paranthesis
    //by making use of the leading negation operator

    std::cout << "The final value is: " << std::bitset<8>{ myArticleFlags } << '\n';
}
