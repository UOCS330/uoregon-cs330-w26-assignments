#ifndef ARITHMETIC_H
#define ARITHMETIC_h
#include <assert.h>
int my_add(int a, int b);
int my_multiply(int a, int b);
void my_vector_add_float(float* a, float* b, float* c, int n);
float my_dot_product_float(float* a, float* b, int n);
void my_vector_add_double(double* a, double* b, double* c, int n);
double my_dot_product_double(double* a, double* b, int n);
#endif
