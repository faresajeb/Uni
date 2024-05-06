#include <stdio.h>
#include <stdlib.h>

int count_of_primes(int* numbers, int length);

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
        for (int k = 0; k < length; k++)
        {
            scanf("%d", &numbers[k]);
        }
        result[i] = count_of_primes(numbers, length);
    }
    for (int j = 0; j < n; j++)
    {
        printf("%d\n", result[j]);
    }

    return 0;
}



int count_of_primes(int* numbers, int length)
{
    int primes = 0;
    for (int i = 0; i < length; i++)
    {
        int isPrime = 1;

        for (int j = 2; j * j <= numbers[i]; j++)
        {
            if (numbers[i] % j == 0)
            {
                isPrime = 0;

            }
        }
        primes += isPrime;
    }

    return primes;

}
