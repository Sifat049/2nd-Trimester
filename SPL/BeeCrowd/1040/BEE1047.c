#include<stdio.h>
int main()
{   int   s1,m1,e1,m2,r,d;
scanf("%d%d%d%d",&s1,&m1,&e1,&m2);
     int   s=s1*60+m1;
     int   e=e1*60+m2;
     int   f=e-s;
     if(f<=0)
     {
        f+=1440;
     }
   

      //printf("%d\n",f);
       r=f%60;
       d=f/60;
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S) \n",d,r);

     

     
    return 0;
}