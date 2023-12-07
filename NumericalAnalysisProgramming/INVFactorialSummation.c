#include <stdio.h>
#include <math.h>

//This function calculates the factorial of the input n
int factorial(int n)
{
    int i;
    int temp = 1;
    temp = 1;
    for (i=1; i<=n;i++)
    {
        temp = temp * i;
    }

    return temp;
}

//This function calculates the summation of the inverse factorial
double summation(int n)
{
    int i;
    double sum;
    sum = 1.0;
    for (i=1;i<=n; i++)
    {
        sum += (1)/(factorial(i)*1.00);
    }

    return sum;
}
//The n value assigned was 7 but could be changed to allow input
void main()
{
    int n;
    n= 11;
    printf("HW 1.7.a is %i\n", factorial(n));
    printf("HW 1.7.b is %lf\n", summation(n));
}
