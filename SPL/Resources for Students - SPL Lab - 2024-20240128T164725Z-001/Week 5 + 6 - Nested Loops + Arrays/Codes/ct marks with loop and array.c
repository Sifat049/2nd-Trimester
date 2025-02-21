#include<stdio.h>

int main()
{
    int num, i, j;
    int ct[3], min;
    printf("Enter the number of students in this class:");
    scanf("%d", &num);


    int ID[num], mid[num], total [num];

    printf("\nEntering Student's info for the class\n\n");
    for(i=0;i<num; i++)
    {
        min=21;
        printf("\nEnter ID of student number %d: ", i+1);
        scanf("%d", &ID[i]);

        for (j=0; j<3; j++)
        {
            printf("\nEnter CT %d marks for student ID %d: ", j+1, ID[i]);
            scanf("%d", &ct[j]);
            if(ct[j]<min)
            min=ct[j];
        }

        printf("\nEnter Midterm marks for student ID %d: ", ID[i]);
        scanf("%d", &mid[i]);

        total[i] = ct[0]+ ct[1] + ct[2] - min + mid[i];

        printf("\n\t\t%d got %d in CT + MID \n", ID[i], total[i]);
    }

    printf("\nProgram Terminated. Thanks");
}
