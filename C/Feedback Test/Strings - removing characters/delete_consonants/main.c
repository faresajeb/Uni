#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char* delete_consonants (char* original);

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char* result[n];

    for (int i = 0; i < n; i++)
    {
        char original[101];
        fgets(original, sizeof(original), stdin);

        result[i] = delete_consonants(original);

    }
    for (int j = 0; j < n; j++)
    {
        printf("%s", result[j]);

        free(result[j]);
    }

    return 0;
}


char* delete_consonants (char* original)
{
    int length = strlen(original);

    char* result = (char*)malloc(length * sizeof(char));

    int result_index = 0;

        for (int i = 0; i < length; i++)
        {
            char current = original[i];
            if ((current >= 'A' && current <= 'Z') || (current >= 'a' && current <= 'z'))
            {
                if (!(current == 'a' || current == 'e' || current == 'i' || current == 'o' || current == 'u' ||
                    current == 'A' || current == 'E' || current == 'I' || current == 'O' || current == 'U'))
                {
                    result[result_index++] = current;
                }

            }
            else
            {
                result[result_index++] = current;
            }
        }

    result[result_index] = '\0';

    return result;
}
