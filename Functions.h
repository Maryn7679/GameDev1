#ifndef FUNCTIONS_H
#define FUNCTIONS_H

uint32_t to_bytes(float const value);
float to_float(uint32_t const value);
bool is_finite(float const value);
bool is_inf(float const value);
bool is_pos_inf(float const value);
bool is_neg_inf(float const value);
bool is_zero(float const value);
bool is_pos_zero(float const value);
bool is_neg_zero(float const value);
bool is_nan(float const value);
bool is_normal(float const value);
bool is_subnormal(float const value);
bool is_signed(float const value);
auto classify(float const value);

float absolute(float value);
float maximum(float a, float b);
float minimum(float a, float b);
float clamp(float k, float a, float b);


uint64_t to_bytes(double const value);
double to_double(uint64_t const value);
bool is_finite(double const value);
bool is_inf(double const value);
bool is_pos_inf(double const value);
bool is_neg_inf(double const value);
bool is_zero(double const value);
bool is_pos_zero(double const value);
bool is_neg_zero(double const value);
bool is_nan(double const value);
bool is_normal(double const value);
bool is_subnormal(double const value);
bool is_signed(double const value);
auto classify(double const value);

double absolute(double value);
double maximum(double a, double b);
double minimum(double a, double b);
double clamp(double k, double a, double b);

#endif
