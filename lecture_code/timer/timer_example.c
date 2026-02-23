#include <stdlib.h>
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

int main(int argc, char** argv) {

	struct timeval start, end;	
	long long elapsed_microseconds;
	gettimeofday(&start, NULL);

	// do stuff
	sleep(2);

	gettimeofday(&end, NULL);
	elapsed_microseconds = (end.tv_sec - start.tv_sec) * 1000000LL + (end.tv_usec - start.tv_usec);
	printf("Time elapsed: %lld microseconds\n", elapsed_microseconds);
}
