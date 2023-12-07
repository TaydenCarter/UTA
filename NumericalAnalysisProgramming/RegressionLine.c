#include <stdio.h>
#include <math.h>

int main()
{
    double x[11] = {0.0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1.0};
    double y[11] = {0.0, 0.0998, 0.1986, 0.2955, 0.3894, 0.4794, 0.5646, 0.6442, 0.7173, 0.7833, 0.8414};
    double xsum;
    double ysum;
    double xysum;
    double x2sum;
    double a;
    double b;
    double det;
    int i;
    xsum = 0.0;
    ysum = 0.0;
    xysum = 0.0;
    x2sum = 0.0;
    for(i=0 ; i < 11 ; i++)
    {
        xsum += x[i];
        ysum += y[i];
        xysum += x[i]*y[i];
        x2sum += x[i]*x[i];
    }
    det = (x2sum*11)-(xsum*xsum);
    a = (xysum*11-xsum*ysum)/det;
    b = (x2sum*ysum-xysum*xsum)/det;
    printf("The regression line is %lf x + %lf\n", a, b);
    return 0;
    
}
