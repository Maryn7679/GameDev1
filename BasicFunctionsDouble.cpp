#include <cinttypes> 
#include "Functions.h"

uint64_t to_bytes(double const value)
{
    return *(reinterpret_cast<uint64_t const*>(&value));// C++ implementation
}

double to_double(uint64_t const value)
{
    return *(reinterpret_cast<double const*>(&value));   // C++ implementation
}

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

const char *classify(double const value)
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
