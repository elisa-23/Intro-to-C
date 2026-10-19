/* Write a program that asks the user to enter two integers, then calculates and displays their greatest common divisor (GCD):

    Enter two integers: 12 28
    Greatest common divisor: 4

Hint: The classic algorithm for computing the GCD, known as Euclid's algorithm, goes as
follows: Let m and n be variables containing the two numbers. If n is 0, then stop: m contains the GCD. Otherwise, compute the remainder when m is divided by n. Copy n into m
and copy the remainder into n. Then repeat the process, starting with testing whether n is 0. */

int main(void)
{
    int m, n, remainder;
    printf("Enter two integers: \n");
    scanf("%d %d", &m, &n);

    if (n == 0)
    {
        printf("Greatest common divisor: %d\n", m);
    }
    else if (m == 0)
    {
        printf("Greatest common divisor: %d\n", n);
    }
    else
    {
        // Euclid's algorithm
        while (n != 0)
        {
            remainder = m % n;
            m = n;
            n = remainder;
        }
        printf("Greatest common divisor: %d\n", m);
    }
    return 0;
}