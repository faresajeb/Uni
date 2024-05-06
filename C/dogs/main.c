#include <stdio.h>

int main() {
    int heads, legs;

    while (scanf("%d %d", &heads, &legs) == 2) {
        // Calculate the number of people and dogs
        int dogs = (legs - (2 * heads)) / 2;
        int people = heads - dogs;

        // Output the number of people and dogs
        printf("%d %d\n", people, dogs);
    }

    return 0;
}
