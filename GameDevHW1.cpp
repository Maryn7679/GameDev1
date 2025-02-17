#include <iostream>
#include <bitset>

#include <cinttypes> 

#include <iostream>
#include <typeinfo>

uint32_t to_bytes(float const value)
{
    return *(reinterpret_cast<uint32_t const*>(&value));// C++ implementation
}

uint64_t to_bytes(double const value)
{
    return *(reinterpret_cast<uint64_t const*>(&value));// C++ implementation
}

float to_float(uint32_t const value)
{
    return *(reinterpret_cast<float const*>(&value));   // C++ implementation
}

double to_double(uint64_t const value)
{
    return *(reinterpret_cast<double const*>(&value));   // C++ implementation
}

bool is_finite(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (!~(bit_value | 0b10000000'01111111'11111111'11111111)) {
        if (bit_value >> 31 && (bit_value & 0b00000000'01111111'11111111'11111111)) {
            return true;
        }
        else return false;
    }
    else return true;
}

bool is_inf(float const value)
{
    uint32_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (bit_value == 0b11111111'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_pos_inf(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (bit_value == 0b01111111'10000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_neg_inf(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (bit_value == 0b11111111'10000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_zero(float const value)
{
    uint32_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (bit_value == 0b00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_pos_zero(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (bit_value == 0b00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_neg_zero(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (bit_value == 0b10000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_nan(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (bit_value >> 23 == 0b00000000'00000000'00000000'11111111) {

        if (bit_value << 9) {
            return true;
        }
        else return false;
    }
    else return false;
}

bool is_normal(float const value)
{
    uint32_t bit_value(to_bytes(value));

    if (!(bit_value & 0b01111111'10000000'00000000'00000000)) {
        return false;
    }
    if ((bit_value << 1) >> 24 == 0b00000000'00000000'00000000'11111111) {
        if (bit_value << 9 && !(bit_value >> 31)) {
            return false;
        }
        if (!(bit_value << 9)) {
            return false;
        }
    }
    return true;
}

bool is_subnormal(float const value)
{
    uint32_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (bit_value >> 24 == 0b00000000'00000000'00000000'00000000 && bit_value) {
        return true;
    }
    else return false;
}

bool is_signed(float const value)
{
    uint32_t bit_value(to_bytes(value));
    return bit_value >> 31;
}

auto classify(float const value)
{
    if (is_inf(value)) {
        return "Inf";
    }
    if (is_nan(value)) {
        return "NaN";
    }
    if (is_normal(value)) {
        return "normal";
    }
    if (is_subnormal(value)) {
        return "subnormal";
    }
    if (is_zero(value)) {
        return "zero";
    }
    else return "unknown";
}

// double

bool is_finite(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (!~(bit_value | 0b10000000'00001111'11111111'11111111'11111111'11111111'11111111'11111111)) {
        if (bit_value >> 63 && (bit_value & 0b00000000'00001111'11111111'11111111'11111111'11111111'11111111'11111111)) {
            return true;
        }
        else return false;
    }
    else return true;
}

bool is_inf(double const value)
{
    uint64_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (bit_value == 0b11111111'11100000'00000000'00000000'00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_pos_inf(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (bit_value == 0b01111111'11110000'00000000'00000000'00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_neg_inf(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (bit_value == 0b11111111'11110000'00000000'00000000'00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_zero(double const value)
{
    uint64_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (!(bit_value)) {

        return true;
    }
    else return false;
}

bool is_pos_zero(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (bit_value == 0b00000000'00000000'00000000'00000000'00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_neg_zero(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (bit_value == 0b10000000'00000000'00000000'00000000'00000000'00000000'00000000'00000000) {

        return true;
    }
    else return false;
}

bool is_nan(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (bit_value >> 52 == 0b00000000'00000000'00000000'00000000'00000000'00000000'00000111'11111111) {

        if (bit_value << 12) {
            return true;
        }
        else return false;
    }
    else return false;
}

bool is_normal(double const value)
{
    uint64_t bit_value(to_bytes(value));

    if (!(bit_value & 0b01111111'11110000'00000000'00000000'00000000'00000000'00000000'00000000)) {
        return false;
    }
    if ((bit_value << 1) >> 53 == 0b00000000'00000000'00000000'00000000'00000000'00000000'00000111'11111111) {
        if (bit_value << 12 && !(bit_value >> 63)) {
            return false;
        }
        if (!(bit_value << 12)) {
            return false;
        }
    }
    return true;
}

bool is_subnormal(double const value)
{
    uint64_t bit_value(to_bytes(value));
    bit_value <<= 1;

    if (bit_value >> 53 == 0b00000000'00000000'00000000'00000000'00000000'00000000'00000000'00000000 && bit_value) {
        return true;
    }
    else return false;
}

bool is_signed(double const value)
{
    uint64_t bit_value(to_bytes(value));
    return bit_value >> 63;
}

auto classify(double const value)
{
    if (is_inf(value)) {
        return "Inf";
    }
    if (is_nan(value)) {
        return "NaN";
    }
    if (is_normal(value)) {
        return "normal";
    }
    if (is_subnormal(value)) {
        return "subnormal";
    }
    if (is_zero(value)) {
        return "zero";
    }
    else return "unknown";
}


int main()
{
    //std::cout << std::bitset<32>(to_bytes(std::numeric_limits<double>::max()))
    //    << std::endl;

    //std::bitset<32> bit_value(~to_bytes(42.F));
    //std::numeric_limits<float>::infinity()
    //std::numeric_limits<double>::quiet_NaN()
    //std::numeric_limits<double>::max()
   
    //std::cout << typeid(~bit_value &= 0b01111111'10000000'00000000'00000000).name() << std::endl;
    std::cout << classify(1.0) << std::endl;
    std::cout << classify(std::numeric_limits<double>::quiet_NaN()) << std::endl;
    std::cout << classify(std::numeric_limits<double>::infinity()) << std::endl;
    std::cout << classify(0.0) << std::endl;
    std::cout << classify(std::numeric_limits<double>::min() / 2.0) << std::endl;
    std::cout << classify(std::numeric_limits<double>::max()) << std::endl;

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
