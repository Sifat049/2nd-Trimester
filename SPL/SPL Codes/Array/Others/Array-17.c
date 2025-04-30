#include<stdio.h>

int main()
{
    int i,j,n;
    int num[1000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d ",&num[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            //scanf("%d",&num[j]);
            if(num[j]!=num[j+1])
            {
                int temp=num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d ",num[i]);
    }

    return 0;
}

