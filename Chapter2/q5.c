/* Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
    3x^5 + 2x^4 - 5x³ - x² + 7х - 6
Hint : C doesn 't have an exponentiation operator, so you' ll need to multiply x by itself repeatedly in order to compute the powers of x.(For example, x * x * x is x cubed.) */

#include <stdio.h>

int main()
{
    float x = 0;
    printf("Enter a value for x to enter into the polynomial, 3x^5 + 2x^4 - 5x³ - x² + 7х - 6: \n");
    scanf("%f", &x);

    float y = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) - (x * x) + 7 * x - 6;
    printf("The value of the polynomial, when x is %f, is %.2f. \n", x, y);

    return 0;
}