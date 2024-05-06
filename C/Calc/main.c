#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    char op;

    printf("Enter first num: ");
    scanf("%lf", &num1);

    printf("Enter Operator: ");
    scanf("%c", &op);

    printf("Enter second num: ");
    scanf("%lf", &num2);

    if (op == '+') {
        printf("Answer: %f", num1 + num2);
    }

    else if (op == '-') {
        printf("Answer: %f", num1 - num2);
    }

    else if (op == '*') {
        printf("Answer: %f", num1 * num2);
    }

    else if (op == '/') {
        printf("Answer: %f", num1 / num2);
    }

    /*else if (op == '%') {
        printf("Answer: %f", num1 % num2);
    }*/

    else if (op == '^') {
        printf("Answer: %f", pow(num1, num2));
    };


    return 0;
}
