#include <stdio.h>

void display_smile(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        display_smile();
    }
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        display_smile();
    }
    printf("\n");

    display_smile();
    printf("\n");
}

void display_smile(void)
{
    printf("Smile!");
}
