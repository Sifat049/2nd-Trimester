/*
#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        for(j=1; j<= 2 * (n - i); j++)
        {
            printf("_");
        }
        for(int k=i; k>=1; k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
*/


#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop for rows
    for (int i = 1; i <=n; i++) {
        // Printing numbers in increasing order
        for (int j = 1; j <=2*n-1; j++) {
             if((j<=i))
           printf("%d",j);
            if((2*j-1<=i))
           printf("%d",j);

           //if(i==n || j==n || j==1)
          // printf("*");
           else
           printf("_");
        }

        printf("\n");
    }

    return 0;
}
