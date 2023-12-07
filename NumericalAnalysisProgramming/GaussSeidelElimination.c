#include <stdio.h>
//This program solves the given set of linear equation using the Gauss Seidel Method 
int main()
{
    double x, y, z;
    int i,n;
    x=y=z=0;
    printf("Enter # of iteration = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++);
    {
        x = (10-y-2*z)/6.0;
        y = (8-x-3*z)/7.0;
        z = (6-2*x-3*y)/8.0;
    }
    printf("x = %lf, y = %lf, z = %lf \n", x, y, z);
    return 0;
}
