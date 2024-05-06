#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* delete_odd_digits(char* original);

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume the newline character

    for (int i = 0; i < n; i++) {
        char original[101]; // Assuming maximum length of input string is 100 characters
        fgets(original, sizeof(original), stdin);

        char* result = delete_odd_digits(original);
        printf("%s\n", result);

        // Free dynamically allocated memory
        free(result);
    }

    return 0;
}

char* delete_odd_digits(char* original) {
    // Determine the length of the original string
    int length = strlen(original);

    // Allocate memory for the result string (same size as original string)
    char* result = (char*)malloc((length + 1) * sizeof(char)); // Adding 1 for null terminator
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int result_index = 0;
    for (int i = 0; i < length; i++) {
        char current = original[i];
        if (current >= '0' && current <= '9') {
            int digit = current - '0';
            // Check if the digit is even
            if (digit % 2 == 0) {
                result[result_index++] = current; // Copy even digit to result
            }
        } else {
            result[result_index++] = current; // Copy non-digit character to result
        }
    }

    // Null-terminate the result string
    result[result_index] = '\0';

    return result;
}
