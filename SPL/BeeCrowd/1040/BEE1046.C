#include<stdio.h>
int main()
{   int a,b,r;
scanf("%d%d",&a,&b);
if(a<b)
r=b-a;
else
r=(24-a)+b;
printf("O JOGO DUROU %d HORA(S)\n", r);
    return 0;
}