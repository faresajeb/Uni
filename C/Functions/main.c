#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[20];

    scanf("%s", n);

    sayHi(n);

    return 0;
}

void sayHi(char name[20])
{
    printf("Hello %s\n", name);
}
