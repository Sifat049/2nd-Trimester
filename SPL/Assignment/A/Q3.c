//Q-3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int shift;
    char ch;
    printf("Shift value:");
    scanf("%d",&shift);
    printf("Message:");
    for(int i =1; i<=25; i++)
    {
        scanf("%c",&ch);

            if(ch==' ')
            printf(" ");
            if(ch>='D'  &&  ch<='Z')

            printf("%c",ch-shift);
             if(ch>='d'  &&  ch<='z')

                printf("%c",ch-(32+shift));

    }

    return 0;
}

