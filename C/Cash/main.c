#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0;

    float rem;
    printf("Change owed: ");
    scanf("%f", &rem);

    int cents = rem * 100;

    while (cents > 0)
        {

            if (cents >= 25)
            {
                cents = cents - 25;
                count++;
            }

            else if (cents >= 10)
            {
                cents = cents - 10;
                count++;
            }

            else if (cents >= 5)
            {
                cents = cents - 5;
                count++;
            }

            else if (cents >= 1)
            {
                cents = cents - 1;
                count++;
            }
        }

    printf("%d", count);
    return 0;
}
