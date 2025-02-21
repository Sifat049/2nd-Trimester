#include<stdio.h>
int main()
{
    int i;

        for(i=5; i<=7;i++)
    {
        printf("%d\n",i);

        if(i==6)
        {
            continue;
        }

        printf("%d\n",i+1);
    }

}
