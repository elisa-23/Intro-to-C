/* (a) Write a program that reads a message, then prints the reversal of the message:

    Enter a message : Don't get mad, get even.
    Reversal is :.neve teg, dam teg t'noD

Hint : Read the message one character at a time(using getchar) and store the characters in an array. Stop reading when the array is full or the character read is '\n'.

(b)Revise the program to use a pointer instead of an integer to keep track of the current position in the array. */

#include <stdio.h>
#include <string.h>

/* int main(void)
{
    char message[100];
    char reverse[100];
    printf("Enter a message: ");
    scanf("%[^\n]", message);

    int length = strlen(message);
    for (int i = length - 1; i >= 0; i--)
    {
        reverse[length - 1 - i] = message[i];
    }
    reverse[length] = '\0';
    // Null-terminator because without it there is a p@% at the end of the string when printed.
    printf("Reversal is: %s\n", reverse);
    return 0;
} */

int main(void)
{
    char message[100];
    char reverse[100];
    printf("Enter a message: ");
    scanf("%[^\n]", message);

    char *ptr = message + strlen(message) - 1; // Pointer to the last character of the message
    char *rev_ptr = reverse;                   // Pointer to the start of the reverse array

    while (ptr >= message)
    {
        *rev_ptr = *ptr;
        rev_ptr++;
        ptr--;
    }
    *rev_ptr = '\0';
    printf("Reversal is: %s\n", reverse);
    return 0;
}