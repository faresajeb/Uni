#include <stdio.h>
#include <stdlib.h>


double cube(double num)
{
   double result = pow(num,3);
   return result;

}
int main()
{
    printf("%f", cube(3.0));
    return 0;
}
