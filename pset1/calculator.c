#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // takes x variable from user
    int x = get_int("x: ");
    // takes y variable from user
    int y = get_int("y: ");

    // divide x by y
    float z = (float) x/(float) y;

    // computes and prints x+y
    printf("%.50f\n", z);
}