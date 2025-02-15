#include <iostream>
#include <bitset>

#include <cinttypes> 

#include <iostream>
#include <typeinfo>

uint32_t to_bytes(float const value)
{
    return *(reinterpret_cast<uint32_t const*>(&value));// C++ implementation
}

float to_float(uint32_t const value)
{
    return *(reinterpret_cast<float const*>(&value));   // C++ implementation
}

bool is_finite(float const value)
{
    std::bitset<32> bit_value(to_bytes(value));

    if (std::bitset<32>(bit_value | std::bitset<32>(0b10000000'01111111'11111111'11111111)).all()) {

        if (bit_value[0] &&
            std::bitset<32>(bit_value & std::bitset<32>(0b00000000'01111111'11111111'11111111)).any()) {
            return true;
        }
        else return false;

    }
    else return true;
}

bool is_inf(float const value)
{
    std::bitset<32> bit_value(to_bytes(value));
    bit_value[0] = false;

    if (bit_value == std::bitset<32>(0b01111111'10000000'00000000'00000000)) {

        return true;

    }
    else return false;
}

int main()
{
    std::cout << std::bitset<32>(to_bytes(std::numeric_limits<float>::infinity()))
        << std::endl;

    //std::bitset<32> bit_value(~to_bytes(42.F));
   
    //std::cout << typeid(~bit_value &= 0b01111111'10000000'00000000'00000000).name() << std::endl;
    std::cout << is_inf(std::numeric_limits<float>::infinity()) << std::endl;
    std::cout << isinf(std::numeric_limits<float>::infinity()) << std::endl;

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
