/* book.c -- one-book inventory */
#include <stdio.h>
#define MAXTITL 41 // max length of title + 1
#define MAXAUTL 31 // max length of author's name + 1

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; // end of structure template, tag is book

int main(void)
{
    struct book library; // declare library as a book variable

    printf("Please enter the book title.\n");
    gets(library.title);

    printf("Now enter the author.\n");
    gets(library.author);

    printf("Now enter the value.\n");
    scanf("%f", &library.value);

    printf("%s by %s: $%.2f\n", library.title, library.author, library.value);
    printf("%s: \"%s\" ($%.2f)\n", library.author, library.title, library.value);

    printf("Done.\n");
    return 0;
}