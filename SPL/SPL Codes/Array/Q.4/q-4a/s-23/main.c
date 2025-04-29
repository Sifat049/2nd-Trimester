/*#include <stdio.h>

int main()
{

int n,sum=0,count=0;

float avg;
printf("Enter number :");
while(n!=0)
{
    scanf("%d",&n);
    if(n>0)
     {
         sum=sum+n;
         count++;
     }
printf("sum %d\n ",sum);
printf("count %d \n",count);

}
      avg=(float)sum/count;
      printf("avg %.2f",avg);
    return 0;
}

#include<stdio.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=2*n; i>=2; i=i-2)
    {
        for(j=2*n ; j<=i-n; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }






    return 0 ;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number (not 3 or 5): ");
    scanf("%d", &n);

    if (n == 3 || n == 5) {
        printf("Invalid input.\n");
        return 1;
    }

    for (int i = n; i >= 2; i -= 2) {
        for (int j = i; j <= n; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
*/
#include <stdio.h>

int main() {
    int n, i, j, k;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        for(k = 0; k < n - i; k++) {
            printf("  ");
        }
        for(j = 0; j < i; j++) {
            printf("%d ", 2 * (j + i));
        }
        for(j = i - 2; j >= 0; j--) {
             printf("%d ", 2 * (j + i));
        }
        printf("\n");
    }

    return 0;
}

