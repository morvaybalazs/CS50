#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int X = 3;
    int points = get_int("How many points did you lose? ");

    if(points < X)
    {
        printf("You lost fewer points than me.\n");
    }
    else if(points > X)
    {
        printf("You lost more points than me.\n");
    }
    else
    {
        printf("You lost the same points as me.\n");
    }
}