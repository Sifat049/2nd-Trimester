#include<stdio.h>
#include<math.h>
int main()
{
    double  x = 5;
    int i,j;
    double sum=0;
    int mul=5;

    /// x+ 2x^2 + 3x^3 + .... + n x^n



    for(i=1;i<=3;i++)
    {

        for(j=1;j<=i;j++)
        {
            mul=mul*x;
            printf("j: %d, mul: %d ", j, mul);

        }
        sum =  sum + i*mul;
        printf("i: %d , sum : %.0lf\n", i, sum);

    }

    printf(" \nSum: %.0lf", sum);

}
