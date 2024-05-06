#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int count_of_squares(int* numbers, int length);

int main()
{
    int n;
    scanf("%d", &n);
    getchar();

    int result[n];

    for (int i = 0; i < n; i++)
    {
        int length;
        scanf("%d", &length);

        int numbers[length];

        for (int j = 0; j < length; j++)
        {
            scanf("%d", &numbers[j]);
        }

        printf("%d\n", count_of_squares(numbers, length));
    }




    return 0;
}

int count_of_squares(int* numbers, int length)
{
    int square = 0;
    for (int i = 0; i < length; i++)
    {

        if ((sqrt(numbers[i]) * sqrt(numbers[i]))  == numbers[i])
        {
            square++;
        }

    }
    return square;
}
