#include <iostream>
#include <bitset>
#include <cinttypes> 
#include <typeinfo>
#include "Functions.h"


int main()
{
    //std::cout << std::bitset<32>(to_bytes(std::numeric_limits<float>::min()))
    //    << std::endl;
    std::cout << minimum(NAN, 1.F) << std::endl;
    std::cout << minimum(NAN, NAN) << std::endl;
    std::cout << minimum(67.9898F, NAN) << std::endl;
    std::cout << minimum(std::numeric_limits<float>::min(), 0.F) << std::endl;
    std::cout << minimum(std::numeric_limits<float>::infinity(), 878678.F) << std::endl;
    std::cout << minimum(-0.F, 0.F) << std::endl << std::endl;

    std::cout << std::min(NAN, 1.F) << std::endl;
    std::cout << std::min(NAN, NAN) << std::endl;
    std::cout << std::min(67.9898F, NAN) << std::endl;
    std::cout << std::min(std::numeric_limits<float>::min(), 0.F) << std::endl;
    std::cout << std::min(std::numeric_limits<float>::infinity(), 878678.F) << std::endl;
    std::cout << std::max(-0.F, 0.F) << std::endl;


    //std::bitset<32> bit_value(~to_bytes(42.F));
    //std::numeric_limits<float>::infinity()
    //std::numeric_limits<double>::quiet_NaN()
    //std::numeric_limits<double>::max()
    
    //std::cout << typeid(~bit_value &= 0b01111111'10000000'00000000'00000000).name() << std::endl;

    //std::cout << classify(1.0) << std::endl;
    std::cout << maximum(0.F, 12.F) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::infinity()) << std::endl;
    //std::cout << absolute(0.0) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::min() / 2.0) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::max()) << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
