#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    printf("age: %p\ngpa: %p\ngrade: %p\n\n",
            &age, &gpa, &grade);
    printf("age: %p\ngpa: %p\ngrade: %p\n\n",
            pAge, pGpa, pGrade);

    printf("%d", *pAge);
    return 0;
}
