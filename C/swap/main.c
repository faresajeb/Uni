#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);
int main()
{
        /*int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int tmp = a;
    a = b;
    b = tmp;
    printf("%d %d %d", a, b, tmp);*/
    /*int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    a = b;
    printf("%d %d", a, b);*/



    int x = 1;
    int y = 2;
    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
    return 0;
}
void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

}


