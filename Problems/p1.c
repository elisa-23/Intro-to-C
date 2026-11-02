/* Problem 1: Write a swap function
Write a function swap that exchanges the values of two int variables in main. Then complete main so it prints Before: x=3 y=9 and After: x=9 y=3.
Why you need pointers here: x and y live inside main. When you call a function, C hands it copies of the values, so a function that swaps its copies changes nothing in main. If you instead give swap the addresses of x and y (&x, &y), the function can use * to reach back into main's memory and change the real variables.
#include <stdio.h>


```C
int main(void) {
    int x = 3, y = 9;
    printf("Before: x=%d y=%d\n", x, y);
    // call swap here
    printf("After: x=%d y=%d\n", x, y);
    return 0;
}
``` */

#include <stdio.h>

int swap(int *a, int *b)
{
    int placeholder = *a;
    *a = *b;
    *b = placeholder;
    return 0;
}

int main(void)
{
    int x = 3, y = 9;
    printf("Before: x=%d y=%d\n", x, y);
    // call swap here
    printf("After: x=%d y=%d\n", x, y);
    return 0;
}
