//2D SUM/SUB
#include<stdio.h>

int main()
{

    int row,col,i,j;
    printf("Enter Row & Collom number:");
    scanf("%d%d",&row,&col);
    int A[row][col],B[row][col],C[row][col];

//inputs for A matrix
    printf("A = \n");

    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d] : ",i, j);
            scanf("%d",&A[i][j]);
        }
    }
//printing A
    printf("A = \n");
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    //inputs for B matrix
    printf("B = \n");

    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
                        printf("B[%d][%d] : ",i, j);
                        scanf("%d",&B[i][j]);
        }
    }
//printing B
    printf("B = \n");
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
//C=A+B//C=A-B
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            C[i][j]=A[i][j]+B[i][j];// C[i][j]=A[i][j]-B[i][j];
        }
    }
    printf("C = \n");
    for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
