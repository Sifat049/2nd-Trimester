#include<stdio.h>
int main()
{
    int n, i, count=0, flag = 0;
    float weight, sum=0, max_weight=0, min_weight=50, avg;

    printf("Enter no. of stones:");
    scanf("%d", &n);

    printf("Enter 5 values (weights): ");

    for(i=1;i<=n; i++)
    {
        scanf("%f", &weight);
        sum+=weight;

        if(weight>50)
        {
           flag = 1;
           break;
        }


        if(weight>max_weight)
            max_weight= weight;

        if(weight<min_weight)
            min_weight= weight;

        if(weight>=40)
            count++;
    }

    if(flag==1)
    {
            printf("Stone beyond unit's weight limit");
    }

    else if(flag==0)
    {
        avg= sum/n;
        printf("\nMax: %.2f, Min: %.2f, Avg: %.2f",max_weight, min_weight, avg);
        printf("\nTotal num of ov stones: %d", count);

    }


}
