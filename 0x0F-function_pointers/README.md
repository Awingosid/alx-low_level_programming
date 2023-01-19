0x0F. C - Function pointers
1. 0-print_name.c:  a function that prints a name.
2. 1-array_iterator.c:  a function that executes a function given as a parameter on each element of an array.where size is the size of the array and action is a pointer to the function you need to use
3. 2-int_index.c:  a function that searches for an integer.where size is the number of elements in the array array
cmp is a pointer to the function to be used to compare values
int_index returns the index of the first element for which the cmp function does not return 0
If no element matches, return -1
If size <= 0, return -1
4. 3-main.c:This file should contain your main function only.
5. 3-op_functions.c: This file should contain the 5 following functions (not more):

op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
6. 3-get_op_func.c: This file should contain the function that selects the correct function to perform the operation asked by the user.where s is the operator passed as argument to the program
This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: get_op_func("+") should return a pointer to the function op_add
7. 3-calc.h: This file should contain all the function prototypes and data structures used by the program. 
8. 100-main_opcodes.c: a program that prints the opcodes of its own main function.
