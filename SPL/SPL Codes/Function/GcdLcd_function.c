#include <stdio.h>

int GCD(int , int );
int main()
{
  int x , y;
  printf("Enter X & Y :");
  scanf("%d %d",&x,&y);
  printf("GCD : %d\n",GCD(x,y));
  return 0;
}

int GCD(int x, int y)
{
    int max,min;
    if(x > y)
    max = x, min = y ;
    else 
    max = y , min = x ;
    while ( max % min != 0)
    {
        int temp = min ;
        min = max % min ;
        max = temp ;
    } 
    return min;
}