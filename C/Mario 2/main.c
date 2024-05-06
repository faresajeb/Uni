#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;

    do
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
    {
        for (int space = height - row - 1;space > 0; space--)
        {
            printf(" ");
        }
        for (int hash = 0; hash < row +1 ; hash++)
        {
            printf("#");
        }
        printf("  ");
                for (int hash = 0; hash < row +1 ; hash++)
        {
            printf("#");
        }
        printf("\n");

    }


    return 0;
}
