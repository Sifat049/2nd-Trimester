#include<stdio.h>

int main()
{
    int num;

    printf("\nLet's play a game. Enter a number and I'll tell if it's odd, divisible by 3 and/or divisible by 5");
    printf("\nEnter A Number: ");
    scanf("%d", &num);

    if(num%2!=0)
        printf("\nThe number is odd");
    if(num%3==0)
         printf("\nThe number is divisible by 3");
    if(num%5==0)
         printf("\nThe number is divisible by 5");

    printf("\nDone");



    return 0;

}
