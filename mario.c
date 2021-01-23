#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //get user's input
        n = get_int("Positive number: ");
    }
    //ask again until the input is more than 0 but less than 9
    while (n < 1 || n > 8);

    //use for loop that will go over and over until i is less than user's input
    for (int i = 0; i < n; i++)
    {
        //create new var that will represent dots / white space that will become less each round
        for (int e = n - 1; e > i; e--)
        {
            printf(" ");
        }
        //print hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        //print end of line
        printf("\n");
    }
}