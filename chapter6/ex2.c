#include <stdio.h>

int main(void) 
{
    int i = 1;
    while (i <= 5)
    {
        int j = 0;
        while (j < i)
        {
            printf("%c", '$');
            j++;
        }
        printf("\n");
        i++;
    }
}