#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* double_even_digits(char* original);

int main() {

    int n;
    scanf("%d", &n);
    getchar();


    char* result[n];

    for (int i = 0; i < n; i++)
    {
        char original[100];
        fgets(original, sizeof(original), stdin);
        result[i] = double_even_digits(original);
    }

    for (int j = 0; j < n; j++)
    {
        printf("%s", result[j]);
        free(result[j]);
    }

    return 0;
}

char* double_even_digits(char* original)
{
    int length = strlen(original);
    char* result = malloc((sizeof(char) * (length + 1))* 2);
    int res = 0;
    for(int i = 0; i < length; i++)
    {
        char c = original[i];

        if (isdigit(c) && (c - '0') % 2 == 0)
        {
                result[res++] = c;
                result[res++] = c;

        }

        else
        {
            result[res++] = c;
        }

    }
    result[res] = '\0';
    return result;
}
