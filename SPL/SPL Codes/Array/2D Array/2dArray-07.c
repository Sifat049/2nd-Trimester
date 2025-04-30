#include<stdio.h>

int main()
{   int r,c,sum=0;
    scanf("%d%d",&r,&c);

    int matrix[r][c];
    int i,j;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nRow-wise :\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int max=matrix[i][0];
    int count =0;

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {   sum+=matrix[i][j];        
        }
    }
     printf("MAX :%d",sum);

    return 0;
}