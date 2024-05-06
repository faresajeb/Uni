#include <stdio.h>
#include <stdlib.h>

int count_of_odds(int* numbers, int length);

int main()
{
    int n;
    printf("Enter n: ");

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


        result[i] = count_of_odds(numbers, length);

    }
    for (int k = 0; k < n; k++)
    {
        printf("%d\n", result[k]);
    }



    return 0;
}

int count_of_odds(int* numbers, int length)
{
    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            count++;
        }
    }

    return count;
}
