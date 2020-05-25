// ex1.c -- creates an array to store 26 char
#include <stdio.h>
#define CHAR_COUNT 26

int main(void)
{
    char letters[CHAR_COUNT];
    int i;
    int v = 65;
    for (i = 0; i < CHAR_COUNT; i++)
    {
        letters[i] = v;
        v++;
    }
    for (i = 0; i < CHAR_COUNT; i++)
        printf("%4c", letters[i]);
    printf("\n");
}
