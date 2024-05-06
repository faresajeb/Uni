#include <stdio.h>

// Function to compare fractions
char compareFractions(int a, int b, int c, int d) {
    // Cross-multiply to compare fractions
    int left = a * d;
    int right = c * b;

    if (left < right)
        return '<';
    else if (left > right)
        return '>';
    else
        return '=';
}

int main() {
    int a, b, c, d;
    char results[10]; // Assuming a maximum of 100 test cases

    int count = 0; // Counter for number of test cases

    // Read input until a line containing four zeros is encountered
    while (scanf("%d %d %d %d", &a, &b, &c, &d) == 4 && (a || b || c || d)) {
        results[count++] = compareFractions(a, b, c, d);
    }

    // Print the results
    for (int i = 0; i < count; i++) {
        printf("%c\n", results[i]);
    }

    return 0;
}
