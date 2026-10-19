/* Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form:

    Enter a 24-hour time: 21:11
    Equivalent 12-hour time: 9:11 PM

Be careful not to display 12:00 as 0:00. */

#include <stdio.h>

int main(void)
{
    int hour, minute;
    printf("Enter a 24-hour time:\n");
    scanf("%d:%d", &hour, &minute);

    switch (hour)
    {
    case 0:
        hour = 12;
        printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
        break;
    case 12:
        printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
        break;
    default:
        if (hour > 12)
        {
            hour -= 12;
            printf("Equivalent 12-hour time: %d:%02d PM\n", hour, minute);
        }
        else
        {
            printf("Equivalent 12-hour time: %d:%02d AM\n", hour, minute);
        }
    }
    return 0;
}