#include <stdio.h>
#include <stdlib.h>

int is_twisting(int* numbers, int length);

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

        result[counter] = is_twisting(numbers, length);
        counter++;
    }
    for (int j = 0; j < counter; j++)
    {
        if (result[j] == 1)
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


int is_twisting(int* numbers, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (((numbers[i] > 0) && (numbers[i+1] < 0)) || ((numbers[i] < 0) && (numbers[i+1] > 0)))
        {

        }
        else
        {
            return 0;
        }
    }
    return 1;
}
