#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* double_spaces  (char* original);

int main() {

    int n;
    scanf("%d", &n);
    getchar();


    char* result[n];

    for(int j = 0; j < n; j++)
    {
        char original[101];
        fgets(original, 101, stdin);
        result[j] = double_spaces  (original);

    }
    for (int k = 0; k < n; k++)
    {
        printf("%s", result[k]);
        free(result[k]);
    }

    return 0;
}


char* double_spaces  (char* original)
{

    int length = strlen(original);
    char* result = malloc(sizeof(char) * (length + 1));
    int res = 0;
    for (int i = 0; i < length; i++)
    {

        char c = original[i];

        if(c == ' ')
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
