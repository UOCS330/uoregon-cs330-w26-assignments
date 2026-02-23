# extra01
Extra Credit Homework 01 - Parallelizing SpMV

0. READ THE INSTRUCTIONS BELOW COMPLETELY AND CAREFULLY BEFORE PROCEEDING.

0.1 Read the lecture on parallel programming.

1. Review the lecture of Parallel Programming.

2. Read the code to get an understanding of how the code works. In particular, look at the timer and the Makefile.

3. Parallelize your code using OpenMP, as discussed during lecture.

4. Use the provided timer to time your entire code on the provided input, and ensure that the performance improves (i.e., execution time decreases) with the number of threads. The provided input can be found in the "cant" directory. 'cant.mtx' is the matrix, 'b.mtx' is the input matrix, and 'ans.mtx' is the correct output.

You can also change the number of threads using the environment variable OMP_NUM_THREADS in bash:

export OMP_NUM_THREADS=<number of threads to use>

The performance should increase when you change the number of threads from 1 to 32.

Try different scheduling (e.g., static. vs dynamic).

5. Leave a comment inside the function that indicates

    a) what # of threads yielded the best performance

    b) how it compares to running it with only one thread (e.g., it's 10x faster with X threads and using Y scheduling), 

    c) and which scheduling yields better performance

6. Complete the homework, and then push to GitHub. If you do not push to GitHub, the TA and I cannot see the code, and it will be considered a late assignment (i.e., not graded).

7. You can open the /proc/cpuinfo file to see what type of processor is on ix-dev (or any other system with Linux). The total number of "processor" listed may not be the physical number of cores - it's may be the total number of "hyperthreads" (for Intel) or "cluster multi-threads" (for AMD).
