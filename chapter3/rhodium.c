/* rhodium.c -- your weight in rhodium */

#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    // get input from the user
    scanf("%f", &weight);
    value = 770.0 * weight * 14.5833;
    printf("Your weight in rhodium is worth $%.2f.\n", value);
    printf("You are easily worth that! If rhodium prices drop,\n");
    printf("eat more to maintain value.\n");
    return 0;
}