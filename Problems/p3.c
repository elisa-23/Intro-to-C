/* Q3
Problem 5: Reverse an array in place with two pointers
Write a function that reverses an array without using a second array and without using square brackets [ ] inside the function:
void reverseArray(int *arr, int n);
Use two pointers: left starting at the first element and right starting at the last. Swap the values they point to, then move them toward each other until they meet.
Test it with this main, which should print 6 5 4 3 2 1:
```C
int main(void) {
    int data[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(data, 6);
    for (int i = 0; i < 6; i++) {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}
```
Why you need pointers here: an array passed to a function is really the address of its first element, so the function works on main's actual array, not a copy. That's why the changes are still there after the function returns. The two pointers also let you walk the array from both ends using pointer arithmetic (arr + n - 1 is the address of the last element).

Answer in a sentence: does your function still work for an array with an odd number of elements, like {10, 20, 30, 40, 50}? What happens to the middle element? */

// Yes, the function still works for an array with an odd number of elements, since the middle element would remain unchanged since the left and right pointers would meet at the middle element (would be the same element), therefore no swap would occur, leaving the middle element unchanged.

#include <stdio.h>

void reverseArray(int *arr, int n)
{
    int *left = arr;
    int *right = arr + n - 1;
    for (int i = 0; i < n / 2; i++)
    {
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main(void)
{
    int data[6] = {1, 2, 3, 4, 5, 6};
    reverseArray(data, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}