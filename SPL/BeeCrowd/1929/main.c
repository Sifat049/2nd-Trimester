/*
#include <stdio.h>

int main()
{
    int a,b,i;
scanf("%d%d",&a,&b);
if(a<b)
    {
    for(i=a+1 ; i<b; i++)
{
    if(i%5==2 || i%5==3)
    {
        printf("%d\n",i);
    }
}
}
else
{
       for(i=b+1 ; i<a; i++)
{
    if(i%5==2 || i%5==3)
    {
        printf("%d\n",i);
    }
}

}
    return 0;
}
*/
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
double A[100];
for(int i=0 ; i<100 ; i++)
{
    scanf("%lf",&A[i]);
}
for(int i=0 ; i<100 ; i++)
{
    printf("A[%d] = %.1lf\n",i,A[i]);
}
    return 0;
}
