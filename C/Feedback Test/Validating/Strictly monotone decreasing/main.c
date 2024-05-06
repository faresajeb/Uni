#include <stdio.h>
#include <stdlib.h>

int is_monotone_decreasing(int *numbers, int length);

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

        result[i] = is_monotone_decreasing(numbers, length);


    }
      for (int j = 0; j < n; j++)
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


int is_monotone_decreasing(int *numbers, int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        if (numbers[i] > numbers[i+1])
        {

        }
        else
        {
            return 0;
        }
    }
    return 1;

}
