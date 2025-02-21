#include<stdio.h>

int main()

{
    int a;
    int b;

    float c;

    printf("Enter First number (dividend): ");
    scanf("%d", &a);
    printf("\n\nEnter  second number (divisor): ");
    scanf("%d", &b);
    c = (float) a/b;

    //printf("\n\nRes is (Without typecasting) %d", a/b);
    printf("\n\nRes (quotient) of %d / %d is: %.2f\n\n", a,b,c);
}
