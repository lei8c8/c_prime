// addresses.c -- addresses of string
#define MSG "I'm special."
#include <stdio.h>

int main(void)
{
    char ar[] = MSG;
    const char * pt = MSG;
    printf("address of \"I'm special\": %p \n", "I'm special");
    printf("address ar: %p\n", ar); // ar copies string
    printf("address of pt: %p\n", pt); // no copy here, point to it
    printf("address of MSG: %p\n", MSG); //same as pt
    printf("address of \"I'm special\": %p \n", "I'm special");

    return 0;
}