#include<stdio.h>

int main()

{
    int lvl;
    int cse_100, data_s, cpp;
    printf("Enter which lvl you're in: ");
    scanf("%d", &lvl);

    if(lvl==2)
    {
        printf("\nEnter marks obtained in CSE 100: ");
        scanf("%d", &cse_100);
        printf("\nEnter marks obtained in Data structure: ");
        scanf("%d", &data_s);
        printf("\nEnter marks obtained in c++: ");
        scanf("%d", &cpp);

        if(cse_100>70 && data_s>60 && cpp>65)
            printf("\nCongratulations! You are eligible for algorithms!");
        else
            printf("\nSorry. You are not eligible");


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
