#include<stdio.h>
int main()
{
    int fib,count=0,i,sum=0;
    scanf("%d",&fib);
    for(i=fib; i>=0; i--)
    {
        count++;
      if(i==fib)
     { count++;
      continue;}
      if(i==0)
         {
            sum+=1;
         } 
        if(i==1)
        {  
              sum+=i; 
        }
    }
    printf("count %d , calls %d",count,sum);
    return 0;
}