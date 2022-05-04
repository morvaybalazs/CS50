#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // declare variables as int
    int h, r, c, s;
    do
    {
        // get user input height
        h = get_int("Height: ");
    }
    // do not accept input that is less than 0 or more than 8
    while (h <= 0 || h > 8);

    //for each row  as long as row is less than height
    //print a new line (considering 0 indexing)
    for (r = 0; r < h; r++)
    {
        //for each space  as long  as space is less than
        //height - row - 1, add a space
        for (s = 0; s < h - r - 1; s++)
        {
            printf(" ");
        }
        //for each column as long as column is  less or equal to row
        //add 1 hash <= is used as the column is nested in the row
        //everytime row increases column is initialized to 0
        for (c = 0; c <= r; c++)
        {
            // for each hash
            printf("#");
        }

        //print two spaces as thats the gap between pyramids
        printf("  ");
        // simply build another pyramid that is not right aligned
        //for each column as long as column is  less or equal to row
        //add 1 hash <= is used as the column is nested in the row
        //everytime row increases column is initialized to 0
        for(c = 0; c <= r; c++)
        {
            printf("#");
        }

        //next row
        printf("\n");
    }
}