#include<stdio.h>

int main()
{
    int i;

        for(i=1; i<=5;i++)
    {
        printf("%d\n",i);

        if(i==2)
        {
            continue;
        }

        printf("%d\n",i);

        /// only this line (the rest of the loop portion after continue statement is met isn't executed after the continue condition is met
        /// However, the loop resumes for the next iteration, in this case for '3'
    }


}
