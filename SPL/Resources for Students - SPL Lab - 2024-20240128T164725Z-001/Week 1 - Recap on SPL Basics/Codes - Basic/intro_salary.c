#include<stdio.h>
int main()
{
    system("COLOR 70");

    printf("\t\t\t\tSalary Calculator");
//    printf("\n\t\t\tDeveloped in CSE 106 Sessional");
//    printf("\n\t\t\t\t  MIST 2020");


    float overtime_rate, basic_sal ;
    int days_worked, overtime_hour;

    float salary, sal_with_ot;

    printf("\n\nEnter your basic salary per day: ");
    scanf("%f",&basic_sal);

    printf("\nEnter how many days you worked last month: ");
    scanf("%d",&days_worked);

    salary = basic_sal * days_worked;


    printf("\n\nYour basic salary for last month is: %.2f", salary);

    printf("\n\nHow many hours did you work overtime last month? : ");
    scanf("%d",&overtime_hour);
    printf("\n\nEnter your overtime rate: ");
    scanf("%f",&overtime_rate);

    sal_with_ot = salary + overtime_hour * overtime_rate;


    printf("\n\nYour basic salary for last month (with overtime pay) is: %.2f", sal_with_ot);


}
