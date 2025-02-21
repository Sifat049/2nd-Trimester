//TRANSPOSE.MATRIX
#include<stdio.h>

int main()
{

    int row,col,i,j;
    printf("Enter Row & Collom number:");
    scanf("%d%d",&row,&col);
    int A[row][col],TransposeMatrix[col][row];

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
//TRANSPOSE.MATRIX

        for(i=0 ; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
           TransposeMatrix[j][i]=A[i][j];
        }
    }
    //PRINTING TRANSPOSE
        printf(" TRANSPOSE_MATRIX= \n");
    for(i=0 ; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf(" %d ",TransposeMatrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
