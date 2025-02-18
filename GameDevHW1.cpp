#include <iostream>
#include <bitset>
#include <cinttypes> 
#include <typeinfo>
#include "Functions.h"


int main()
{
    //std::cout << std::bitset<32>(to_bytes(10.F)) << std::endl;
    //std::cout << std::bitset<32>(to_bytes(1.F)) << std::endl;
    //std::cout << std::bitset<32>(to_bytes(0.1F)) << std::endl;
    //std::cout << std::bitset<32>(to_bytes(0.01F)) << std::endl;
    //std::cout << std::bitset<32>(to_bytes(0.001F)) << std::endl;
    uint64_t mask;
    //std::cout << std::bitset<64>(mask << 63) << std::endl;
    long long i = 1;
    for (mask = i << 63; mask != 0; mask >>= 1) {
        std::cout << std::bitset<64>(mask) << std::endl;
    }
    //std::cout << minimum(NAN, 1.F) << std::endl;
    //std::cout << minimum(NAN, NAN) << std::endl;
    //std::cout << minimum(67.9898F, NAN) << std::endl;
    //std::cout << minimum(std::numeric_limits<float>::min(), 0.F) << std::endl;
    //std::cout << minimum(std::numeric_limits<float>::infinity(), 878678.F) << std::endl;
    //std::cout << minimum(-0.F, 0.F) << std::endl << std::endl;

    //std::cout << std::min(NAN, 1.F) << std::endl;
    //std::cout << std::min(NAN, NAN) << std::endl;
    //std::cout << std::min(67.9898F, NAN) << std::endl;
    //std::cout << std::min(std::numeric_limits<float>::min(), 0.F) << std::endl;
    //std::cout << std::min(std::numeric_limits<float>::infinity(), 878678.F) << std::endl;
    //std::cout << std::max(-0.F, 0.F) << std::endl;


    //std::bitset<32> bit_value(~to_bytes(42.F));
    //std::numeric_limits<float>::infinity()
    //std::numeric_limits<double>::quiet_NaN()
    //std::numeric_limits<double>::max()
    
    //std::cout << typeid(~bit_value &= 0b01111111'10000000'00000000'00000000).name() << std::endl;

    //std::cout << classify(1.0) << std::endl;
    //std::cout << maximum(0.F, 12.F) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::infinity()) << std::endl;
    //std::cout << absolute(0.0) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::min() / 2.0) << std::endl;
    //std::cout << absolute(std::numeric_limits<double>::max()) << std::endl;

}
