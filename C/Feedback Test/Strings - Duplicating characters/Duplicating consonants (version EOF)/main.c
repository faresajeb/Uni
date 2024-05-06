#include <stdio.h>
#include <stdlib.h>

char* double_consonants(char* original);

int main()
{
    char original[100];
    int counter = 0;
    char* result[100];
    while (fgets(original, 101, stdin) != NULL)
    {

        result[counter++] = double_consonants (original);


    }
    for (int k = 0; k < counter; k++)
    {
        printf("%s", result[k]);
        free(result[k]);
    }
    return 0;
}


char* double_consonants(char* original)
{
    int res = 0;
    int length = strlen(original);
    char* result = malloc(length * sizeof(char) + 1);
    for(int i = 0; i < length; i++)
    {
        char c = original[i];
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        {
            if (c == 'a' || c == 'o' || c == 'i' || c == 'u' || c == 'e'||
                    c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
                result[res++] = c;


            }
            else
            {
                result[res++] = c;
                result[res++] = c;
            }
        }
        else
        {
            result[res++] = c;
        }

    }
    result[res] = '\0';

    return result;

}
