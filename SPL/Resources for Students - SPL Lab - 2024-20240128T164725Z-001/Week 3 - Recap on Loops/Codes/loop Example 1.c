#include<stdio.h>

int main()
{
   int n;
   int i;
   int sum = 0;

   printf("Enter the number to find sum series for: ");
   scanf("%d",&n);

   printf("1");

   sum = sum+1;

   for(i=2; i<=n; i++ )
   {
       sum = sum + i;
       printf(" + %d", i);
   }

   printf("= %d", sum);


}
