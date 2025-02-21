//Q-1
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,price,i,total=0;
    printf("Enter the price per liter of gas:");
    scanf("%d",&price);
    printf("\nEnter the number of cars:");
    scanf("%d",&c);
    int car[c],gas[c];
    printf("\n");
    for(i=1; i<=c; i++)
    {
        printf("Car %d gas amount(litre):",i);
        scanf("%d",&gas[i]);

    }
    for(i=1; i<=c; i++)
    {
        printf("\nCar %d:%d liters *%d=%d",i,gas[i],price,gas[i]*price);

    }
    printf("\n\nTotal revenue:\n");
     for(i=1; i<=c; i++)
     {  total+=gas[i]*price;
         if(i<c)
         {
             printf("%d+",gas[i]*price);
         }
         else
            printf("%d=%d",gas[i]*price,total);
     }
    return 0;
}
