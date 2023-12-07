#include <stdio.h>
#include <math.h>

//This program calculates the root of a cubic equation
int main()
{
  //a, b , c, and d are the values that the user inputs and there are variables below to simplify the solving of the cubic equation that helped with debugging
    double a;
    double b;
    double c;
    double d;
    double a1;
    double a2;
    double a3;
    double a4;
    double a5;
    double a6;
    double rp1;
    double rp2;
    double x;
    printf("Enter in the a , b , c , and d variables of the Cubic\nseperated by a space = \t");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    a1 = (pow(-b,3))/(27*(pow(a,c)));
    a2 = (b*c)/(6*pow(a,2));
    a3 = (d)/(2*a);
    a4 = (c)/(3*a);
    a5 = (pow(b,2))/(9*pow(a,2));
    a6 = (b)/(3*a);
    rp1 = (a1+a2-a3);
    rp2 = (a4-a5);
    x = cbrt(rp1+sqrt(pow(rp1,2)+pow(rp2,3)))+cbrt(rp1-sqrt(pow(rp1,2)+pow(rp2,3)))-a6;
    printf("The Root of The Cubic Equation is %lf ." , x);

}
