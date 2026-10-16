// Write a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:

#include <stdio.h>

int main()
{
    // sets up the subtotal variable and then takes the user's input via scanf
    // scanf --> you need to add & in front of the variable to make a pointer so that it could store the input value
    float subtotal = 0;
    printf("Please enter your total: \n");
    scanf("%f", &subtotal);

    float tax = subtotal * .05;

    float total = subtotal + tax;
    printf("Your total with tax is: %.2f\n", total);
    // prints the total with tax added, formatted to 2 decimal places

    return 0;
}