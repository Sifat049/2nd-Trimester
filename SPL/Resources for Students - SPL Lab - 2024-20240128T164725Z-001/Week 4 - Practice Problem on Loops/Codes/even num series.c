#include<stdio.h>

int main()
{
    int i;

    for (i=1; i<=10; i++)
    {
        if(i%2==0)
        printf("%d ", i);
    }

    printf("\nOr (using loops in a different way)\n");

    //we could also iterate by 2 instead of just 1 (like i++)
    //this would be more efficient since less checking and less number of iterations

    for (i=2; i<=10; i=i+2)
    {
        printf("%d ", i);
    }
}
