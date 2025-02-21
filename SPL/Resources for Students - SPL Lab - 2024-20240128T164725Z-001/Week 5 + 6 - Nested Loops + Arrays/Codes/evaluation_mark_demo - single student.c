#include<stdio.h>
int main()
{
    int i, n;

    printf("\nEnter number of evals: ");
    scanf("%d", &n);
    n=n+2;

    float marks[n];

        for(i=0;i<n-1; i++)
            {
                if(i==0)
                {
                    printf("\nEnter roll for student %d: ", i+1);
                    scanf("%f", &marks[i]);
                    marks[n-1]=0;
                }

                else
                {
                    printf("\nEnter marks of E%d: ", i);
                    scanf("%f", &marks[i]);
                    marks[n-1] += marks[i];

                }

            }


           printf("\n\nID %.0f got total %.1f in Evals\n\n", marks[0], marks[n-1]);

}
