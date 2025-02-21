#include<stdio.h>

int main()
{

    int num, i;
    int ID, ct1, ct2, ct3, mid, min, total;
    int max_ID, max_mark, prev_total;
    printf("Enter the number of students in this class:");
    scanf("%d", &num);

    printf("\nEntering Student's info for the class\n\n");


    for(i=1; i<=num; i++)
    {
        printf("\nEnter ID of student number %d: ", i);
        scanf("%d", &ID);
        printf("\nEnter CT 1 marks for student ID %d: ", ID);
        scanf("%d", &ct1);
        min =ct1;
        printf("\nEnter CT 2 marks for student ID %d: ", ID);
        scanf("%d", &ct2);
        if(ct2<min)
            min=ct2;
        printf("\nEnter CT 3 marks for student ID %d: ", ID);
        scanf("%d", &ct3);

        if(ct3<min)
            min=ct3;
        printf("\nEnter Midterm marks for student ID %d: ", ID);
        scanf("%d", &mid);

        total = (ct1 + ct2 + ct3) - min + mid;

        if(total > prev_total)
            max_mark = total;

        printf("\n\t\t%d got %d in his/her 35%%\n", ID, total);
    }



    }





