// include libraries pre writtien for the course
#include <stdio.h>
#include <cs50.h>

// part of main
int main(void)
{
    // variable = name gets string user input and saves it into variable
    // first declare what tpye the variable is
    string name = get_string("What's your name? ");
    // printf  prints and formats a string outputs hello and whatever is stored in name
    //f stands for formatted to connect a varaible to your print using the placeholder
    // n is an escape statement stands for now line looks better in command line
    // %s (placeholder) = string name is just name variable
    printf("hello, %s\n", name);
}