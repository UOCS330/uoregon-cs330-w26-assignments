#include <stdio.h>
#include <stdlib.h>

typedef struct point_struct_t {
	int x;
	int y;
	int* val;
} point_t;

void init_2d(point_t**** in, int r, int c, int e);
void free_2d(point_t*** tmp, int r, int c);
void print_2d(point_t*** tmp, int r, int c, int e);

int main(int argc, char** argv)
{
	// sample quesiton 1
	// given a 2-d array of integers, with m rows and m columns, 
	// implement a function that rotates the array by 180 degrees
	// for example
	// 1 2 3
	// 4 5 6
	// 7 8 9
	// 
	// 7 4 1
	// 8 5 2
	// 9 6 3
	// becomes
	// 9 8 7
	// 6 5 4
	// 3 2 1

	// initialize the input 2-d array 
	int m = 3;
	int** array = (int**) malloc(sizeof(int*) * m);
	int cnt = 1;
	for(int i = 0; i < m; i++) {
		array[i] = (int*) malloc(sizeof(int) * m);
		for(int j = 0; j < m; j++) {
			array[i][j] = cnt++;
		}
	}

	// print it to make sure it's correct
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// now rotate it by 180 degrees
	// version 1 - use additional storage
	// 
	int** tmp = (int**) malloc(sizeof(int*) * m);
	for(int i = 0; i < m; i++) {
		tmp[i] = (int*) malloc(sizeof(int) * m);
	}

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			tmp[m - 1 - i][m - 1 - j] = array[i][j];	
		}
	}

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			array[i][j] = tmp[i][j];	
		}
	}


	for(int i = 0; i < m; i++) {
		free(tmp[i]);
	}
	free(tmp);

	// print it to make sure it's correct
	printf("rotate by 180\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");

	// version 2 - in-place
	// 
	for(int i = 0; i < m / 2; i++) {
		for(int j = 0; j < m; j++) {
			int tmp = array[i][j];
			array[i][j] = array[m - 1 - i][j];
			array[m - 1 - i][j] = tmp;
		}
	}

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m / 2; j++) {
			int tmp = array[i][j];
			array[i][j] = array[i][m - 1 - j];
			array[i][m - 1 - j] = tmp;
		}
	}

	// print it to make sure it's correct
	printf("rotate by 180 in-place\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");




	// sample question 2
	// allocate a 2-D array of a pointer to a struct and initialize it

	point_t*** myspace;
	int rows = 3;
	int cols = 3;
	int elem = 4;

	// initialize it
	init_2d(&myspace, rows, cols, elem);

	// print it
	print_2d(myspace, rows, cols, elem);

	// free it
	free_2d(myspace, rows, cols);


	// sample question 3
	// convert a 2-D array to a 1-D array storing columns consecutively
	// 1 2 3
	// 4 5 6
	// 7 8 9
	// becomes
	// 1 4 7 2 5 8 3 6 9
	int* tmp2 = (int*) malloc(sizeof(int) * m * m);
	int index = 0;
	for(int j = 0; j < m; j++) {
		for(int i = 0; i < m; i++) {
			tmp2[index++] = array[i][j];
		}	
	}
	free(tmp2);


	// sample question 4
	// flip a 2-D array along the horizontal center
	// 1 2 3
	// 4 5 6
	// 7 8 9
	// becomes
	// 7 8 9
	// 4 5 6
	// 1 2 3
	// by only copying m / 2 swaps (instead of the usual (m * m) / 2 swaps
	for(int i = 0; i < m / 2; i++) {
		int* tmp = array[i];
		array[i] = array[m - 1 - i];
		array[m - 1 - i] = tmp;
	}
	printf("flip along the horizontal middle via pointers\n");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	printf("\n");



	for(int i = 0; i < m; i++) {
		free(array[i]);
	}
	free(array);

	return 0;
}


void init_2d(point_t**** in, int r, int c, int e)
{
	point_t*** tmp = (point_t***) malloc(sizeof(point_t**) * r);
	for(int i = 0; i < r; i++) {
		tmp[i] = (point_t**) malloc(sizeof(point_t*) * c);
		for(int j = 0; j < c; j++) {
			tmp[i][j] = (point_t*) malloc(sizeof(point_t));
			tmp[i][j]->x = rand() % 100;
			tmp[i][j]->y = rand() % 100;
			tmp[i][j]->val = (int*) malloc(sizeof(int) * e);
			for(int k = 0; k < e; k++) {
				tmp[i][j]->val[k] = rand() % 1000;
			}
		}
	}

	*in = tmp;
}


void print_2d(point_t*** tmp, int r, int c, int e)
{
	printf("2-d array of pointers to struct\n");
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			printf("(%d %d)-> (%d, %d, ", i, j, tmp[i][j]->x, tmp[i][j]->y);
			for(int k = 0; k < e; k++) {
				printf("%d ", tmp[i][j]->val[k]);
			}
			printf(")\n");
		}
	}
	printf("\n");
}


void free_2d(point_t*** tmp, int r, int c)
{
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			free(tmp[i][j]->val);
			free(tmp[i][j]);
		}
		free(tmp[i]);
	}
	free(tmp);
}
