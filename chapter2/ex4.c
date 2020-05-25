#include <stdio.h>

void print_jolly_good(void);
void print_nobody(void);

int main(void) 
{
    print_jolly_good();
    print_jolly_good();
    print_jolly_good();
    print_nobody();
    return 0;
}

void print_jolly_good(void)
{
    printf("For he's a jolly good fellow!\n");
}

void print_nobody(void)
{
    printf("Which nobody can deny!");
}