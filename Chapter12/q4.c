/* Simplify Programming Project 2(b) by taking advantage of the fact that an array name can be used as a pointer. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char message[100];
    printf("Enter a message: ");
    scanf("%[^\n]", message);
    char *left = message;
    char *right = message + strlen(message) - 1;
    while (left < right)
    {
        if (!isalpha(*left))
        {
            left++;
            continue;
        }
        if (!isalpha(*right))
        {
            right--;
            continue;
        }
        if (tolower(*left) != tolower(*right))
        {
            printf("Not a palindrome\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome\n");
    return 0;
}