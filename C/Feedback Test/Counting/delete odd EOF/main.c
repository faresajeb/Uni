#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
char* delete_odd_digits(char* original);

int main()
{
    char original[100];
    int counter = 0;
    char* result[100];
    while (fgets(original, 100, stdin) != NULL)
    {
        result[counter++] = delete_odd_digits(original);
    }


    for (int j = 0; j < counter; j++)
    {
        printf("%s", result[j]);
    }

    return 0;
}

char* delete_odd_digits(char* original)
{
    int res = 0;
    int length =strlen(original);
    char* result = malloc(sizeof(char) * length + 1);
    for (int i = 0; i < length; i++)
    {
        char c = original[i];
        if (!(isdigit(c) && (c - '0') % 2 != 0))
        {
            result[res++] = c;
        }


    }
    result[res] = '\0';
    return result;
}


