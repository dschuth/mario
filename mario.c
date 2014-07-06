#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
    printf("Please gve me an integer between 1 and 23: \n");
    height = GetInt();
    }
    while (height <= 1 || height >=23);
    
        int row;
        int space;
        int hash;
        for (row = 1; row <= height; row++)
        {
            for (space = height - 1; space >= 0; space--)
            {
            printf(" ");
            }
            for (hash = row + 1; hash <= height + 1; hash++)
            {
            printf("#");
            }
            printf("\n"); 
        }
        return 0;
}
