#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
// these are usually not included in the regular C library, but are included here for convenience
// stdio.h is included for input/output functions
// stdlib.h is included for memory allocation and process control functions
// ctype.h is included for character handling functions
// stdbool.h is included for boolean type support (usually in the regular C ilbrary its just ones and zeros)
// string.h is included for string handling functions

// every C file has a main function, which is the entry point of the program

// want to avoid global variables when we can

#define COOL_NUMBER 42 // this is a preprocessor directive that defines a constant value, which can be used throughout the program
// this another way of writing a variable but just a different type of variable

int show_data_types()
{
    int x, y, z; // declare three integer variables --> has to be the same type, but can be initialized to different values
    // want to give values to things or else c will just give them random values, which is not good

    x = 5;         // assign a value to x
    char name[20]; // declare a character array (string) to hold a name with the maximum length of 20 characters
    // can't redefine the array as name = "John";
    // this is not allowed in C, we have to use strcpy to copy the string into the array

    strcpy(name, "John"); // assign a value to the name variable
    z = COOL_NUMBER * x;  // assign a value to z using the preprocessor directive
    printf("x is %d, string is %s, z is %d \n", x, name, z);
    // %d is a format specifier for integers, %s is a format specifier for strings
    // always needs the \n at the end of the string to print a new line, otherwise it will just keep printing on the same line (buffer error)
    // need to include the x and name variables after the string to print their values

    return 0; // return 0 to indicate that the function executed successfully
    // all functions in C must return a value, even if it is just 0 to indicate success
}

int main()
{
    show_data_types(); // call the show_data_types function to display the values of the variables (how to call functions)
    return 0;          // need a semicolon after every statement in C, including the return statement
}

// how to compile and run the program:
// 1. Open a terminal and navigate to the directory where the app.c file is located
// 2. Compile the program using the command:
// gcc app.c -o app or gcc -Wall -Wextra memory.c -o memory
// the difference between the two commands is that the first one compiles the app.c file and creates an executable file called app, while the second one compiles the memory.c file and creates an executable file called memory

// the -Wall and -Wextra flags enable additional warnings during compilation, which can help catch potential issues in the code

// 3. Run the program using the command:
// ./app