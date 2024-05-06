#include <stdio.h>
#include <stdlib.h>

int has_matching_parity(int *numbers, int length);

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

        result[i] = has_matching_parity(numbers, length);


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


int has_matching_parity(int *numbers, int length)
{
    for (int i = 0; i < length; i++)
    {
        if (!(numbers[i] == i))
        {
            return 0;
        }

    }
    return 1;
}
