#include<stdio.h>

int main()

{
    printf("\n\t\t\tHello IPE 06!! ");
    printf("\nI'm Lec Raiyan");
    printf("\nLooking forward to the next 14 weeks in CSE 106!\n\n");

    int student_ID;
    int prog_skill;
    int prog_interest;


    printf("\nLet's do a little intro! Tell me about yourself.");

    printf("\nWhat's your student ID : ");
    scanf("%d", &student_ID);


    printf("\n\nOkay, nice to meet you, %d", student_ID);

    printf("\n\nHow would you rate your computer skills so far? \nChoose your level (enter 1-5):\n1. Amateur \n2. Beginner \n3. Moderate \n4. Advanced \n5. Pro\nEnter your level: ");

    scanf("%d", &prog_skill);
    printf("\nSo you think your in level %d! Let's see how it changes in 14 weeks", prog_skill);

    printf("\n\nNow rate how interesting you find programming so far from 0 (really boring) to 5 (amazing!):");

    scanf("%d", &prog_interest);
    printf("\nSo you rated your interest as %d. I'm pretty sure that'll change too!", prog_interest);

    printf("\n\n\t\t Okay, that's all for now. See you later!\n\n");


    getchar();

    return 0;

}
