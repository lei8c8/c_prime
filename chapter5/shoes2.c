// shoes2.c -- converts a shoe size to inches
#include <stdio.h>
#define ADJUST 7.64
#define SCALE 0.325

int main(void)
{
    double shoe;
    double foot;

    shoe = 3.0;
    while (shoe < 18.5)
    {
        foot = SCALE * shoe + ADJUST;
        printf("Shoe size (men's)   foot length\n");
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");

    return 0;
}