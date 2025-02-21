//GCD

#include<stdio.h>

int main()
{
    int a,b,max,min,rem;
    scanf("%d%d",&a,&b);

    if(a>b)
    {
        max=a;
        min=b;
    }
       else
    {
        max=b;
        min=a;
    }
    while(max%min!=0)
    {
        rem=max%min;
        max=min;
        min=rem;
    }
    printf("GCD: %d\n",min);
        printf("LCM: %d\n",(a*b)/min);

    return 0;
}
