#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int count_of_increasing_neighbours(int* numbers, int length);

int main() {

    int n;
    scanf("%d", &n);
    getchar();

    int* result[n];

    for (int i = 0; i < n; i++)
    {
        int length;
        scanf("%d", &length);

        for (int k = 0; k < length; k++)
        {
            int numbers[length];
            scanf("%d", &numbers[k]);
        }

        result[i] = count_of_increasing_neighbours(numbers, length);

    }
    for(int j = 0; j < n; j++)
    {
        printf("%d\n", result[j]);
    }


    return 0;
}

int count_of_increasing_neighbours(int* numbers, int length)
{
    int count = 0;
    for (int i = 0; i < length - 1; i++)
    {
        if (numbers[i] < numbers[i+1])
        {
            count++;
        }
    }
    return count;
}
