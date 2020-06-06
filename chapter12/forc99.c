// forc99.c
#include <stdio.h>

int main(void)
{
    int n = 10;

    printf("Initially, n = %d\n", n); //expect 10
    for (int n = 1; n < 3; n++)
        printf("loop 1: n = %d\n", n); //expect 1 and 2
    printf("After loop 1, n = %d\n", n); // expect 10
    for (int n = 1; n < 3; n++)
    {
        printf("loop 2, index n = %d\n", n);
        int n = 30;
        printf("loop 2: n = %d\n", n);
        n++;
    }
    printf("After loop 2, n = %d\n", n);

    return 0;
}