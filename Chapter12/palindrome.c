// Palindrome checker - Build a cleaned copy of the string, reverse a second copy, and compare them with strcmp.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char message[100];
    char cleaned[100];
    char reversed[100];
    printf("Enter a message:");
    scanf("%[^\n]", message);

    int length = strlen(message);
    int counter = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalpha(message[i]))
        {
            cleaned[counter] = tolower(message[i]);
            counter++;
        }
    }
    cleaned[counter] = '\0';

    for (int i = counter - 1; i >= 0; i--)
    {
        reversed[counter - 1 - i] = cleaned[i];
    }
    reversed[counter] = '\0';

    if (strcmp(cleaned, reversed) == 0)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome\n");
    }
    return 0;
}