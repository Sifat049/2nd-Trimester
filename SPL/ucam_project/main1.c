#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "result_calculator.h"
int log_in_info(char id[], char pass[]);
int compare(char a[],char b[]);
int s_count;






//structure
struct student_info
{
    char name[15];
    char id[12];
    int course;
};

struct professor_info
{
    char name[20];
    char sub[10];
};

//main function

int main()
{
    printf("\t\t\t\t\t\t\tUIU UCAM");
    system("COLOR 80");
    int wr=0,snum,professor=0,total_course;
    char admin_id[15];
    char admin_pass[15];
    int input; //for Yes or No
    struct student_info s[100];
    int seat_amount[10];//course amount
    char courses_name[15][20];
    struct professor_info p[10];






    //1st input for admin
    do
    {
        if(wr!=0)
        {
            printf(" \nWrong Input ! Try again....\n");
        }
        if(wr==0)
            print__();
        printf("\n\tLog In....");


        printf("\n\nUser ID :");
        gets(admin_id);

        printf("\nPassword :");
        gets(admin_pass);
        wr=log_in_info(admin_id,admin_pass);
    }
    while(wr!=0);
    do
    {
        printf("\n\n\t\t\t\t\tMenu\n\n\n");

        printf(" 1:Add Student info\n");
        printf(" 2:Add Courses\n");
        printf(" 3:Add Instructor\n");
        printf(" 4:Result input\n");
        printf(" 5:Create section\n");
        printf(" 6:Display student info (Total)\n");
        printf(" 7:Display student info (Indivisual)\n");
        printf(" 8:Remove Student \n");
        printf(" 9:Overall view\n");
        printf(" 10:Exit");

        printf("\n\nEnter your choice :");
        scanf("%d",&input);
        if(input!=10&&input<10)
        {
            switch(input)
            {
            case 1:
            {

                char r='y';


                int i=0;
                do
                {
                    printf("\nStudent %d info....",i+1);
                    printf("\nStudent Name :");
                    getchar();
                    gets(s[i].name);
                    printf("\nStudent id : ");
                    gets(s[i].id);
                    printf("How many cources offer :");
                    scanf("%d",&s[i].course);

                    i++;
                    s_count=i;
                    total_course=s_count;

                    getchar();
                    printf("Do you want to add another student info (y/n) :");
                    scanf("%c",&r);
                }
                while(r!='n');
            }
            break;

            case 2:
            {



                printf("\nAmount of Course:");
                scanf("%d",&total_course);

                for(int i=0; i<total_course; i++)
                {
                    printf("\nInput Course %d info:",i+1);
                    printf("\nName:");
                    getchar();
                    gets(courses_name[i]);
                    printf("\nseats :",i+1);
                    scanf("%d",&seat_amount[i]);
                }
                break;
            }
            case 3:
            {

              char input='y';


                do
                {    professor++;
                    int i=0;
                    printf("\n\n%dth Professor info:",i+1);
                    getchar();
                    printf("\nName:");
                    getchar();
                    gets(p[i].name);
                    printf("\nSubject:");
                    getchar();
                    gets(p[i].sub);



                    printf("Do you want to add another Professor info (y/n) :");

                    scanf("%c",&input);

                }
                while(input!='n');
                break;
            }

            case 4:
                printf("Grading System ....\n");
    while(1)
    {int choice;
    printf("Choice 1 for CGPA from Grade \n Choice 2 for CGPA from Marks\n");
    scanf("%d",&choice);
    menu(choice);
    }
                break;


            case 5:
                break;
            case 6:
            {


                printf("\nStudents  info....\n");
                printf("SL  NAME     ID   Courses\n");
                for(int i=0; i<s_count; i++)
                {
                    printf("%d",i+1);
                    printf("  %s",s[i].name);
                    for(int j=i; j<=i; j++)
                    {
                        printf("     %s",s[i].id);
                        for(int k=i; k<=i; k++)
                        {
                            printf("   %d ",s[i].course);
                        }
                    }
                    printf("\n");

                }

            }
            break;



            case 7:
            {

                for(int i=0; i<s_count; i++)
                {
                    printf("\nStudent %d info....\n",i+1);
                    printf(" Name :%s \n",s[i].name);
                    printf(" Id   :%s \n",s[i].id);
                    printf(" Course:%d \n",s[i].course);
                }

                break;
            }
            case 8:
                break;
            case 9:
                printf("\n\n......Overall View......\n");
                printf("\nTotal Student:%d",s_count);
                printf("\nTotal Professor:%d",professor);
                printf("\nTotal Course:%d",total_course);
                printf("\nTotal seats:%d",total_seat(seat_amount,total_course));


            }
        }
        else
            printf("Invalid Input");
    }
    while(input!=10);





    return 0;
}



//Created Function

int log_in_info(char id[], char pass[])
{
    //default data for admin log in

    char a1[]="0112330668";
    char p1[]="alamin007";
    char a2[]="0112330669";
    char p2[]="sifat007";
    char a3[]="0112330670";
    char p3[]="mansur007";
    //compare by string repeatively

    if(compare(a1,id)==0&&compare(p1,pass)==0||compare(a2,id)==0&&compare(p2,pass)==0||compare(a3,id)==0&&compare(p3,pass)==0)
    {
        return 0;
    }

    return 1;

}

//fuction 2 =compare
int compare(char a[],char b[])
{
    return strcmp(a,b);
}


//fuction 3 --- print
void print__()
{
    printf("\n______________________________________________________________________________________________________\n");
}

//function 4
int total_seat(int a[],int n)
{  int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}















