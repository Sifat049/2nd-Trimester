#include<stdio.h>

    void menu(int choice)
        {
            int n;
            if(choice==1)
            {
    printf("Enter how many courses you have in this  trimester  = ");
    scanf("%d",&n);
               cgpafromgrade(n);
            }
            else if(choice==2)
            {
     printf("Enter how many courses you have in this  trimester  = ");
    scanf("%d",&n);
               cgpafromMarks(n);
            }

        }

    void cgpafromgrade(int n)
        {

            int arr1[n];
            float arr2[n];
            int i;
            for( i = 0 ; i<n ; i++)
            {
                printf("Enter course %d credit = ",i+1);
                    scanf("%d",&arr1[i]);
                printf("Enter course %d grade = ",i+1);
                    scanf("%f",&arr2[i]);
                printf("\n");

            }
            float sum=0,totalcredits=0;

            for(i=0;i<n;i++)
            {

             sum+=(arr1[i]*arr2[i]);
             totalcredits+=arr1[i];

            }
            float cgpa;
            cgpa=sum/totalcredits;
            printf("Your cgpa is = %.2f\n",cgpa);

        }

float gradeFromMarks(int marks) {
    // Convert marks to grade points (typical example)
    if (marks >= 90) {
        return 4.0;
    } else if (marks >= 80) {
        return 3.7;
    } else if (marks >= 70) {
        return 3.0;
    } else if (marks >= 60) {
        return 2.7;
    } else if (marks >= 50) {
        return 2.0;
    } else {
        return 0.0;
    }
}

void cgpafromMarks(int n) {
    int arr1[n];  // Credits
    int arr2[n];  // Marks
    int i;
    for (i = 0; i < n; i++) {
        printf("Enter course %d credit = ", i + 1);
        scanf("%d", &arr1[i]);
        printf("Enter course %d marks = ", i + 1);
        scanf("%d", &arr2[i]);
        printf("\n");
    }

    float sum = 0, totalcredits = 0;

    for (i = 0; i < n; i++) {
        float grade = gradeFromMarks(arr2[i]);
        sum += (arr1[i] * grade);
        totalcredits += arr1[i];
    }

    float cgpa = sum / totalcredits;
    printf("Your CGPA is = %.2f\n", cgpa);
}
