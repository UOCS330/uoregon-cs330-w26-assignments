#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "arithmetic.h"

int main(int argc, char** argv)
{
    int a = 5;
    int b = 11;
    int c = my_add(a, b);
    fprintf(stdout, "%d + %d = %d\n", a, b, c);

    int n = atoi(argv[1]);
    double* av = (double*) malloc(sizeof(double) * n);
    assert(av);
    double* bv = (double*) malloc(sizeof(double) * n);
    assert(bv);
    double dot_product = 0.0;
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        av[i] = (1.0 * rand()) / RAND_MAX; 
        bv[i] = (1.0 * rand()) / RAND_MAX; 
    } 
    dot_product = my_dot_product_double(av, bv, n);
    fprintf(stdout, "%f\n", dot_product);

    double* cv = (double*) malloc(sizeof(double) * n);
    assert(cv);
    for(int i = 0; i < n; i++) {
        cv[i] = 0.0;
    }
    my_vector_add_double(av, bv, cv, n);
    for(int i = 0; i < n; i++) {
        fprintf(stdout, "%f\n", cv[i]);
    }

    return 0;
}
