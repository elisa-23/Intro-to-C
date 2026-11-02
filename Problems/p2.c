/* Problem 2: Find the smallest and largest
A function can only return one value, but pointers let it send back more.

Why you need pointers here: you need two answers back (the smallest and the largest), but return can only send back one. So main creates two empty variables, lo and hi, and passes their addresses. minMax writes its answers into those addresses with *min = ... and *max = ..., and when it finishes, lo and hi hold the results. The array parameter int *arr is a pointer too: passing an array always passes the address of its first element, which is why you also pass the length n.
void minMax(int *arr, int n, int *min, int *max);
It should look through the n numbers in arr and store the smallest in *min and the largest in *max. Test it with this main, which should print min = -2, max = 9:
```C
int main(void) {
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;
    minMax(data, 5, &lo, &hi);
    printf("min = %d, max = %d\n", lo, hi);
    return 0;
}
```
Challenge: rewrite the loop inside minMax using pointer arithmetic (*(arr + i) or a moving pointer) instead of arr[i]. */

#include <stdio.h>

int minMax(int *arr, int n, int *min, int *max)
{
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (*(arr + i) < *min)
        {
            *min = arr[i];
        }
        if (*(arr + i) > *max)
        {
            *max = arr[i];
        }
    }
    return 0;
}

int main(void)
{
    int data[5] = {4, -2, 9, 0, 7};
    int lo, hi;
    minMax(data, 5, &lo, &hi);
    printf("min = %d, max = %d\n", lo, hi);
    return 0;
}