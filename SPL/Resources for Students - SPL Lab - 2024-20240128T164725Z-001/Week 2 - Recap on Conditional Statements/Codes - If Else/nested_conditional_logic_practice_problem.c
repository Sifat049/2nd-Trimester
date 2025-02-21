#include<stdio.h>

int main()

{
    char type, emp_type, civ_type;
    int  credit;

    printf("\t\t\tNested Conditional Logic Practice Problem");
    printf("\n\t\t\tCSE 110, MIST");
    printf("\n\nPress Enter to Continue!");

    //Note: This press enter to continue was done with a getchar()
    //check how getchar() is used to consume a character (Enter here).
    //check carefully and try to conceptualize the "if-elseif-else" sequence for all the cases!
    getchar();

    printf("\nEnter S for Student and E for employee: ");
    scanf("%c", &type);

        if(type=='s' || type == 'S')
            //considering both s and S. No that input is not case sensitive. Meaning student condition is selected even if user
            {
                printf("\nEnter earned credit of Student: ");
                 scanf("%d", &credit);

                 if(credit>=0 && credit<=36)
                    printf("\n\tLevel 1");
                 else if(credit>36 && credit<=72)
                     printf("\n\tLevel 2");
                 else if(credit>72 && credit<=108)
                     printf("\n\tLevel 3");
                 else if(credit>108)
                     printf("\n\tLevel 4");
                 else
                    printf("\n\tWrong credit input");
            }

        else if(type=='E' || type == 'e')
            {
                printf("\nEnter M for Military and C for Civil: ");

                /*Note on getchar() while taking char input
                When taking character input only (not applicable for any other type) with scanf(), always add a getchar() before it if there were preceding a scanf()
                *you don't need to add a getchar() before scanf("%c") if it is the VERY FIRST scanf() of the program

                getchar() is a library function (defined inside stdio.h) that consumes a character.

                If you can't remember it that way, Easy way of knowing if getchar() is needed before the scanf() is,
                check if, while running the program, is the program not even giving you the opportunity to type your char input?
                if not, that means an extra character (usually "Enter") is getting consumed and program is considering that as your char input!
                    So you need to consume the extra char with getchar() before taking the actual input with scanf()
                */
                getchar();
                scanf("%c", &emp_type);

                if(emp_type=='M'|| emp_type=='m')
                    printf("\nMilitary Employee");

                else if(emp_type=='c' || emp_type == 'C')

                    {
                            printf("\nCivil Faculty");

                            printf("\n\nEnter P for Permanent and A for Adjunct: ");
                            getchar();
                            scanf("%c", &civ_type);

                            if(civ_type=='P' || civ_type=='p')
                                printf("\nPermanent");
                            else if(civ_type=='a' || civ_type=='A')
                                printf("\nAdjunct");
                            else
                                printf("\nWrong Input. Only P/p or A/a accepted");
                    }

                else
                    printf("\nWrong Input. Only C/c or M/m accepted");


            }

        else
            printf("\nWrong Input, Only E/e or S/s accepted");


}
