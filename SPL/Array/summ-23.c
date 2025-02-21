#include <stdio.h>

int main() {
  int i,j=2,n,sum=1;
  scanf("%d",&n);
        printf("%d!= ",n);

  for(i=n; i>=1; i--)
  {
  if(i<n)
                  printf("x");
sum*=i;
      printf(" %d ",i);

  }
        printf(" =%d ",sum);


    return 0;
}

/*#include <stdio.h>

int main() {
  int i,j,n;
  scanf("%d",&n);
  for(i=1; i<=n; i++)
  {
      for(j=1; j<=n-i; j++)
      {
          printf(" ");
      }
      for(j=1; j<=i; j++)
      {
          printf("%d ",j);
      }
      printf("\n");
  }
    for(i=n-1; i>=1; i--)
  {
      for(j=1; j<=n-i; j++)
      {
          printf("_");
      }
      for(j=1; j<=i; j++)
      {
          if(j<=i)
          printf("*_");
          else
                      printf("_");

      }
      printf("\n");
  }
    return 0;
}


#include <stdio.h>

int main() {
  int A[100],i,n;
  scanf("%d",&n);

  for(i=1; i<=n; i++)
  {
      scanf("%d",&A[i]);

  }
  int index=0,index2=0;
        int max=A[1],min=A[1];

   for(i=1; i<=n; i++)
  {
        if(max<A[i])
        {
            max=A[i];
            index++;
        }
        if(min>A[i])
        {
            min=A[i];
            index2++;
        }
 }
       printf("Max : %d , Index: %d\n",max,index);
        printf("Min : %d , Index: %d\n",min,index2);

    return 0;
}


#include<stdio.h>

int main()
{int i,j,n,count=0;
scanf("%d",&n);

for(i=1; i<=n; i++)
{
    for(j=1; j<=n-i; j++)
    {
        printf("  ");
    }
    for(j=1; j<=2*i-1; j++)
    {
        count+=2;
        printf("%d ",count);
    }
    printf("\n");
}

    return 0;
}
5
#include <stdio.h>
int main()
{
    int b;
    scanf("%d", &b);
    if(b >= 10)
    {
        printf("SPL\n");
        b--;
    }
    if(b < 10)
    {
        printf("Spring\n");
        b--;
    }
    else if((b>=3) || (b<10))
        printf("2023\n");
    else if(b>=3 && b<10)
        printf("Happy Coding!");
    else
        printf("Huh!");
        return 0;
}
*/
