#include<stdio.h>
#include<math.h>
int main()
{
    double  x;
    int n;

    printf("Enter the value of x for this series: ");
    scanf("%lf", &x);
    printf("Enter the value of n for this series: ");
    scanf("%d", &n);

    int i;
    double sum=0;

    /// x  + 2x^2 + 3x^3 + .... + n x^n

    for(i=1;i<=n;i++)
    {
        sum =  sum + (i * pow(x, i));
        printf("i: %d , sum : %.0lf\n", i, sum);

    }
    printf(" \nSum: %.0lf", sum);

}
