#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        // Getting input from user for height
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (int height = 0; height < n; height++)  //If input is on true form use as a height counting
    {
        for (int space = n - height ; space > 1; space--) // Using height value for calculating how much space needed for each row
        {
            printf(" ");
        }
        for (int hash = 0; hash <= height; hash++)  // Deciding how many # is gonna print for each row repeatedly
        {
            printf("#");
        }
        printf("\n");
    }

}