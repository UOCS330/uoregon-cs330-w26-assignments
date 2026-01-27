#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1048576
#include "gdb_example.h"


int main(int argc, char** argv)
{
    int* int_array = (int*) malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++) {
        int_array[i] = some_rand(i);
    }
    
    double* dbl_array = (double*) malloc(sizeof(double) * N);
    for(int i = 0; i < N; i++) {
        dbl_array[i] = (1.0 * rand()) / RAND_MAX;
    }

    for(int i = 0; i < N; i++) {
        // fprintf(stdout, "%f\n", dbl_array[int_array[i]]);
    }

	free(dbl_array);
	free(int_array);
    
    return 0;
}
