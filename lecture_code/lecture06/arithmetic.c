#include "arithmetic.h"

int my_add(int a, int b)
{
    return a + b;
}

int my_multiply(int a, int b)
{
    return a * b;
}

void my_vector_add_float(float* a, float* b, float* c, int n)
{
    assert(a);
    assert(b);
    assert(c);
    for(int i = 0; i < n; i++) {
        c[i] += a[i] + b[i];
    }
}

float my_dot_product_float(float* a, float* b, int n)
{
    assert(a);
    assert(b);
    float sum = (float) 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    return sum;
}

void my_vector_add_double(double* a, double* b, double* c, int n)
{
    assert(a);
    assert(b);
    assert(c);
    for(int i = 0; i < n; i++) {
        c[i] += a[i] + b[i];
    }
}

double my_dot_product_double(double* a, double* b, int n)
{
    assert(a);
    assert(b);
    float sum = 0.0;
    for(int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    return sum;
}
