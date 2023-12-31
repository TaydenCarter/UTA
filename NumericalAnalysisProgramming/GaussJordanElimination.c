#include <stdio.h>
#include <math.h>
#define N 10
//This program uses the Gauss Jordan Method to solve this systems of equations in this augmented matrix
int main()
{
    double a[N][N+1] = {
{3.55618, 5.87317, 7.84934, 5.6951, 3.84642, 9.15038, -1.68539, 5.03067,
7.63384, -1.75626, -1.92193},
{-4.82893, 8.38177, -0.301221, 5.10182, -4.1169,-6.09145, -3.95675, -2.33365,
1.3969, 6.54555, -2.35262},
{-7.64196, 5.66605,3.20481, 1.55619, -1.19814, 9.79288, 5.35547, 5.86109,
4.95544, -9.35749, 2.27709},
{-2.95914, -9.16958,7.3216, 2.39876, -8.1302, -7.55135, -2.37718, 7.29694,
5.9867, 8.5401, -2.67493},
{-8.42043, -0.369407, -5.4102, -8.00545, 9.22153, 3.96454, 5.38499, 0.438365,
0.419677, 4.17166, 1.84756},
{6.02952, 4.57728, 5.46424, 3.52915, -1.01135, -3.74686,8.14264, -8.86961,
-2.88114, 1.29821, 4.154126},
{0.519819, -6.16655, 1.13216, 2.75811, -1.05975, 4.20286, -3.45764, 0.763558,
-0.281287, -9.76168, -0.93387},
{5.15737, -9.67481, 9.29904, -3.93334, 9.12785, -4.25208, -6.1652, 2.5375,
0.139195, 2.00106, -1.28356},
{-4.30784, 1.40711, -6.97966, -9.29715, 5.17234, 2.42634, 1.88818, -2.05526,
-3.7679, 3.3708, -3.46841},
{-4.65418, 7.18118, 6.51338, 3.13249, 0.188456, -16.85599, 7.21435,
-2.93417, 1.06061, 1.10807, -2.61529}
};
    double pivot;
    double d;
    int i;
    int j;
    int k;

    for (k=0 ; k<N; k++)
    {
        pivot=a[k][k];
        
        for(j=k ; j<N+1 ; j++) a[k][j]=a[k][j]/pivot;
        for(i=0 ; i<N ; i++)
        {
        if(i!=k)
        
        {
            d=a[i][k];
                for(j=k ; j < N+1 ; j++) a[i][j]=a[i][j]-d*a[k][j];
        }
    }
}
    for(i=0 ; i<N ; i++) printf("x[%d]=%lf\n", i+1, a[i][N]);
    return 0;
}

