#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* delete_uppers(char* original);

int main() {

    char* result[100];
    char original[100];
    int counter = 0;

    while (fgets(original, 100, stdin) != NULL)
    {



        printf("%s", delete_uppers(original));
        free(delete_uppers(original));

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
        if (!(c >= 'A' && c <= 'Z'))
        {
            result[res++] = c;
        }

    }
    result[res] = '\0';
    return result;

}
