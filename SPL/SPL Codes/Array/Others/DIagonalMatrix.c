//Diagonal Matrix
#include<stdio.h>
int main()
{
    int A[30][30],i,j,r,c;
    int sumofDiagonalMatrix=0;
    int multiofDiagonalMatrix=1;

    printf("Row and Collums size : ");
    scanf("%d %d",&r,&c);

    if(r!=c)
    {
        return 0;
    }

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

    for(i=0; i<r; i++)
    {
        for(j=0 ; j<c; j++)
        {
            if(i==j)
            {
                sumofDiagonalMatrix+=A[i][j];
                multiofDiagonalMatrix*=A[i][j];

            }
        }
    }

    printf("\nSum of Diagonal Matrix : %d\n",sumofDiagonalMatrix);
    printf("\nMulti of Diagonal Matrix : %d\n",multiofDiagonalMatrix);

    return 0;
}


