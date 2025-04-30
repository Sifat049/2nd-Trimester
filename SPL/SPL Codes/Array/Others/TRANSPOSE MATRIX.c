#include<stdio.h>
int main()
{
    int A[30][30],transpose[30][30],i,j,r,c;

    printf("Row and Collums size : ");
    scanf("%d %d",&r,&c);

    //input A
    for(i=0; i<r; i++)
    {
        for(j=0 ; j<c; j++)
        {
            printf("A [%d][%d] =",i,j);
            scanf("%d",&A[i] [j]);
        }
    }
    //printing A
    printf("A = ");
    for(i=0; i<r; i++)
    {
        printf("\t");
        for(j=0 ; j<c; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //transpose
     for(i=0; i<r; i++)
    {
        for(j=0 ; j<c; j++)
        {
            transpose[j][i]=A[i][j];
        }
    }
        //printing Transpose
    printf("Transpose = ");
    for(i=0; i<c; i++)
    {
        for(j=0 ; j<r; j++)
        {
            printf("%d ",transpose[i][j]);
        }
                printf("\n");
                printf("\t\t");

    }
    return 0;
}
