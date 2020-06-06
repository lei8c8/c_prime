/* hiding.c -- variables in blocks */
#include <stdio.h>

int main(void)
{
    int x = 30;

    printf("x in ourter block: %d\n", x);
    // expect the output is 30
    {
        int x = 77;
        printf("x in inner block: %d\n", x);
        // expect the output is 77 as hiding happens
    }
    printf("x in ourter block: %d\n", x);
    // expect the output is 30
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d\n", x);
        // expect 101 for 3 times
    }
    printf("x in ourter block: %d\n", x);
    // expect the output is 34
    return 0;
}