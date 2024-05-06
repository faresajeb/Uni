#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* delete_odd_digits (char* original);

int main() {

    char original[100];
    int counter = 0;
    char* result[100];
    while (fgets(original, 101, stdin) != NULL)
    {

        result[counter] = delete_odd_digits (original);
        counter++;

    }
    for (int k = 0; k < counter; k++)
    {
        printf("%s", result[k]);
        free(result[k]);
    }

    return 0;
}


char* delete_odd_digits (char* original)
{

    int length = strlen(original);
    char* result = malloc(sizeof(char) * length + 1);
    int result_index = 0;
    for (int i = 0; i < length; i++)
    {
        if (((original[i] - '0') % 2 == 0))
        {
             result[result_index++] = original[i];
        }

    }
    result[result_index] = '\0';
    return result;
}
