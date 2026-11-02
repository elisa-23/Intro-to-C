/* (a) Write a program that reads a message, then checks whether it's a palindrome (the letters in the message are the same from left to right as from right to left):
    Enter a message : He lived as a devil, eh?
    // Palindrome
    Enter a message : Madam, I am Adam.
    // Not a palindrome
Ignore all characters that aren't letters. Use integer variables to keep track of positions in the array.

(b) Revise the program to use pointers instead of integers to keep track of positions in the
array. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* int main(void)
{
    char message[100];
    printf("Enter a message: ");
    scanf("%[^\n]", message);
    int left = 0;
    int right = strlen(message) - 1;
    while (left < right)
    {
        if (!isalpha(message[left]))
        {
            left++;
            continue;
        }
        if (!isalpha(message[right]))
        {
            right--;
            continue;
        }
        if (tolower(message[left]) != tolower(message[right]))
        {
            printf("Not a palindrome\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("Palindrome\n");
    return 0;
} */

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