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
    { 
    printf("The height you've determined is: %i \n", height);
    }
        
        for (int row = 1, row >= height, row++)
        {
            for (int space = height - 1, space == 0, space--)
            {
            printf(" ");
            }
            for (int hash = row + 1, hash == 0, hash--)
            printf("#");
            }
            printf("\n"); 
        }
}
