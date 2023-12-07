#include <stdio.h>
#include <math.h>
#define E 2.718281828

double fun(double x)
{
    return (pow(E,x)-3*x);
}
int main()
{
    double x1;
    double x2;
    double itr = 50;
    double ctr = 1;
    double f1;
    double f2;
    double f3;
    double r;
    printf("Enter in the approximations of the root seperated by a space.\n");
    scanf("%lf %lf", &x1, &x2);
    if(fun(x1)==0)
        r = x1;
    else if (fun(x2)==0)
        r = x2;
    else{
            while(ctr <= itr)
            {
                f1 = fun(x1);
                r = (x1+x2)/2.0;
                f2 = fun(r);
                f3 = fun(x2);
                if(f2==0)
                {
                    r = f2;
                    break;
                }
                if (f1*f2 < 0)
                x2 = r;
                else if(f2*f3<0)
                x1 = r;
                ctr++;
            }
    }
    printf("The approximation to the root is %lf\n", r);
    return 0;
}
