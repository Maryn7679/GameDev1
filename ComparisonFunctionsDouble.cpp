#include <cinttypes> 
#include "Functions.h"

double absolute(double value) {
    uint64_t bit_value(to_bytes(value));
    (bit_value <<= 1) >>= 1;
    return to_double(bit_value);
}

double maximum(double a, double b)
{
    if (is_nan(a) || is_nan(b)) { return a; }
    if (is_zero(a) && is_zero(b)) return a;

    if (is_signed(a) && !is_signed(b)) { return b; }
    if (!is_signed(a) && is_signed(b)) { return a; }

    if (is_inf(a) || is_inf(b))
    {
        if (is_pos_inf(a)) return a;
        else return b;
    }

    if (a - b > 0) { return a; }
    else return b;
}

double minimum(double a, double b)
{
    if (is_nan(a) || is_nan(b)) { return a; }
    if (is_zero(a) && is_zero(b)) return a;

    if (is_signed(a) && !is_signed(b)) { return a; }
    if (!is_signed(a) && is_signed(b)) { return b; }

    if (is_inf(a) || is_inf(b))
    {
        if (is_pos_inf(a)) return b;
        else return a;
    }
   
    if (a - b > 0) { return b; }
    else return a;
}

double clamp(double k, double a, double b)
{
    if (minimum(k, a) == k) {
        if (minimum(k, b) == k) return minimum(a, b);
        else return k;
    }
    else if (minimum(k, b) == k) return k;
    else return maximum(a, b);
}

bool are_equal(double a, double b) {
    if (minimum(a, b) == maximum(a, b)) return true;
    return false;
}

bool are_equal_around(double a, double b, double precision) {
    if (absolute(b - a) < precision) return true;
    else return false;
}

bool is_less_than(double a, double b) {
    if (are_equal(a, b)) return false;
    if (minimum(a, b) == a) return true;
    return false;
}

bool is_less_than_around(double a, double b, double precision) {
    if (are_equal_around(a, b, precision)) return false;
    if (minimum(a, b) == a) return true;
    return false;
}

bool is_greater_than(double a, double b) {
    if (are_equal(a, b)) return false;
    if (minimum(a, b) == b) return true;
    return false;
}

bool is_greater_than_around(double a, double b, double precision) {
    if (are_equal_around(a, b, precision)) return false;
    if (minimum(a, b) == b) return true;
    return false;
}
