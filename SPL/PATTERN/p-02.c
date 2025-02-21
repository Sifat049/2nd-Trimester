#include<stdio.h>

int main()
{   int i,j,n;
    int s=0;
printf("Enter any number : ");
scanf("%d",&n);
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j)
        {   
            printf("%d ",s+j);    
        }  
        printf("\n");
      s++;
    }
    return 0;
}