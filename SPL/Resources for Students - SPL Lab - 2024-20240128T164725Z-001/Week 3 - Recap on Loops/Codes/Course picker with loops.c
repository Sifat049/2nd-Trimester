#include<stdio.h>

int main()

{
    int lvl;
    int cse_100, data_s, cpp;
    printf("Course picker system for multiple students (Suppose this is the course advisor portal!)");
    printf("\nEnter the level you want to enter the data for: ");
    scanf("%d", &lvl);

    int num_of_students, student_ID, i; //var i is for iterating through the for loop. It's got to be declared as well.



    if(lvl==2)
    {
        printf("\nEnter number of students in level 2:");
        scanf("%d", &num_of_students);

        for(i=0;i<num_of_students;i++)
        {
            printf("\nEntering data for student number %d", i+1);
            printf("\nEnter Student ID:");
            scanf("%d", &student_ID);
            printf("\nEnter marks obtained in CSE 100: ");
            scanf("%d", &cse_100);
            printf("\nEnter marks obtained in Data structure: ");
            scanf("%d", &data_s);
            printf("\nEnter marks obtained in c++: ");
            scanf("%d", &cpp);

            if(cse_100>70 && data_s>60 && cpp>65)
                printf("\nCongratulations! ID %d is eligible for algorithms!", student_ID);
            else
                printf("\nSorry. ID %d is not eligible", student_ID);
        }



    }

    else if(lvl==3)
    {
        //do on your own
    }

    else if(lvl==4)
    {
        //do on your own
    }
}
