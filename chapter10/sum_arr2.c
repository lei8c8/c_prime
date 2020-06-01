// use %u or %lu if %zd doesn't work
// sum_arr2.c -- sums the elements of an array
#include <stdio.h>
#define SIZE 10

int sum(int * start, int * stop);

int main(void)
{
    int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,20};
    long answer;
    
    answer = sum(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return 0;
}

int sum(int * start, int * stop)
{
    int total = 0;

    while (start < stop)
    {
        total += *start;
        start++;
    }
    return total;
}
