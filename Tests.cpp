#include <iostream>
#include <cinttypes> 
#include "Functions.h"

void basic_float_tests() {
    if (is_finite(1.65F)) { std::cout << "is_finite(normal) == true: OK" << std::endl; }
    else { std::cout << "is_finite(normal) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<float>::min() / 2)) { std::cout << "is_finite(subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_finite(subnormal) == false: ERROR" << std::endl; }

    if (is_finite(0.F)) { std::cout << "is_finite(zero) == true: OK" << std::endl; }
    else { std::cout << "is_finite(zero) == false: ERROR" << std::endl; }

    if (is_finite(-0.F)) { std::cout << "is_finite(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_finite(-zero) == false: ERROR" << std::endl; }

    if (!is_finite(std::numeric_limits<float>::infinity())) { std::cout << "is_finite(inf) == false: OK" << std::endl; }
    else { std::cout << "is_finite(inf) == true: ERROR" << std::endl; }

    if (!is_finite(-std::numeric_limits<float>::infinity())) { std::cout << "is_finite(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_finite(-inf) == true: ERROR" << std::endl; }

    if (!is_finite(NAN)) { std::cout << "is_finite(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_finite(NaN) == true: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<float>::max())) { std::cout << "is_finite(max) == true: OK" << std::endl; }
    else { std::cout << "is_finite(max) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<float>::min())) { std::cout << "is_finite(min) == true: OK" << std::endl; }
    else { std::cout << "is_finite(min) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<float>::epsilon())) { std::cout << "is_finite(epsilon) == true: OK" << std::endl; }
    else { std::cout << "is_finite(epsilon) == false: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_inf(1.65F)) { std::cout << "is_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_inf(normal) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<float>::min() / 2)) { std::cout << "is_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_inf(0.F)) { std::cout << "is_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_inf(zero) == true: ERROR" << std::endl; }

    if (!is_inf(-0.F)) { std::cout << "is_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_inf(-zero) == true: ERROR" << std::endl; }

    if (is_inf(std::numeric_limits<float>::infinity())) { std::cout << "is_inf(inf) == true: OK" << std::endl; }
    else { std::cout << "is_inf(inf) == false: ERROR" << std::endl; }

    if (is_inf(-std::numeric_limits<float>::infinity())) { std::cout << "is_finite(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_finite(-inf) == false: ERROR" << std::endl; }

    if (!is_inf(NAN)) { std::cout << "is_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<float>::max())) { std::cout << "is_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_inf(max) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<float>::min())) { std::cout << "is_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_inf(min) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<float>::epsilon())) { std::cout << "is_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_pos_inf(1.65F)) { std::cout << "is_pos_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(normal) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<float>::min() / 2)) { std::cout << "is_pos_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_pos_inf(0.F)) { std::cout << "is_pos_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(zero) == true: ERROR" << std::endl; }

    if (!is_pos_inf(-0.F)) { std::cout << "is_pos_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(-zero) == true: ERROR" << std::endl; }

    if (is_pos_inf(std::numeric_limits<float>::infinity())) { std::cout << "is_pos_inf(inf) == true: OK" << std::endl; }
    else { std::cout << "is_pos_inf(inf) == false: ERROR" << std::endl; }

    if (!is_pos_inf(-std::numeric_limits<float>::infinity())) { std::cout << "is_pos_inf(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(-inf) == true: ERROR" << std::endl; }

    if (!is_pos_inf(NAN)) { std::cout << "is_pos_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<float>::max())) { std::cout << "is_pos_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(max) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<float>::min())) { std::cout << "is_pos_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(min) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<float>::epsilon())) { std::cout << "is_pos_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_neg_inf(1.65F)) { std::cout << "is_neg_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(normal) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<float>::min() / 2)) { std::cout << "is_neg_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_neg_inf(0.F)) { std::cout << "is_neg_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(zero) == true: ERROR" << std::endl; }

    if (!is_neg_inf(-0.F)) { std::cout << "is_neg_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(-zero) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<float>::infinity())) { std::cout << "is_neg_inf(inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(inf) == true: ERROR" << std::endl; }

    if (is_neg_inf(-std::numeric_limits<float>::infinity())) { std::cout << "is_neg_inf(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_neg_inf(-inf) == false: ERROR" << std::endl; }

    if (!is_neg_inf(NAN)) { std::cout << "is_neg_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<float>::max())) { std::cout << "is_neg_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(max) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<float>::min())) { std::cout << "is_neg_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(min) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<float>::epsilon())) { std::cout << "is_neg_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_zero(1.65F)) { std::cout << "is_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_zero(normal) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<float>::min() / 2)) { std::cout << "is_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_zero(subnormal) == true: ERROR" << std::endl; }

    if (is_zero(0.F)) { std::cout << "is_zero(zero) == true: OK" << std::endl; }
    else { std::cout << "is_zero(zero) == false: ERROR" << std::endl; }

    if (is_zero(-0.F)) { std::cout << "is_zero(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_zero(-zero) == false: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<float>::infinity())) { std::cout << "is_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_zero(inf) == true: ERROR" << std::endl; }

    if (!is_zero(-std::numeric_limits<float>::infinity())) { std::cout << "is_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_zero(NAN)) { std::cout << "is_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<float>::max())) { std::cout << "is_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_zero(max) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<float>::min())) { std::cout << "is_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_zero(min) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<float>::epsilon())) { std::cout << "is_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_pos_zero(1.65F)) { std::cout << "is_pos_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(normal) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<float>::min() / 2)) { std::cout << "is_pos_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(subnormal) == true: ERROR" << std::endl; }

    if (is_pos_zero(0.F)) { std::cout << "is_pos_zero(zero) == true: OK" << std::endl; }
    else { std::cout << "is_pos_zero(zero) == false: ERROR" << std::endl; }

    if (!is_pos_zero(-0.F)) { std::cout << "is_pos_zero(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(-zero) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<float>::infinity())) { std::cout << "is_pos_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(inf) == true: ERROR" << std::endl; }

    if (!is_pos_zero(-std::numeric_limits<float>::infinity())) { std::cout << "is_pos_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_pos_zero(NAN)) { std::cout << "is_pos_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<float>::max())) { std::cout << "is_pos_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(max) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<float>::min())) { std::cout << "is_pos_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(min) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<float>::epsilon())) { std::cout << "is_pos_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_neg_zero(1.65F)) { std::cout << "is_neg_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(normal) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<float>::min() / 2)) { std::cout << "is_neg_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(subnormal) == true: ERROR" << std::endl; }

    if (!is_neg_zero(0.F)) { std::cout << "is_neg_zero(zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(zero) == true: ERROR" << std::endl; }

    if (is_neg_zero(-0.F)) { std::cout << "is_neg_zero(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_neg_zero(-zero) == false: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<float>::infinity())) { std::cout << "is_neg_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(inf) == true: ERROR" << std::endl; }

    if (!is_neg_zero(-std::numeric_limits<float>::infinity())) { std::cout << "is_neg_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_neg_zero(NAN)) { std::cout << "is_neg_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<float>::max())) { std::cout << "is_neg_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(max) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<float>::min())) { std::cout << "is_neg_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(min) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<float>::epsilon())) { std::cout << "is_neg_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_nan(1.65F)) { std::cout << "is_nan(normal) == false: OK" << std::endl; }
    else { std::cout << "is_nan(normal) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<float>::min() / 2)) { std::cout << "is_nan(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_nan(subnormal) == true: ERROR" << std::endl; }

    if (!is_nan(0.F)) { std::cout << "is_nan(zero) == false: OK" << std::endl; }
    else { std::cout << "is_nan(zero) == true: ERROR" << std::endl; }

    if (!is_nan(-0.F)) { std::cout << "is_nan(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_nan(-zero) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<float>::infinity())) { std::cout << "is_nan(inf) == false: OK" << std::endl; }
    else { std::cout << "is_nan(inf) == true: ERROR" << std::endl; }

    if (!is_nan(-std::numeric_limits<float>::infinity())) { std::cout << "is_nan(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_nan(-inf) == true: ERROR" << std::endl; }

    if (is_nan(NAN)) { std::cout << "is_nan(NaN) == true: OK" << std::endl; }
    else { std::cout << "is_nan(NaN) == false: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<float>::max())) { std::cout << "is_nan(max) == false: OK" << std::endl; }
    else { std::cout << "is_nan(max) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<float>::min())) { std::cout << "is_nan(min) == false: OK" << std::endl; }
    else { std::cout << "is_nan(min) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<float>::epsilon())) { std::cout << "is_nan(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_nan(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (is_normal(1.65F)) { std::cout << "is_normal(normal) == true: OK" << std::endl; }
    else { std::cout << "is_normal(normal) == false: ERROR" << std::endl; }

    if (!is_normal(std::numeric_limits<float>::min() / 2)) { std::cout << "is_normal(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_normal(subnormal) == true: ERROR" << std::endl; }

    if (!is_normal(0.F)) { std::cout << "is_normal(zero) == false: OK" << std::endl; }
    else { std::cout << "is_normal(zero) == true: ERROR" << std::endl; }

    if (!is_normal(-0.F)) { std::cout << "is_normal(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_normal(-zero) == true: ERROR" << std::endl; }

    if (!is_normal(std::numeric_limits<float>::infinity())) { std::cout << "is_normal(inf) == false: OK" << std::endl; }
    else { std::cout << "is_normal(inf) == true: ERROR" << std::endl; }

    if (!is_normal(-std::numeric_limits<float>::infinity())) { std::cout << "is_normal(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_normal(-inf) == true: ERROR" << std::endl; }

    if (!is_normal(NAN)) { std::cout << "is_normal(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_normal(NaN) == true: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<float>::max())) { std::cout << "is_normal(max) == true: OK" << std::endl; }
    else { std::cout << "is_normal(max) == false: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<float>::min())) { std::cout << "is_normal(min) == true: OK" << std::endl; }
    else { std::cout << "is_normal(min) == false: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<float>::epsilon())) { std::cout << "is_normal(epsilon) == true: OK" << std::endl; }
    else { std::cout << "is_normal(epsilon) == false: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_subnormal(1.65F)) { std::cout << "is_subnormal(normal) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(normal) == true: ERROR" << std::endl; }

    if (is_subnormal(std::numeric_limits<float>::min() / 2)) { std::cout << "is_subnormal(subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_subnormal(subnormal) == false: ERROR" << std::endl; }

    if (!is_subnormal(0.F)) { std::cout << "is_subnormal(zero) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(zero) == true: ERROR" << std::endl; }

    if (!is_subnormal(-0.F)) { std::cout << "is_subnormal(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(-zero) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<float>::infinity())) { std::cout << "is_subnormal(inf) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(inf) == true: ERROR" << std::endl; }

    if (!is_subnormal(-std::numeric_limits<float>::infinity())) { std::cout << "is_subnormal(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(-inf) == true: ERROR" << std::endl; }

    if (!is_subnormal(NAN)) { std::cout << "is_subnormal(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(NaN) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<float>::max())) { std::cout << "is_subnormal(max) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(max) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<float>::min())) { std::cout << "is_subnormal(min) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(min) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<float>::epsilon())) { std::cout << "is_subnormal(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_signed(1.65F)) { std::cout << "is_signed(normal) == false: OK" << std::endl; }
    else { std::cout << "is_signed(normal) == true: ERROR" << std::endl; }

    if (is_signed(-1.65F)) { std::cout << "is_signed(-normal) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-normal) == false: ERROR" << std::endl; }

    if (!is_signed(std::numeric_limits<float>::min() / 2)) { std::cout << "is_signed(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_signed(subnormal) == true: ERROR" << std::endl; }

    if (is_signed(std::numeric_limits<float>::min() / -2)) { std::cout << "is_signed(-subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-subnormal) == false: ERROR" << std::endl; }

    if (!is_signed(0.F)) { std::cout << "is_signed(zero) == false: OK" << std::endl; }
    else { std::cout << "is_signed(zero) == true: ERROR" << std::endl; }

    if (is_signed(-0.F)) { std::cout << "is_signed(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-zero) == false: ERROR" << std::endl; }

    if (!is_signed(std::numeric_limits<float>::infinity())) { std::cout << "is_signed(inf) == false: OK" << std::endl; }
    else { std::cout << "is_signed(inf) == true: ERROR" << std::endl; }

    if (is_signed(-std::numeric_limits<float>::infinity())) { std::cout << "is_signed(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-inf) == false: ERROR" << std::endl; }

    if (!is_signed(NAN)) { std::cout << "is_signed(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_signed(NaN) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    std::cout << "Classification of normal: " << classify(1.65F) << std::endl;
    std::cout << "Classification of subnormal: " << classify(std::numeric_limits<float>::min() / 2) << std::endl;
    std::cout << "Classification of zero: " << classify(0.F) << std::endl;
    std::cout << "Classification of -zero: " << classify(-0.F) << std::endl;
    std::cout << "Classification of infinity: " << classify(std::numeric_limits<float>::infinity()) << std::endl;
    std::cout << "Classification of NaN: " << classify(NAN) << std::endl;
    std::cout << "Classification of max value: " << classify(std::numeric_limits<float>::max()) << std::endl;
    std::cout << "Classification of min value: " << classify(std::numeric_limits<float>::min()) << std::endl;
    std::cout << "Classification of epsilon: " << classify(std::numeric_limits<float>::epsilon()) << std::endl;

    std::cout << std::endl;
}
void basic_double_tests() {
    if (is_finite(1.65)) { std::cout << "is_finite(normal) == true: OK" << std::endl; }
    else { std::cout << "is_finite(normal) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<double>::min() / 2)) { std::cout << "is_finite(subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_finite(subnormal) == false: ERROR" << std::endl; }

    if (is_finite(0.0)) { std::cout << "is_finite(zero) == true: OK" << std::endl; }
    else { std::cout << "is_finite(zero) == false: ERROR" << std::endl; }

    if (is_finite(-0.0)) { std::cout << "is_finite(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_finite(-zero) == false: ERROR" << std::endl; }

    if (!is_finite(std::numeric_limits<double>::infinity())) { std::cout << "is_finite(inf) == false: OK" << std::endl; }
    else { std::cout << "is_finite(inf) == true: ERROR" << std::endl; }

    if (!is_finite(-std::numeric_limits<double>::infinity())) { std::cout << "is_finite(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_finite(-inf) == true: ERROR" << std::endl; }

    if (!is_finite(NAN)) { std::cout << "is_finite(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_finite(NaN) == true: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<double>::max())) { std::cout << "is_finite(max) == true: OK" << std::endl; }
    else { std::cout << "is_finite(max) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<double>::min())) { std::cout << "is_finite(min) == true: OK" << std::endl; }
    else { std::cout << "is_finite(min) == false: ERROR" << std::endl; }

    if (is_finite(std::numeric_limits<double>::epsilon())) { std::cout << "is_finite(epsilon) == true: OK" << std::endl; }
    else { std::cout << "is_finite(epsilon) == false: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_inf(1.65)) { std::cout << "is_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_inf(normal) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<double>::min() / 2)) { std::cout << "is_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_inf(0.0)) { std::cout << "is_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_inf(zero) == true: ERROR" << std::endl; }

    if (!is_inf(-0.0)) { std::cout << "is_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_inf(-zero) == true: ERROR" << std::endl; }

    if (is_inf(std::numeric_limits<double>::infinity())) { std::cout << "is_inf(inf) == true: OK" << std::endl; }
    else { std::cout << "is_inf(inf) == false: ERROR" << std::endl; }

    if (is_inf(-std::numeric_limits<double>::infinity())) { std::cout << "is_finite(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_finite(-inf) == false: ERROR" << std::endl; }

    if (!is_inf(NAN)) { std::cout << "is_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<double>::max())) { std::cout << "is_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_inf(max) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<double>::min())) { std::cout << "is_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_inf(min) == true: ERROR" << std::endl; }

    if (!is_inf(std::numeric_limits<double>::epsilon())) { std::cout << "is_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_pos_inf(1.65)) { std::cout << "is_pos_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(normal) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<double>::min() / 2)) { std::cout << "is_pos_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_pos_inf(0.0)) { std::cout << "is_pos_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(zero) == true: ERROR" << std::endl; }

    if (!is_pos_inf(-0.0)) { std::cout << "is_pos_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(-zero) == true: ERROR" << std::endl; }

    if (is_pos_inf(std::numeric_limits<double>::infinity())) { std::cout << "is_pos_inf(inf) == true: OK" << std::endl; }
    else { std::cout << "is_pos_inf(inf) == false: ERROR" << std::endl; }

    if (!is_pos_inf(-std::numeric_limits<double>::infinity())) { std::cout << "is_pos_inf(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(-inf) == true: ERROR" << std::endl; }

    if (!is_pos_inf(NAN)) { std::cout << "is_pos_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<double>::max())) { std::cout << "is_pos_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(max) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<double>::min())) { std::cout << "is_pos_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(min) == true: ERROR" << std::endl; }

    if (!is_pos_inf(std::numeric_limits<double>::epsilon())) { std::cout << "is_pos_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_pos_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_neg_inf(1.65)) { std::cout << "is_neg_inf(normal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(normal) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<double>::min() / 2)) { std::cout << "is_neg_inf(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(subnormal) == true: ERROR" << std::endl; }

    if (!is_neg_inf(0.0)) { std::cout << "is_neg_inf(zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(zero) == true: ERROR" << std::endl; }

    if (!is_neg_inf(-0.0)) { std::cout << "is_neg_inf(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(-zero) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<double>::infinity())) { std::cout << "is_neg_inf(inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(inf) == true: ERROR" << std::endl; }

    if (is_neg_inf(-std::numeric_limits<double>::infinity())) { std::cout << "is_neg_inf(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_neg_inf(-inf) == false: ERROR" << std::endl; }

    if (!is_neg_inf(NAN)) { std::cout << "is_neg_inf(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(NaN) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<double>::max())) { std::cout << "is_neg_inf(max) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(max) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<double>::min())) { std::cout << "is_neg_inf(min) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(min) == true: ERROR" << std::endl; }

    if (!is_neg_inf(std::numeric_limits<double>::epsilon())) { std::cout << "is_neg_inf(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_neg_inf(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_zero(1.65)) { std::cout << "is_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_zero(normal) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<double>::min() / 2)) { std::cout << "is_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_zero(subnormal) == true: ERROR" << std::endl; }

    if (is_zero(0.0)) { std::cout << "is_zero(zero) == true: OK" << std::endl; }
    else { std::cout << "is_zero(zero) == false: ERROR" << std::endl; }

    if (is_zero(-0.0)) { std::cout << "is_zero(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_zero(-zero) == false: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<double>::infinity())) { std::cout << "is_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_zero(inf) == true: ERROR" << std::endl; }

    if (!is_zero(-std::numeric_limits<double>::infinity())) { std::cout << "is_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_zero(NAN)) { std::cout << "is_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<double>::max())) { std::cout << "is_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_zero(max) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<double>::min())) { std::cout << "is_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_zero(min) == true: ERROR" << std::endl; }

    if (!is_zero(std::numeric_limits<double>::epsilon())) { std::cout << "is_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_pos_zero(1.65)) { std::cout << "is_pos_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(normal) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<double>::min() / 2)) { std::cout << "is_pos_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(subnormal) == true: ERROR" << std::endl; }

    if (is_pos_zero(0.0)) { std::cout << "is_pos_zero(zero) == true: OK" << std::endl; }
    else { std::cout << "is_pos_zero(zero) == false: ERROR" << std::endl; }

    if (!is_pos_zero(-0.0)) { std::cout << "is_pos_zero(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(-zero) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<double>::infinity())) { std::cout << "is_pos_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(inf) == true: ERROR" << std::endl; }

    if (!is_pos_zero(-std::numeric_limits<double>::infinity())) { std::cout << "is_pos_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_pos_zero(NAN)) { std::cout << "is_pos_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<double>::max())) { std::cout << "is_pos_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(max) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<double>::min())) { std::cout << "is_pos_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(min) == true: ERROR" << std::endl; }

    if (!is_pos_zero(std::numeric_limits<double>::epsilon())) { std::cout << "is_pos_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_pos_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_neg_zero(1.65)) { std::cout << "is_neg_zero(normal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(normal) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<double>::min() / 2)) { std::cout << "is_neg_zero(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(subnormal) == true: ERROR" << std::endl; }

    if (!is_neg_zero(0.0)) { std::cout << "is_neg_zero(zero) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(zero) == true: ERROR" << std::endl; }

    if (is_neg_zero(-0.0)) { std::cout << "is_neg_zero(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_neg_zero(-zero) == false: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<double>::infinity())) { std::cout << "is_neg_zero(inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(inf) == true: ERROR" << std::endl; }

    if (!is_neg_zero(-std::numeric_limits<double>::infinity())) { std::cout << "is_neg_zero(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(-inf) == true: ERROR" << std::endl; }

    if (!is_neg_zero(NAN)) { std::cout << "is_neg_zero(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(NaN) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<double>::max())) { std::cout << "is_neg_zero(max) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(max) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<double>::min())) { std::cout << "is_neg_zero(min) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(min) == true: ERROR" << std::endl; }

    if (!is_neg_zero(std::numeric_limits<double>::epsilon())) { std::cout << "is_neg_zero(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_neg_zero(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_nan(1.65)) { std::cout << "is_nan(normal) == false: OK" << std::endl; }
    else { std::cout << "is_nan(normal) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<double>::min() / 2)) { std::cout << "is_nan(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_nan(subnormal) == true: ERROR" << std::endl; }

    if (!is_nan(0.0)) { std::cout << "is_nan(zero) == false: OK" << std::endl; }
    else { std::cout << "is_nan(zero) == true: ERROR" << std::endl; }

    if (!is_nan(-0.0)) { std::cout << "is_nan(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_nan(-zero) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<double>::infinity())) { std::cout << "is_nan(inf) == false: OK" << std::endl; }
    else { std::cout << "is_nan(inf) == true: ERROR" << std::endl; }

    if (!is_nan(-std::numeric_limits<double>::infinity())) { std::cout << "is_nan(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_nan(-inf) == true: ERROR" << std::endl; }

    if (is_nan(NAN)) { std::cout << "is_nan(NaN) == true: OK" << std::endl; }
    else { std::cout << "is_nan(NaN) == false: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<double>::max())) { std::cout << "is_nan(max) == false: OK" << std::endl; }
    else { std::cout << "is_nan(max) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<double>::min())) { std::cout << "is_nan(min) == false: OK" << std::endl; }
    else { std::cout << "is_nan(min) == true: ERROR" << std::endl; }

    if (!is_nan(std::numeric_limits<double>::epsilon())) { std::cout << "is_nan(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_nan(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (is_normal(1.65)) { std::cout << "is_normal(normal) == true: OK" << std::endl; }
    else { std::cout << "is_normal(normal) == false: ERROR" << std::endl; }

    if (!is_normal(std::numeric_limits<double>::min() / 2)) { std::cout << "is_normal(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_normal(subnormal) == true: ERROR" << std::endl; }

    if (!is_normal(0.0)) { std::cout << "is_normal(zero) == false: OK" << std::endl; }
    else { std::cout << "is_normal(zero) == true: ERROR" << std::endl; }

    if (!is_normal(-0.0)) { std::cout << "is_normal(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_normal(-zero) == true: ERROR" << std::endl; }

    if (!is_normal(std::numeric_limits<double>::infinity())) { std::cout << "is_normal(inf) == false: OK" << std::endl; }
    else { std::cout << "is_normal(inf) == true: ERROR" << std::endl; }

    if (!is_normal(-std::numeric_limits<double>::infinity())) { std::cout << "is_normal(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_normal(-inf) == true: ERROR" << std::endl; }

    if (!is_normal(NAN)) { std::cout << "is_normal(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_normal(NaN) == true: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<double>::max())) { std::cout << "is_normal(max) == true: OK" << std::endl; }
    else { std::cout << "is_normal(max) == false: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<double>::min())) { std::cout << "is_normal(min) == true: OK" << std::endl; }
    else { std::cout << "is_normal(min) == false: ERROR" << std::endl; }

    if (is_normal(std::numeric_limits<double>::epsilon())) { std::cout << "is_normal(epsilon) == true: OK" << std::endl; }
    else { std::cout << "is_normal(epsilon) == false: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_subnormal(1.65)) { std::cout << "is_subnormal(normal) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(normal) == true: ERROR" << std::endl; }

    if (is_subnormal(std::numeric_limits<double>::min() / 2)) { std::cout << "is_subnormal(subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_subnormal(subnormal) == false: ERROR" << std::endl; }

    if (!is_subnormal(0.0)) { std::cout << "is_subnormal(zero) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(zero) == true: ERROR" << std::endl; }

    if (!is_subnormal(-0.0)) { std::cout << "is_subnormal(-zero) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(-zero) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<double>::infinity())) { std::cout << "is_subnormal(inf) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(inf) == true: ERROR" << std::endl; }

    if (!is_subnormal(-std::numeric_limits<double>::infinity())) { std::cout << "is_subnormal(-inf) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(-inf) == true: ERROR" << std::endl; }

    if (!is_subnormal(NAN)) { std::cout << "is_subnormal(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(NaN) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<double>::max())) { std::cout << "is_subnormal(max) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(max) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<double>::min())) { std::cout << "is_subnormal(min) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(min) == true: ERROR" << std::endl; }

    if (!is_subnormal(std::numeric_limits<double>::epsilon())) { std::cout << "is_subnormal(epsilon) == false: OK" << std::endl; }
    else { std::cout << "is_subnormal(epsilon) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    if (!is_signed(1.65)) { std::cout << "is_signed(normal) == false: OK" << std::endl; }
    else { std::cout << "is_signed(normal) == true: ERROR" << std::endl; }

    if (is_signed(-1.65)) { std::cout << "is_signed(-normal) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-normal) == false: ERROR" << std::endl; }

    if (!is_signed(std::numeric_limits<double>::min() / 2)) { std::cout << "is_signed(subnormal) == false: OK" << std::endl; }
    else { std::cout << "is_signed(subnormal) == true: ERROR" << std::endl; }

    if (is_signed(std::numeric_limits<double>::min() / -2)) { std::cout << "is_signed(-subnormal) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-subnormal) == false: ERROR" << std::endl; }

    if (!is_signed(0.0)) { std::cout << "is_signed(zero) == false: OK" << std::endl; }
    else { std::cout << "is_signed(zero) == true: ERROR" << std::endl; }

    if (is_signed(-0.0)) { std::cout << "is_signed(-zero) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-zero) == false: ERROR" << std::endl; }

    if (!is_signed(std::numeric_limits<double>::infinity())) { std::cout << "is_signed(inf) == false: OK" << std::endl; }
    else { std::cout << "is_signed(inf) == true: ERROR" << std::endl; }

    if (is_signed(-std::numeric_limits<double>::infinity())) { std::cout << "is_signed(-inf) == true: OK" << std::endl; }
    else { std::cout << "is_signed(-inf) == false: ERROR" << std::endl; }

    if (!is_signed(NAN)) { std::cout << "is_signed(NaN) == false: OK" << std::endl; }
    else { std::cout << "is_signed(NaN) == true: ERROR" << std::endl; }

    std::cout << std::endl;

    std::cout << "Classification of normal: " << classify(1.65) << std::endl;
    std::cout << "Classification of subnormal: " << classify(std::numeric_limits<double>::min() / 2) << std::endl;
    std::cout << "Classification of zero: " << classify(0.0) << std::endl;
    std::cout << "Classification of -zero: " << classify(-0.0) << std::endl;
    std::cout << "Classification of infinity: " << classify(std::numeric_limits<double>::infinity()) << std::endl;
    std::cout << "Classification of NaN: " << classify(std::numeric_limits<double>::quiet_NaN()) << std::endl;
    std::cout << "Classification of max value: " << classify(std::numeric_limits<double>::max()) << std::endl;
    std::cout << "Classification of min value: " << classify(std::numeric_limits<double>::min()) << std::endl;
    std::cout << "Classification of epsilon: " << classify(std::numeric_limits<double>::epsilon()) << std::endl;

    std::cout << std::endl;
}
void comparison_float_tests() {
    if (absolute(1.65F) == abs(1.65F)) { std::cout << "absolute(normal): OK" << std::endl; }
    else { std::cout << "absolute(normal): ERROR" << std::endl; }

    if (absolute(-1.65F) == abs(-1.65F)) { std::cout << "absolute(-normal): OK" << std::endl; }
    else { std::cout << "absolute(-normal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::min() / 2) == abs(std::numeric_limits<float>::min() / 2)) 
    { std::cout << "absolute(subnormal): OK" << std::endl; }
    else { std::cout << "absolute(subnormal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::min() / 2) == abs(std::numeric_limits<float>::min() / 2)) 
    { std::cout << "absolute(subnormal): OK" << std::endl; }
    else { std::cout << "absolute(subnormal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::min() / -2) == abs(std::numeric_limits<float>::min() / -2))
    {
        std::cout << "absolute(-subnormal): OK" << std::endl;
    }
    else { std::cout << "absolute(-subnormal): ERROR" << std::endl; }

    if (absolute(0.F) == abs(0.F)) { std::cout << "absolute(zero): OK" << std::endl; }
    else { std::cout << "absolute(zero): ERROR" << std::endl; }

    if (absolute(-0.F) == abs(-0.F)) { std::cout << "absolute(-zero): OK" << std::endl; }
    else { std::cout << "absolute(-zero): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::infinity()) == abs(std::numeric_limits<float>::infinity())) 
    { 
        std::cout << "absolute(inf): OK" << std::endl;
    }
    else { std::cout << "absolute(inf): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<float>::infinity()) == abs(-std::numeric_limits<float>::infinity()))
    {
        std::cout << "absolute(-inf): OK" << std::endl;
    }
    else { std::cout << "absolute(-inf): ERROR" << std::endl; }

    if (isnan(absolute(std::numeric_limits<float>::quiet_NaN())))
    {
        std::cout << "absolute(NaN): OK" << std::endl;
    }
    else { std::cout << "absolute(NaN): ERROR" << std::endl; }

    if (isnan(-absolute(std::numeric_limits<float>::quiet_NaN())))
    {
        std::cout << "absolute(-NaN): OK" << std::endl;
    }
    else { std::cout << "absolute(-NaN): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::max()) == abs(std::numeric_limits<float>::max()))
    {
        std::cout << "absolute(max): OK" << std::endl;
    }
    else { std::cout << "absolute(max): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<float>::max()) == abs(-std::numeric_limits<float>::max()))
    {
        std::cout << "absolute(-max): OK" << std::endl;
    }
    else { std::cout << "absolute(-max): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::min()) == abs(std::numeric_limits<float>::min()))
    {
        std::cout << "absolute(min): OK" << std::endl;
    }
    else { std::cout << "absolute(min): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<float>::min()) == abs(-std::numeric_limits<float>::min()))
    {
        std::cout << "absolute(-min): OK" << std::endl;
    }
    else { std::cout << "absolute(-min): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<float>::epsilon()) == abs(std::numeric_limits<float>::epsilon()))
    {
        std::cout << "absolute(epsilon): OK" << std::endl;
    }
    else { std::cout << "absolute(epsilon): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<float>::epsilon()) == abs(-std::numeric_limits<float>::epsilon()))
    {
        std::cout << "absolute(-epsilon): OK" << std::endl;
    }
    else { std::cout << "absolute(-epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((maximum(1.65F, 1.66F) == std::max(1.65F, 1.66F)) && (maximum(1.66F, 1.65F) == std::max(1.66F, 1.65F))) 
    {
        std::cout << "maximum(normal, normal): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, normal): ERROR" << std::endl;}

    if ((maximum(1.65F, -1.66F) == std::max(1.65F, -1.66F)) && (maximum(-1.66F, 1.65F) == std::max(-1.66F, 1.65F)))
    {
        std::cout << "maximum(normal, -normal): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, -normal): ERROR" << std::endl; }

    if ((maximum(-1.65F, -1.66F) == std::max(-1.65F, -1.66F)) && (maximum(-1.66F, -1.65F) == std::max(-1.66F, -1.65F)))
    {
        std::cout << "maximum(-normal, -normal): OK" << std::endl;
    }
    else { std::cout << "maximum(-normal, -normal): ERROR" << std::endl; }

    if ((maximum(1.65F, std::numeric_limits<float>::infinity()) == std::max(1.65F, std::numeric_limits<float>::infinity()))
        && (maximum(std::numeric_limits<float>::infinity(), 1.65F) == std::max(std::numeric_limits<float>::infinity(), 1.65F)))
    {
        std::cout << "maximum(normal, inf): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, inf): ERROR" << std::endl; }

    if ((maximum(1.65F, -std::numeric_limits<float>::infinity()) == std::max(1.65F, -std::numeric_limits<float>::infinity()))
        && (maximum(-std::numeric_limits<float>::infinity(), 1.65F) == std::max(-std::numeric_limits<float>::infinity(), 1.65F)))
    {
        std::cout << "maximum(normal, -inf): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, -inf): ERROR" << std::endl; }

    if ((maximum(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()) == std::max(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()))
        && (maximum(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()) == std::max(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity())))
    {
        std::cout << "maximum(inf, -inf): OK" << std::endl;
    }
    else { std::cout << "maximum(inf, -inf): ERROR" << std::endl; }

    if ((maximum(1.65F, std::numeric_limits<float>::quiet_NaN()) == std::max(1.65F, std::numeric_limits<float>::quiet_NaN()))
        && isnan(maximum(std::numeric_limits<float>::quiet_NaN(), 1.65F)) && isnan(std::max(std::numeric_limits<float>::quiet_NaN(), 1.65F)))
    {
        std::cout << "maximum(normal, NaN): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, NaN): ERROR" << std::endl; }

    if ((maximum(std::numeric_limits<float>::min(), std::numeric_limits<float>::epsilon()) == std::max(std::numeric_limits<float>::min(), std::numeric_limits<float>::epsilon()))
        && (maximum(std::numeric_limits<float>::epsilon(), std::numeric_limits<float>::min()) == std::max(std::numeric_limits<float>::epsilon(), std::numeric_limits<float>::min())))
    {
        std::cout << "maximum(min, epsilon): OK" << std::endl;
    }
    else { std::cout << "maximum(min, epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((minimum(1.65F, 1.66F) == std::min(1.65F, 1.66F)) && (minimum(1.66F, 1.65F) == std::min(1.66F, 1.65F)))
    {
        std::cout << "minimum(normal, normal): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, normal): ERROR" << std::endl; }

    if ((minimum(1.65F, -1.66F) == std::min(1.65F, -1.66F)) && (minimum(-1.66F, 1.65F) == std::min(-1.66F, 1.65F)))
    {
        std::cout << "minimum(normal, -normal): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, -normal): ERROR" << std::endl; }

    if ((minimum(-1.65F, -1.66F) == std::min(-1.65F, -1.66F)) && (minimum(-1.66F, -1.65F) == std::min(-1.66F, -1.65F)))
    {
        std::cout << "minimum(-normal, -normal): OK" << std::endl;
    }
    else { std::cout << "minimum(-normal, -normal): ERROR" << std::endl; }

    if ((minimum(1.65F, std::numeric_limits<float>::infinity()) == std::min(1.65F, std::numeric_limits<float>::infinity()))
        && (minimum(std::numeric_limits<float>::infinity(), 1.65F) == std::min(std::numeric_limits<float>::infinity(), 1.65F)))
    {
        std::cout << "minimum(normal, inf): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, inf): ERROR" << std::endl; }

    if ((minimum(1.65F, -std::numeric_limits<float>::infinity()) == std::min(1.65F, -std::numeric_limits<float>::infinity()))
        && (minimum(-std::numeric_limits<float>::infinity(), 1.65F) == std::min(-std::numeric_limits<float>::infinity(), 1.65F)))
    {
        std::cout << "minimum(normal, -inf): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, -inf): ERROR" << std::endl; }

    if ((minimum(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()) == std::min(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()))
        && (minimum(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity()) == std::min(std::numeric_limits<float>::infinity(), -std::numeric_limits<float>::infinity())))
    {
        std::cout << "minimum(inf, -inf): OK" << std::endl;
    }
    else { std::cout << "minimum(inf, -inf): ERROR" << std::endl; }

    if ((minimum(1.65F, std::numeric_limits<float>::quiet_NaN()) == std::min(1.65F, std::numeric_limits<float>::quiet_NaN()))
        && isnan(minimum(std::numeric_limits<float>::quiet_NaN(), 1.65F)) && isnan(std::min(std::numeric_limits<float>::quiet_NaN(), 1.65F)))
    {
        std::cout << "minimum(normal, NaN): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, NaN): ERROR" << std::endl; }

    if ((minimum(std::numeric_limits<float>::min(), std::numeric_limits<float>::epsilon()) == std::min(std::numeric_limits<float>::min(), std::numeric_limits<float>::epsilon()))
        && (minimum(std::numeric_limits<float>::epsilon(), std::numeric_limits<float>::min()) == std::min(std::numeric_limits<float>::epsilon(), std::numeric_limits<float>::min())))
    {
        std::cout << "minimum(min, epsilon): OK" << std::endl;
    }
    else { std::cout << "minimum(min, epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((clamp(1.65F, 1.66F, 1.64F) == clamp(1.65F, 1.64F, 1.66F)) && (clamp(1.65F, 1.64F, 1.66F) == 1.65F))
    {
        std::cout << "clamp(k, a, b) where a < k < b: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where a < k < b: ERROR" << std::endl; }

    if ((clamp(1.65F, -1.66F, 1.64F) == clamp(1.65F, 1.64F, -1.66F)) && (clamp(1.65F, 1.64F, -1.66F) == 1.64F))
    {
        std::cout << "clamp(k, a, b) where a < b < k: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where a < b < k: ERROR" << std::endl; }

    if ((clamp(1.65F, 1.66F, 1.67F) == clamp(1.65F, 1.67F, 1.66F)) && (clamp(1.65F, 1.67F, 1.66F) == 1.66F))
    {
        std::cout << "clamp(k, a, b) where k < a < b: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where k < a < b: ERROR" << std::endl; }

    if (clamp(NAN, 1.66F, 1.64F) == clamp(NAN, 1.64F, 1.66F))
    {
        std::cout << "clamp(NaN, a, b): OK" << std::endl;
    }
    else { std::cout << "clamp(NaN, a, b): ERROR" << std::endl; }

    std::cout << std::endl;

    if (are_equal(1.65F, 1.65F)) std::cout << "are_equal(normal = normal): OK" << std::endl;
    else std::cout << "are_equal(normal = normal): ERROR" << std::endl;

    if (!are_equal(1.65F, 1.66F)) std::cout << "are_equal(normal != normal): OK" << std::endl;
    else std::cout << "are_equal(normal != normal): ERROR" << std::endl;

    if (!are_equal(NAN, 1.65F)) std::cout << "are_equal(NaN, normal): OK" << std::endl;
    else std::cout << "are_equal(NaN, normal): ERROR" << std::endl;

    if (!are_equal(NAN, NAN)) std::cout << "are_equal(NaN, NaN): OK" << std::endl;
    else std::cout << "are_equal(NaN, NaN): ERROR" << std::endl;

    std::cout << std::endl;

    if (are_equal_around(1.658F, 1.657F, 0.01F)) std::cout << "are_equal_around(normal ~= normal): OK" << std::endl;
    else std::cout << "are_equal_around(normal ~= normal): ERROR" << std::endl;

    if (!are_equal_around(1.668F, 1.617F, 0.01F)) std::cout << "are_equal_around(normal !~= normal): OK" << std::endl;
    else std::cout << "are_equal_around(normal !~= normal): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_less_than(1.65F, 1.66F)) std::cout << "is_less_than(a < b): OK" << std::endl;
    else std::cout << "is_less_than(a < b): ERROR" << std::endl;

    if (!is_less_than(1.65F, 1.65F)) std::cout << "is_less_than(a = b): OK" << std::endl;
    else std::cout << "is_less_than(a = b): ERROR" << std::endl;

    if (!is_less_than(1.65F, 1.64F)) std::cout << "is_less_than(a > b): OK" << std::endl;
    else std::cout << "is_less_than(a > b): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_less_than_around(1.655F, 1.666F, 0.01F)) std::cout << "is_less_than_around(a < b): OK" << std::endl;
    else std::cout << "is_less_than_around(a < b): ERROR" << std::endl;

    if (!is_less_than_around(1.655F, 1.656F, 0.01F)) std::cout << "is_less_than_around(a ~= b): OK" << std::endl;
    else std::cout << "is_less_than_around(a ~= b): ERROR" << std::endl;

    std::cout << std::endl;

    if (!is_greater_than(1.65F, 1.66F)) std::cout << "is_greater_than(a < b): OK" << std::endl;
    else std::cout << "is_greater_than(a < b): ERROR" << std::endl;

    if (!is_greater_than(1.65F, 1.65F)) std::cout << "is_greater_than(a = b): OK" << std::endl;
    else std::cout << "is_greater_than(a = b): ERROR" << std::endl;

    if (is_greater_than(1.65F, 1.64F)) std::cout << "is_greater_than(a > b): OK" << std::endl;
    else std::cout << "is_greater_than(a > b): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_greater_than_around(1.666F, 1.655F, 0.01F)) std::cout << "is_greater_than_around(a < b): OK" << std::endl;
    else std::cout << "is_greater_than_around(a < b): ERROR" << std::endl;

    if (!is_greater_than_around(1.656F, 1.655F, 0.01F)) std::cout << "is_greater_than_around(a ~= b): OK" << std::endl;
    else std::cout << "is_greater_than_around(a ~= b): ERROR" << std::endl;
}
void comparison_double_tests() {
    if (absolute(1.65) == abs(1.65)) { std::cout << "absolute(normal): OK" << std::endl; }
    else { std::cout << "absolute(normal): ERROR" << std::endl; }

    if (absolute(-1.65) == abs(-1.65)) { std::cout << "absolute(-normal): OK" << std::endl; }
    else { std::cout << "absolute(-normal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::min() / 2) == abs(std::numeric_limits<double>::min() / 2))
    {
        std::cout << "absolute(subnormal): OK" << std::endl;
    }
    else { std::cout << "absolute(subnormal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::min() / 2) == abs(std::numeric_limits<double>::min() / 2))
    {
        std::cout << "absolute(subnormal): OK" << std::endl;
    }
    else { std::cout << "absolute(subnormal): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::min() / -2) == abs(std::numeric_limits<double>::min() / -2))
    {
        std::cout << "absolute(-subnormal): OK" << std::endl;
    }
    else { std::cout << "absolute(-subnormal): ERROR" << std::endl; }

    if (absolute(0.0) == abs(0.0)) { std::cout << "absolute(zero): OK" << std::endl; }
    else { std::cout << "absolute(zero): ERROR" << std::endl; }

    if (absolute(-0.0) == abs(-0.0)) { std::cout << "absolute(-zero): OK" << std::endl; }
    else { std::cout << "absolute(-zero): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::infinity()) == abs(std::numeric_limits<double>::infinity()))
    {
        std::cout << "absolute(inf): OK" << std::endl;
    }
    else { std::cout << "absolute(inf): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<double>::infinity()) == abs(-std::numeric_limits<double>::infinity()))
    {
        std::cout << "absolute(-inf): OK" << std::endl;
    }
    else { std::cout << "absolute(-inf): ERROR" << std::endl; }

    if (isnan(absolute(std::numeric_limits<double>::quiet_NaN())))
    {
        std::cout << "absolute(NaN): OK" << std::endl;
    }
    else { std::cout << "absolute(NaN): ERROR" << std::endl; }

    if (isnan(-absolute(std::numeric_limits<float>::quiet_NaN())))
    {
        std::cout << "absolute(-NaN): OK" << std::endl;
    }
    else { std::cout << "absolute(-NaN): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::max()) == abs(std::numeric_limits<double>::max()))
    {
        std::cout << "absolute(max): OK" << std::endl;
    }
    else { std::cout << "absolute(max): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<double>::max()) == abs(-std::numeric_limits<double>::max()))
    {
        std::cout << "absolute(-max): OK" << std::endl;
    }
    else { std::cout << "absolute(-max): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::min()) == abs(std::numeric_limits<double>::min()))
    {
        std::cout << "absolute(min): OK" << std::endl;
    }
    else { std::cout << "absolute(min): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<double>::min()) == abs(-std::numeric_limits<double>::min()))
    {
        std::cout << "absolute(-min): OK" << std::endl;
    }
    else { std::cout << "absolute(-min): ERROR" << std::endl; }

    if (absolute(std::numeric_limits<double>::epsilon()) == abs(std::numeric_limits<double>::epsilon()))
    {
        std::cout << "absolute(epsilon): OK" << std::endl;
    }
    else { std::cout << "absolute(epsilon): ERROR" << std::endl; }

    if (absolute(-std::numeric_limits<double>::epsilon()) == abs(-std::numeric_limits<double>::epsilon()))
    {
        std::cout << "absolute(-epsilon): OK" << std::endl;
    }
    else { std::cout << "absolute(-epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((maximum(1.65, 1.66) == std::max(1.65, 1.66)) && (maximum(1.66, 1.65) == std::max(1.66, 1.65)))
    {
        std::cout << "maximum(normal, normal): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, normal): ERROR" << std::endl; }

    if ((maximum(1.65, -1.66) == std::max(1.65, -1.66)) && (maximum(-1.66, 1.65) == std::max(-1.66, 1.65)))
    {
        std::cout << "maximum(normal, -normal): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, -normal): ERROR" << std::endl; }

    if ((maximum(-1.65, -1.66) == std::max(-1.65, -1.66)) && (maximum(-1.66, -1.65) == std::max(-1.66, -1.65)))
    {
        std::cout << "maximum(-normal, -normal): OK" << std::endl;
    }
    else { std::cout << "maximum(-normal, -normal): ERROR" << std::endl; }

    if ((maximum(1.65, std::numeric_limits<double>::infinity()) == std::max(1.65, std::numeric_limits<double>::infinity()))
        && (maximum(std::numeric_limits<double>::infinity(), 1.65) == std::max(std::numeric_limits<double>::infinity(), 1.65)))
    {
        std::cout << "maximum(normal, inf): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, inf): ERROR" << std::endl; }

    if ((maximum(1.65, -std::numeric_limits<double>::infinity()) == std::max(1.65, -std::numeric_limits<double>::infinity()))
        && (maximum(-std::numeric_limits<double>::infinity(), 1.65) == std::max(-std::numeric_limits<double>::infinity(), 1.65)))
    {
        std::cout << "maximum(normal, -inf): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, -inf): ERROR" << std::endl; }

    if ((maximum(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()) == std::max(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()))
        && (maximum(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()) == std::max(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity())))
    {
        std::cout << "maximum(inf, -inf): OK" << std::endl;
    }
    else { std::cout << "maximum(inf, -inf): ERROR" << std::endl; }

    if ((maximum(1.65, std::numeric_limits<double>::quiet_NaN()) == std::max(1.65, std::numeric_limits<double>::quiet_NaN()))
        && isnan(maximum(std::numeric_limits<double>::quiet_NaN(), 1.65)) && isnan(std::max(std::numeric_limits<double>::quiet_NaN(), 1.65)))
    {
        std::cout << "maximum(normal, NaN): OK" << std::endl;
    }
    else { std::cout << "maximum(normal, NaN): ERROR" << std::endl; }

    if ((maximum(std::numeric_limits<double>::min(), std::numeric_limits<double>::epsilon()) == std::max(std::numeric_limits<double>::min(), std::numeric_limits<double>::epsilon()))
        && (maximum(std::numeric_limits<double>::epsilon(), std::numeric_limits<double>::min()) == std::max(std::numeric_limits<double>::epsilon(), std::numeric_limits<double>::min())))
    {
        std::cout << "maximum(min, epsilon): OK" << std::endl;
    }
    else { std::cout << "maximum(min, epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((minimum(1.65, 1.66) == std::min(1.65, 1.66)) && (minimum(1.66, 1.65) == std::min(1.66, 1.65)))
    {
        std::cout << "minimum(normal, normal): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, normal): ERROR" << std::endl; }

    if ((minimum(1.65, -1.66) == std::min(1.65, -1.66)) && (minimum(-1.66, 1.65) == std::min(-1.66, 1.65)))
    {
        std::cout << "minimum(normal, -normal): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, -normal): ERROR" << std::endl; }

    if ((minimum(-1.65, -1.66) == std::min(-1.65, -1.66)) && (minimum(-1.66, -1.65) == std::min(-1.66, -1.65)))
    {
        std::cout << "minimum(-normal, -normal): OK" << std::endl;
    }
    else { std::cout << "minimum(-normal, -normal): ERROR" << std::endl; }

    if ((minimum(1.65, std::numeric_limits<double>::infinity()) == std::min(1.65, std::numeric_limits<double>::infinity()))
        && (minimum(std::numeric_limits<double>::infinity(), 1.65) == std::min(std::numeric_limits<double>::infinity(), 1.65)))
    {
        std::cout << "minimum(normal, inf): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, inf): ERROR" << std::endl; }

    if ((minimum(1.65, -std::numeric_limits<double>::infinity()) == std::min(1.65, -std::numeric_limits<double>::infinity()))
        && (minimum(-std::numeric_limits<double>::infinity(), 1.65) == std::min(-std::numeric_limits<double>::infinity(), 1.65)))
    {
        std::cout << "minimum(normal, -inf): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, -inf): ERROR" << std::endl; }

    if ((minimum(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()) == std::min(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()))
        && (minimum(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity()) == std::min(std::numeric_limits<double>::infinity(), -std::numeric_limits<double>::infinity())))
    {
        std::cout << "minimum(inf, -inf): OK" << std::endl;
    }
    else { std::cout << "minimum(inf, -inf): ERROR" << std::endl; }

    if ((minimum(1.65, std::numeric_limits<double>::quiet_NaN()) == std::min(1.65, std::numeric_limits<double>::quiet_NaN()))
        && isnan(minimum(std::numeric_limits<double>::quiet_NaN(), 1.65)) && isnan(std::min(std::numeric_limits<double>::quiet_NaN(), 1.65)))
    {
        std::cout << "minimum(normal, NaN): OK" << std::endl;
    }
    else { std::cout << "minimum(normal, NaN): ERROR" << std::endl; }

    if ((minimum(std::numeric_limits<double>::min(), std::numeric_limits<double>::epsilon()) == std::min(std::numeric_limits<double>::min(), std::numeric_limits<double>::epsilon()))
        && (minimum(std::numeric_limits<double>::epsilon(), std::numeric_limits<double>::min()) == std::min(std::numeric_limits<double>::epsilon(), std::numeric_limits<double>::min())))
    {
        std::cout << "minimum(min, epsilon): OK" << std::endl;
    }
    else { std::cout << "minimum(min, epsilon): ERROR" << std::endl; }

    std::cout << std::endl;

    if ((clamp(1.65, 1.66, 1.64) == clamp(1.65, 1.64, 1.66)) && (clamp(1.65, 1.64, 1.66) == 1.65))
    {
        std::cout << "clamp(k, a, b) where a < k < b: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where a < k < b: ERROR" << std::endl; }

    if ((clamp(1.65, -1.66, 1.64) == clamp(1.65, 1.64, -1.66)) && (clamp(1.65, 1.64, -1.66) == 1.64))
    {
        std::cout << "clamp(k, a, b) where a < b < k: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where a < b < k: ERROR" << std::endl; }

    if ((clamp(1.65, 1.66, 1.67) == clamp(1.65, 1.67, 1.66)) && (clamp(1.65, 1.67, 1.66) == 1.66))
    {
        std::cout << "clamp(k, a, b) where k < a < b: OK" << std::endl;
    }
    else { std::cout << "clamp(k, a, b) where k < a < b: ERROR" << std::endl; }

    if (clamp(std::numeric_limits<double>::quiet_NaN(), 1.66, 1.64) == clamp(std::numeric_limits<double>::quiet_NaN(), 1.64, 1.66))
    {
        std::cout << "clamp(NaN, a, b): OK" << std::endl;
    }
    else { std::cout << "clamp(NaN, a, b): ERROR" << std::endl; }

    std::cout << std::endl;

    if (are_equal(1.65, 1.65)) std::cout << "are_equal(normal = normal): OK" << std::endl;
    else std::cout << "are_equal(normal = normal): ERROR" << std::endl;

    if (!are_equal(1.65, 1.66)) std::cout << "are_equal(normal != normal): OK" << std::endl;
    else std::cout << "are_equal(normal != normal): ERROR" << std::endl;

    if (!are_equal(std::numeric_limits<double>::quiet_NaN(), 1.65)) std::cout << "are_equal(NaN, normal): OK" << std::endl;
    else std::cout << "are_equal(NaN, normal): ERROR" << std::endl;

    if (!are_equal(std::numeric_limits<double>::quiet_NaN(), std::numeric_limits<double>::quiet_NaN())) std::cout << "are_equal(NaN, NaN): OK" << std::endl;
    else std::cout << "are_equal(NaN, NaN): ERROR" << std::endl;

    std::cout << std::endl;

    if (are_equal_around(1.658, 1.657, 0.01)) std::cout << "are_equal_around(normal ~= normal): OK" << std::endl;
    else std::cout << "are_equal_around(normal ~= normal): ERROR" << std::endl;

    if (!are_equal_around(1.668, 1.617, 0.01)) std::cout << "are_equal_around(normal !~= normal): OK" << std::endl;
    else std::cout << "are_equal_around(normal !~= normal): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_less_than(1.65, 1.66)) std::cout << "is_less_than(a < b): OK" << std::endl;
    else std::cout << "is_less_than(a < b): ERROR" << std::endl;

    if (!is_less_than(1.65, 1.65)) std::cout << "is_less_than(a = b): OK" << std::endl;
    else std::cout << "is_less_than(a = b): ERROR" << std::endl;

    if (!is_less_than(1.65, 1.64)) std::cout << "is_less_than(a > b): OK" << std::endl;
    else std::cout << "is_less_than(a > b): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_less_than_around(1.655, 1.666, 0.01)) std::cout << "is_less_than_around(a < b): OK" << std::endl;
    else std::cout << "is_less_than_around(a < b): ERROR" << std::endl;

    if (!is_less_than_around(1.655, 1.656, 0.01)) std::cout << "is_less_than_around(a ~= b): OK" << std::endl;
    else std::cout << "is_less_than_around(a ~= b): ERROR" << std::endl;

    std::cout << std::endl;

    if (!is_greater_than(1.65, 1.66)) std::cout << "is_greater_than(a < b): OK" << std::endl;
    else std::cout << "is_greater_than(a < b): ERROR" << std::endl;

    if (!is_greater_than(1.65, 1.65)) std::cout << "is_greater_than(a = b): OK" << std::endl;
    else std::cout << "is_greater_than(a = b): ERROR" << std::endl;

    if (is_greater_than(1.65, 1.64)) std::cout << "is_greater_than(a > b): OK" << std::endl;
    else std::cout << "is_greater_than(a > b): ERROR" << std::endl;

    std::cout << std::endl;

    if (is_greater_than_around(1.666, 1.655, 0.01)) std::cout << "is_greater_than_around(a < b): OK" << std::endl;
    else std::cout << "is_greater_than_around(a < b): ERROR" << std::endl;

    if (!is_greater_than_around(1.656, 1.655, 0.01)) std::cout << "is_greater_than_around(a ~= b): OK" << std::endl;
    else std::cout << "is_greater_than_around(a ~= b): ERROR" << std::endl;
}


int main()
{
    std::cout << "Basic function tests (float):" << std::endl << std::endl;
    basic_float_tests();
    std::cout << "Basic function tests (double):" << std::endl << std::endl;
    basic_double_tests();
    std::cout << "Comparison function tests (float):" << std::endl << std::endl;
    comparison_float_tests();
    std::cout << "Comparison function tests (double):" << std::endl << std::endl;
    comparison_double_tests();
}