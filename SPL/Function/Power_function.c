
//function
#include<stdio.h>

int power(int x,int y);

int main()
{
    int x,y;
    printf("Enter X to the Power Y :");
    scanf("%d %d",&x,&y);
    int result = power(x,y);
     printf("%d to the Power %d = %d\n",x,y,result);
    //printf("%d",result);
    return 0;
}
int power(int x,int y)
{
    int p=1;
  for(int i=1; i<= y ; i++)
    {
         p= p * x ;
    }
 return p;
}
/*
//Recursion
#include<stdio.h>

int power(int x,int y);

int main()
{
    int x,y;
    printf("Enter X to the Power Y :");
    scanf("%d %d",&x,&y);
    int result = power(x,y);
     printf("%d to the Power %d = %d\n",x,y,result);
    //printf("%d",result);
    return 0;
}
int power(int x,int y)
{
    if (y==0 )
    return 1;

 return x * power(x, y-1);
}
*/