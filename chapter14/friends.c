// friends.c -- example of nested structure
#include <stdio.h>
#define LEN 20

// const char * msgs[5] = {
//     "    Thank you for the wonderful evening, ",
//     "You certainly prove that a ",
//     "is a special kind of guy. We must get together", 
//     "over a delicious ",
//     " and have a few laughs"
// };

struct names {
    char first[LEN];
    char last[LEN];
};

struct guy {
    struct names handle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"Ewen", "Villard"},
            "grilled salmon",
            "personality coach",
            58112.00
        },
        {
            {"Rodney", "Swillbelly"},
            "tripe",
            "tabloid editor",
            232400.0
        }
    };

    struct guy * him; // declare pointer to struct
    printf("address #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1: %p #2: $p\n", him, him + 1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
    him++;
    printf("him->favgood is %s: him->handle.last is %s\n", him->favfood, him->handle.last);

    return 0;
}