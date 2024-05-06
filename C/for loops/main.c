#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int i = 1;
    for(i; i <= 5; i++)
    {
        printf("%d\n", i);
    }*/

    int luckynums[] = {4, 8, 15, 16, 23, 42};
    int i;
    for(i =0; i<6; i++) {
        printf("%d\n", luckynums[i]);
    }
    return 0;
}
