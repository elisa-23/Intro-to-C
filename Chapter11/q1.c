/* Modify Programming Project 7 from Chapter 2 so that it includes the following function:
void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);
The function determines the smallest number of $20, $10, $5, and $1 bills necessary to pay the amount represented by the do1lars parameter. The twenties parameter points to a variable in which the function will store the number of $20 bills required. The tens, fives, and ones parameters are similar. */

#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    int placeholder = dollars - (dollars % 20);
    *twenties = placeholder / 20;
    dollars -= *twenties * 20;
    placeholder = dollars - (dollars % 10);
    *tens = placeholder / 10;
    dollars -= *tens * 10;
    placeholder = dollars - (dollars % 5);
    *fives = placeholder / 5;
    dollars -= *fives * 5;
    *ones = dollars;
}

int main(void)
{
    int dollars, twenties, tens, fives, ones;
    printf("Enter a dollar amount: ");
    scanf("%d", &dollars);
    pay_amount(dollars, &twenties, &tens, &fives, &ones);
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);
    printf("$5 bills: %d\n", fives);
    printf("$1 bills: %d\n", ones);
    return 0;
}