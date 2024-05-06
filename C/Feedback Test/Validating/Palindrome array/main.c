#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int *numbers, int length);

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

        result[i] = is_palindrome (numbers, length);


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

int is_palindrome(int *numbers, int length)
{
    int start = 0;
    int end = length - 1;

    // Compare elements from both ends towards the middle
    while (start < end) {
        // If elements at start and end don't match, it's not a palindrome
        if (numbers[start] != numbers[end]) {
            return 0; // False
        }
        start++;
        end--;
    }
    return 1; // True
}
