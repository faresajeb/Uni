#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int is_strictly_monotone_increasing(int* numbers, int length);

int main() {

    int length;
    int counter = 0;
    int result[100];
    while (scanf("%d", &length) != EOF)
    {
        int numbers[length];


            for (int i = 0; i < length; i++)
            {
                scanf("%d", &numbers[i]);
            }
            result[counter] = is_strictly_monotone_increasing(numbers, length);
            counter++;



    }
    for (int k = 0; k < counter; k++)
    {
        if (result[k])
        {
            printf("True\n");
        }
        else
        {
            printf("False\n");
        }
    }

    return 0;
}


int is_strictly_monotone_increasing(int* numbers, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (numbers[i] >= numbers[i + 1])
        {
            return 0;
        }

    }

    return 1;
}
