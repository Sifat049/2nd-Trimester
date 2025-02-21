#include<stdio.h>
int main()
{
    int i,j, m, n;

    printf("Enter number of students: ");
    scanf("%d", &m);
    printf("\nEnter number of evals: ");
    scanf("%d", &n);
    n=n+2;

    float marks[m][n];

    for(i=0;i<m;i++)
    {
        for(j=0;j<n-1; j++)
            {
                if(j==0)
                {
                    printf("\nEnter roll for student %d: ", i+1);
                    scanf("%f", &marks[i][j]);
                    marks[i][n-1]=0;
                }

                else
                {
                    printf("\nEnter marks of E%d: ", j);
                    scanf("%f", &marks[i][j]);
                    marks[i][n-1] += marks[i][j];

                }

            }
    }
for(i=0;i<m;i++)
    {

           printf("\n\nID %.0f got total %.1f in Evals", marks[i][0], marks[i][n-1]);

    }

}
