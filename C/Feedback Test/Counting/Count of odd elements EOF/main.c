#include <stdio.h>
#include <stdlib.h>

int count_of_odds(int* numbers, int length);

int main()
{
    int length;
    int result[100];
    int counter = 0;

    while (scanf("%d", &length))
    {
        if (length == 0)
        {
            break;
        }
        int numbers[length];
        for (int i = 0; i < length ; i++)
        {
            scanf("%d", &numbers[i]);
        }
         result[counter] = count_of_odds(numbers, length);
         counter++;
    }

    for (int j = 0; j < counter; j++)
    {
        printf("%d\n", result[j]);
    }
    return 0;
}



int count_of_odds(int* numbers, int length)
{
    int odds = 0;
    for (int i =0; i < length; i++)
    {
        if (numbers[i] % 2 != 0)
        {
            odds++;
        }

    }
    return odds;

}
