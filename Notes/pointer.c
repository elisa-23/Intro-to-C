/* #include <stdio.h>

void double_x(int *x)
{
    *x = *x * 2;
}

int main()
{
    int x = 7;
    double_x(&x); // passing the address of x to the function double_x
    return 0;
} */

// when you manipulate a variable in a function, you are manipulating the value of the variable in the memory address that the pointer points to, so when you return from the function, the value of the variable is changed in the main function as well
// ex: usually it manipulates a copy of the variable, but when you use a pointer, it manipulates the original variable in the memory address that the pointer points to

// arrays are also pointers, so when you pass an array to a function, you are passing the address of the first element of the array, so when you manipulate the array in the function, you are manipulating the original array in the memory address that the pointer points to
