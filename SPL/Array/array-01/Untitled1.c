#include<stdio.h>
#include<stdlib.h>
//#include<conio.h>
#include<windows.h>

#define CLOCK 5
int main()
{
    int hour,minute,second;
    printf("Enter HOUR : MINUTE : SECOND = ");
    scanf("%d%d%d",&hour,&minute,&second);
        system("cls");

    int h=0,m=0,s=0;
    while(1)
    {
       // printf("\n*************STOP WATCH**************\n\n");
        printf("             %.2d:%.2d:%.2d\n",h,m,s);
       // printf("\n################################\n");

        if(h == hour  && m == minute && s == second)
        {
            break;
        }
        else
        {
           system("cls");
        }
        s++;
        Sleep(100);
        if(s==CLOCK)
        {
            m++;
            s=0;
        }
        if(m==CLOCK)
        {
            h++;
            m=0;
        }

    }

    return 0;
}
