#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_of_squares(int* numbers, int length);

int main()
{
    int length;
    int result[100];
    int counter = 0;
    while (scanf("%d", &length) != EOF)
    {

            int numbers[length];
            for (int i = 0; i < length; i++)
            {
                scanf("%d", &numbers[i]);
            }
            result[counter] = count_of_squares(numbers, length);
            counter++;


    }
    for (int k = 0; k < counter; k++)
    {
        printf("%d\n", result[k]);
    }
    return 0;
}


int count_of_squares(int* numbers, int length)
{
    int square = 0;
    for (int i = 0; i < length; i++)
    {
        if (((int)sqrt(numbers[i]) * (int)sqrt(numbers[i]))  == numbers[i])
        {
            square++;
        }

    }
    return square;
}
