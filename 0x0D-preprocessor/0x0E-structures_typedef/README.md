0x0E. C - Structures, typedef project

1. dog.h: Define a new type struct dog with the following elements:

name, type = char *
age, type = float
owner, type = char *

2. 1-init_dog.c: a function that initialize a variable of type struct dog

3. 2-print_dog.c:  a function that prints a struct dog
If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
If d is NULL print nothing.

4. dog.h: Define a new type dog_t as a new name for the type struct dog

5. 4-new_dog.c:  a function that creates a new dog 
You have to store a copy of name and owner
Return NULL if the function fails

6. 5-free_dog.c:  a function that frees dogs
