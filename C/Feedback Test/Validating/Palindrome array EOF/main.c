#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int* numbers, int length);

int main()
{
    int length;
    int result[100];
    int counter = 0;

    while (scanf("%d", &length) != EOF)
    {

        int numbers[length];
        for (int i = 0; i < length ; i++)
        {
            scanf("%d", &numbers[i]);
        }
         result[counter++] = is_palindrome(numbers, length);
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


int is_palindrome(int* numbers, int length)
{
    for (int i =0; i < length; i++)
    {
        if (!(numbers[i] == numbers[(length - i) -1]))
        {
            return 0;
        }
    }
    return 1;
}
