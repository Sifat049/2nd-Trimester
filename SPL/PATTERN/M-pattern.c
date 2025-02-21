//P-18
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int row,col;
   // printf("Enter 10 : ");
//scanf("%d",&);

    for(row=1; row<=10/2+1; row++)
    {
        for(col=1; col<=10; col++)
        {
            if( col==1  ||col==10 ||col==row || row+col==(10+1) )
                printf("M ");
            else
                printf("  ");
        }

        printf("\n");
    }
      for(row=1; row<=10/2; row++)
    {
      for(col=1; col<=10; col++)
        {
            if( col==1  ||col==10  )
                printf("M ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

    // I..........

    for(row=1; row<=10; row++)
    {
        for(col=1; col<=10/2; col++)
                            printf("  ");
        for(col=1; col<=10; col++)

        {
            if(col==1)
                printf("I ");
        }
        printf("\n");
    }
            printf("\n\n");

    //H........
        for(row=1; row<=10; row++)
    {
        for(col=1; col<=10; col++)
        {
            if(col==1  ||col==10 || row==(10/2)+1    )
                printf("H ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

            //K.....
               for(row=1; row<=10; row++)
    {
        for(col=1; col<=10; col++)
        {
            if(col==1  ||col/2==row )
                printf("K");
            else
                printf(" ");
        }
        printf("\n");
    }
            printf("\n\n");

               //T........
        for(row=1; row<=10; row++)
    {
        for(col=1; col<=10; col++)
        {
            if(row==1  ||col==(10/2)+1    )
                printf("T ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

                           //U........
        for(row=1; row<=10; row++)
    {
        for(col=1; col<=10; col++)
        {
            if(row==10  ||col==1 ||col==10    )
                printf("U ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

               //F........
        for(row=1; row<=10; row++)
    {
        for(col=1; col<=10; col++)
        {
            if(row==1 ||col==1  ||row==(10/2)+1    )
                printf("F ");
            else
                printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");
    return 0;

}


