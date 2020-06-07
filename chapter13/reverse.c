// reverse.c -- displays a file in reversed order
#include <stdio.h>
#include <stdlib.h>
#define CNTL_Z '\032' // EOF marker in Dos
#define SLEN 50

int main(void)
{
    char file[SLEN];
    char ch;
    FILE *fp;
    long count, last;

    puts("Enter the name of the file to be processed:");
    gets(file);

    if ((fp = fopen(file, "rb")) == NULL)
    {
        printf("reverse can't open %s\n", file);
        exit(1);
    }

    fseek(fp, 0L, SEEK_END); // go to the end of file
    last = ftell(fp);
}