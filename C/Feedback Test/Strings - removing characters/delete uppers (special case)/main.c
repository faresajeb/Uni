#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* delete_uppers(char* original);

int main() {

    char* result[100];
    char original[100];
    int counter = 0;

    while (fgets(original, 100, stdin))
    {
        if (original[0] == '\n')
        {
            break;
        }

        result[counter++] = delete_uppers(original);


    }

    for (int i = 0; i < counter; i++)
    {
        printf("%s", result[i]);
        free(result[i]);
    }

    return 0;
}

char* delete_uppers(char* original)
{
    int length = strlen(original);
    char* result = malloc(sizeof(char) * length + 1);
    int res =0;

    for(int i = 0; i < length; i++)
    {
        char c = original[i];
        if (c >= 'A' && c <= 'Z')
        {
            continue;
        }
        else
        {
            result[res++] = c;
        }
    }
    result[res] = '\0';
    return result;

}
