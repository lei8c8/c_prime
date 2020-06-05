// arrchar.c -- array of pointers, array of string
#include <stdio.h>
#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {
        "Adding numbers swiftly", 
        "Multiplying accurately", "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };

    char yourtalents[LIM][SLEN] = {
        "Walking in a straght line",
        "Sleeping", "Watching television",
        "Mailing letters", "Reading email"
    };

    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s\n", "My Talents", "Your Talnets");
    for (i = 0; i < LIM; i++)
        printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);
    
    printf("\nsize of mytalnets: %zd, sizeof yourtalents: %zd\n", 
            sizeof(mytalents), sizeof(yourtalents));

    return 0;
}
