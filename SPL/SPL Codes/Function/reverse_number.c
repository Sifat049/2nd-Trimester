#include<stdio.h>

int reverse(int num);

int main()
{
    
    int num;
    scanf("%d",&num);
    printf("Reverse %d",reverse(num));
    return 0;
}
int reverse(int num)
{
    int sum=0,reminder;
    while(num>0)
    {
        reminder = num % 10;
        sum = sum * 10 + reminder;
        num = num / 10;

    }
 return sum;
}