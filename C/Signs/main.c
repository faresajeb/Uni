#include <stdio.h>
#include <stdlib.h>

int main() {

    int counter = 1;
    int n, P, N;

    printf("Enter: ");
    scanf("%d", &n);

    while (n)
    {
        int* nums = malloc(sizeof(int) * n);
        P = 0;
        N = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &nums[i]);
            if (nums[i] > 0)
            {
                P++;
            }
            else if (nums[i] < 0)
            {
                N++;
            }
        }

        if (P > N)
        {
            printf("%d\n", counter);
        }

        free(nums);

        printf("Enter: ");
        scanf("%d", &n);
        counter++;

    }
    return 0;
}
