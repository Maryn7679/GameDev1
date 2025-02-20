#include <cinttypes> 
#include "Functions.h"

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

const char *classify(float const value)
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
