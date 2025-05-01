#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
int main() {
    system("cls");
    system("7,0");
    printf("************\n");
    Sleep(500);
    printf("* Eid      *\n");

    printf("*   Mubarak*\n");
    Sleep(900);
    printf("************\n");
    int num,row,col;
    printf("Enter Num : ");
    scanf("%d",&num);

    //E
    for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==1 ||col==1  ||row==(num/2)+1  || row==num  )
                printf("* ");
            else
                printf("  ");
        }
        Sleep(500);
        printf("\n");
    }
            printf("\n\n");

        //I
         for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(col==(num/2)+1 ||row==1 || row==num  )
                printf("* ");
            else
                printf("  ");
        }
        Sleep(500);
        printf("\n");
    }
            printf("\n\n");
            //D
            #include <stdio.h>

    int i, j;
    int height = 5; // Height of the 'D'

    // Outer loop for rows
    for (i = 0; i < height; i++) {
        // Inner loop for columns
        for (j = 0; j < height; j++) {
            // Condition to print the 'D' pattern
            if (j == 0 || (i == 0 || i == height - 1) && j < height - 1)
                printf("* ");
            else if (j == height - 1 && (i != 0 && i != height - 1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n"); // Move to the next line after each row

}
printf("\n\n");

 // M

    for(row=1; row<=num/2+1; row++)
    {
        for(col=1; col<=num; col++)
        {
            if( col==1  ||col==num ||col==row || row+col==(num+1) )
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }
      for(row=1; row<=num/2; row++)
    {
      for(col=1; col<=num; col++)
        {
            if( col==1  ||col==num  )
                printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }
            printf("\n\n");

     //U........
        for(row=1; row<=num; row++)
    {
        for(col=1; col<=num; col++)
        {
            if(row==num  ||col==1 ||col==num    )
                printf("* ");
            else
                printf("  ");
        }
        Sleep(500);
        printf("\n");
    }
            printf("\n\n");
       //A
           for(row=1; row<=num; row++)
    {
        for(col=row; col<num; col++)
        {
            printf(" ");
        }
        for(col=1; col<=2*row-1; col++)
        {
            if(row==(num/2)+1 ||col==1 || col==(2*row-1))
            printf("*");
            else
                printf(" ");
        }
        Sleep(400);
        printf("\n");
    }
    return 0;
}
