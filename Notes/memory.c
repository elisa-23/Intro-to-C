#include <stdio.h>

int main()
{
    char name[16] = "Hello World";               // declare a character array (string) to hold a name with the maximum length of 16 characters
    char *x = name;                              // declare a pointer to a character and assign it the address of the name array
    char *y = &name[2];                          // declare a pointer to a character and assign it the address of the 3rd element of the name array
    char *z = &name[1];                          // declare a pointer to a character and assign it the address of the 2nd element of the name array
    printf("X = %p, Y = %p, Z = %p\n", x, y, z); // print the addresses of the pointers

    return 0; // return 0 to indicate that the function executed successfully
}
