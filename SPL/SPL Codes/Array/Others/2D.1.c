//General Matrix
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int num[3][3],row,col;
    //printf("Enter Num : ");
    //
    //scanf("%d",&num);

    for(row=1; row<=3; row++)
    {
        for(col=1; col<=3; col++)
        {
            scanf("%d",&num[row][col]);
        }
        printf("\n");
    }
      for(row=1; row<=3; row++)
    {
        for(col=1; col<=3; col++)
        {
            printf("%d",num[row][col]);
        }
        printf("\n");
    }
    return 0;
}

