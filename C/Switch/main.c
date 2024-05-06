#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade;
    scanf("%c", &
           grade);

    switch(grade)
    {
    case 'A':
        printf("great");
        break;
    case 'B':
        printf("good");
        break;
    case 'F':
        printf("fail");
        break;
    }
    return 0;
}
