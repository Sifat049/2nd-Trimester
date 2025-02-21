#include<stdio.h>

int main()
{
    int num;
    printf("\nEnter a num");
    scanf("%d", &num );

    printf("The number %d is ", num);
    if (num%2==0)
    {
        printf("Even");
    }
    else
        printf("Odd");


}
