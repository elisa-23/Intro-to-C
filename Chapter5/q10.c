/* Using the switch statement, write a program that convertsa numerical grade into a letter grade:

    Enter numerical grade: 84
    Letter grade: B

Use the following grading scale: A = 90-100, В = 80-89, С = 70–79, D = 60-69, F= 0-59.
Print an error message if the grade is larger than 100 or less than 0. Hint: Break the grade
into two digits, then use a switch statement to test the ten's digit. */

#include <stdio.h>
#include <string.h>

int main(void)
{
    int grade, tens_digit;
    printf("Enter numerical grade:\n");
    scanf("%d", &grade);

    tens_digit = (grade - (grade % 10)) / 10;

    switch (tens_digit)
    {
    case 10: // case 10, 9 corresponds to an A grade
    case 9:
        printf("Letter grade: A\n");
        break;
    case 8:
        printf("Letter grade: B\n");
        break;
    case 7:
        printf("Letter grade: C\n");
        break;
    case 6:
        printf("Letter grade: D\n");
        break;
    case 5: // case 5, 4, 3, 2, 1, and 0 all correspond to an F grade
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        printf("Letter grade: F\n");
        break;
    default:
        printf("Error: Grade must be between 0 and 100.\n");
    }

    return 0;
}