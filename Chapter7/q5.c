/* In the SCRABBLE Crossword Game, players form words using small tiles, each containing a letter and a face value.The face value varies from one letter to another, based on the letter's rarity. (Here are the face values: 1:AEILNORSTU, 2:DG, 3:BCMP, 4:FHVWY, 5:K, 8:JX, 10:QZ.) Write a program that computes the value of a word by summing the values of its letters:

    Enter a word : pitfall
    Scrabble value : 12

Your program should allow any mixture of lower - case and upper - case letters in the word.Hint: Use the toupper library function. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char word[20];
    int score = 0;
    printf("Enter a word:\n");
    scanf("%s", word);

    for (size_t i = 0; i < strlen(word); i++)
    {
        switch (toupper(word[i]))
        {
        // AEILNORSTU
        case 'A':
        case 'E':
        case 'I':
        case 'L':
        case 'N':
        case 'O':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
            score++;
            break;
        // DG
        case 'D':
        case 'G':
            score = score + 2;
            break;
        // BCMP
        case 'B':
        case 'C':
        case 'M':
        case 'P':
            score = score + 3;
            break;
        // FHVWY
        case 'F':
        case 'H':
        case 'V':
        case 'W':
        case 'Y':
            score = score + 4;
            break;
        // K
        case 'K':
            score = score + 5;
            break;
        // JX
        case 'J':
        case 'X':
            score = score + 8;
            break;
        // QZ
        case 'Q':
        case 'Z':
            score = score + 10;
            break;
        default:
            printf("This is not a valid letter.\n");
            break;
        }
    }
    printf("Scrabble value: %d\n", score);
    return 0;
}