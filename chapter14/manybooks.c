/* manybooks.c -- many books inventory */
#include <stdio.h>
#define MAXTITL 41 // max length of title + 1
#define MAXAUTL 31 // max length of author's name + 1
#define MAXBKS 100

struct book {
    char title[MAXTITL];
    char author[MAXAUTL];
    float value;
}; // end of structure template, tag is book

int main(void)
{
    struct book library[MAXBKS];
    int count = 0;
    int index;

    printf("Please enter the book title.\n");
    printf("Press [Enter] at the start of line to stop.\n");
    while (count < MAXBKS && gets(library[count].title) != NULL && library[count].title[0]!= '\0')
    {
        printf("Now enter the author.\n");
        gets(library[count].author);

        printf("Now enter the value.\n");
        scanf("%f", &library[count++].value);

        while (getchar() != '\n')
            continue;

        if (count < MAXBKS)
            printf("Enter the next title.\n");
    }

    if (count > 0)
    {
        printf("Here is the list of your books:\n");
        for (index = 0; index < count; index++)
            printf("%s by %s: $%.2f\n", library[index].title, library[index].author, library[index].value);
    }
    else 
        printf("No books? Too bad.\n");
    
    return 0;
}