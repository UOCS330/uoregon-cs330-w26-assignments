# homework02
Homework 2 - File I/O

0. READ THE INSTRUCTIONS BELOW COMPLETELY BEFORE PROCEEDING.

1. There are five empty functions. Read their descriptions. The functions are

    a) int get_num_ints(char** argv)

    b) void allocate_mem(unsigned int** input_one, unsigned int** input_two, unsigned long int** output, int num_ints);

    c) void get_ints(char** argv, unsigned int* input_one, unsigned int* input_two, unsigned long int* output, int num_ints);

    d) void sum_ints(unsigned int* input_one, unsigned int* input_two, unsigned long int* output, int num_ints);

    e) void save_output(char** argv, unsigned int* input_one, unsigned int* input_two, unsigned long int* output, int num_ints);

2. Implement the five functions according to their descriptions.

3. Test the functions on the given two input data files. The answer should match the provided output file. Don't forget to specify the output file to a different name, so you can compare to the solution (file_3.txt).

    a) Input files: file_1.txt and file_2.txt

    b) Output file (solution): file_3.txt

4. Things to note:

    a) Do not change ANY of the provided skeleton code, including the header of the functions that you are required to implement.

    b) Every function in the file (listed in 2. above) must be implemented to provide the described functionality.

   c) Do not ADD any new functions.

   d) Do NOT make any assumptions about the number of integers in the input files.

   e) Do NOT hard-code the file names. This will result in an automatic 0 for the four test files that will be used for grading (see the rubric for more detail).

   f) Do NOT hard code the size of the unsigned (long) integer arrays to 1,000,000 (or any other sizes). This will result in point deduction during grading.

     (However, hard coding the array size is allowed for reading the input files using fgets() or fgetc()).

   g) Make sure your code compiles and runs on ix-dev with -std=c11 flag.

5. Complete the homework, and then push to GitHub. If you do not push to GitHub, the TA and I cannot see the code, and it will be considered a late assignment (i.e., not graded).
