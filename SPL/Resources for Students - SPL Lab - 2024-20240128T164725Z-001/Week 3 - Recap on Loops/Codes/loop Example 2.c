#include<stdio.h>

int main()
{
    int i;
    int sum=0;

    //sum =1;

    //printf("1");

    for(i=1;i<=10;i++)
    {
        sum = sum + i;
        printf("%d + ", i);
    }

    printf(" = %d", sum);

}
