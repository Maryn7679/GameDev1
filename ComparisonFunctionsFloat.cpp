#include <cinttypes> 
#include "Functions.h"
#include <iostream>

float absolute(float value) {
    uint32_t bit_value(to_bytes(value));
    (bit_value <<= 1) >>= 1;
    return to_float(bit_value);
}

float maximum(float a, float b)
{
    if (is_nan(a) || is_nan(b)) { return a; }
    if (is_inf(a) || is_inf(b))
    {
        if (is_pos_inf(a)) return a;
        else return b;
    }
    if (is_zero(a) && is_zero(b)) return a;

    if (is_signed(a) && !is_signed(b)) { return b; }
    if (!is_signed(a) && is_signed(b)) { return a; }
    bool sign = is_signed(a);

    a = absolute(a);
    b = absolute(b);
    uint32_t bit_a(to_bytes(a));
    uint32_t bit_b(to_bytes(b));

    uint32_t mask;

    for (mask = 1 << 31; mask != 0; mask >>= 1) {

        if ((bit_a & mask) == (bit_b & mask)) {
            continue;
        }
        else {
            if ((bit_a & mask) && !sign) {
                return a;
            }
            return b;
        }
    }
    return a;
}

float minimum(float a, float b)
{
    if (is_nan(a) || is_nan(b)) { return a; }
    if (is_inf(a) || is_inf(b))
    {
        if (is_pos_inf(a)) return b;
        else return a;
    }
    if (is_zero(a) && is_zero(b)) return a;

    if (is_signed(a) && !is_signed(b)) { return a; }
    if (!is_signed(a) && is_signed(b)) { return b; }
    bool sign = is_signed(a);

    a = absolute(a);
    b = absolute(b);
    uint32_t bit_a(to_bytes(a));
    uint32_t bit_b(to_bytes(b));

    uint32_t mask;

    for (mask = 1 << 31; mask != 0; mask >>= 1) {

        if ((bit_a & mask) == (bit_b & mask)) {
            continue;
        }
        else {
            if ((bit_a & mask) && !sign) {
                return b;
            }
            return a;
        }
    }
    return a;
}

float clamp(float k, float a, float b)
{
    if (minimum(k, a) == k) {
        if (minimum(k, b) == k) return minimum(a, b);
        else return k;
    }
    else if (minimum(k, b) == k) return k;
    else return maximum(a, b);
}

bool are_equal(float a, float b) {
    if (minimum(a, b) == maximum(a, b)) return true;
    return false;
}

//bool are_equal_around(float a, float b, float precision) {
//
//}