/* Modify Programming Project 9 from Chapter 5 so that each date entered by the user is
stored in a date structure (see Exercise 5). Incorporate the compare_dates function of
Exercise 5 into your program. */

#include <stdio.h>

// original project function
/* int main()
{
    int first_month, first_day, first_year;
    int second_month, second_day, second_year;

    printf("Enter the first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_month, &first_day, &first_year);

    printf("Enter the second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_month, &second_day, &second_year);

    int year_diff = first_year - second_year;
    int month_diff = first_month - second_month;
    int day_diff = first_day - second_day;

    if (year_diff < 0)
    {
        printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
    }
    else if (year_diff > 0)
    {
        printf("%d/%d/%d is later than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
    }
    else
    {
        if (month_diff < 0)
        {
            printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
        }
        else if (month_diff > 0)
        {
            printf("%d/%d/%d is later than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
        }
        else
        {
            if (day_diff < 0)
            {
                printf("%d/%d/%d is earlier than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
            }
            else if (day_diff > 0)
            {
                printf("%d/%d/%d is later than %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
            }
            else
            {
                printf("%d/%d/%d is the same as %d/%d/%d\n", first_month, first_day, first_year, second_month, second_day, second_year);
            }
        }
    }

    return 0;
} */

struct date
{
    int month;
    int day;
    int year;
};

int compare_dates(struct date d1, struct date d2)
{
    int date1 = d1.year * 10000 + d1.month * 100 + d1.day;
    int date2 = d2.year * 10000 + d2.month * 100 + d2.day;

    if (date1 < date2)
    {
        return -1;
    }
    else if (date1 > date2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    struct date d1, d2;
    printf("Enter the first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);

    printf("Enter the second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    int result = compare_dates(d1, d2);

    switch (result)
    {
    case -1:
        printf("%d/%d/%d is earlier than %d/%d/%d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
        break;
    case 1:
        printf("%d/%d/%d is later than %d/%d/%d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
        break;
    case 0:
        printf("%d/%d/%d is the same as %d/%d/%d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
        break;
    default:
        printf("Error comparing dates\n");
        break;
    }

    return 0;
}