// power.c -- raise numbers to integer powers

#include <stdio.h>
double power(double n, int p); // func prototype

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to whic\nthe number will be raised. Enter q to quit.\n");
    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("Enter next pair of numbers or q to quit.\n");
    }
    printf("Hope you enjoyed this power trip -- bye!\n");
    return 0;
}

double power(double n, int p)
{
    double result = 1.0;
    int i;
    for (i = 1; i <= p; i++)
        result *= n;
    return result;
}