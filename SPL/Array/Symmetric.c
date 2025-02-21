#include<stdio.h>
int main()
{
    int A[30][30],transpose[30][30],i,j,r,c;

    printf("Row and Collums size : ");
    scanf("%d %d",&r,&c);

    if(r!=c)
    {
        printf("Symmetric Matrix");
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
            if(A[j][i]!=A[i][j])
            {
                printf("Symmetric Matrix");
                return 0;
            }
        }
    }

    printf("Symmetric Matrix");
    return 0;
}

