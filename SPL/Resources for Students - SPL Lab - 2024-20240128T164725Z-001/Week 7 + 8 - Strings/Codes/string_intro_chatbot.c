#include<stdio.h>
#include<string.h>

int main()
{
    char name[100], dept [50], question[150];
    char name_show[100];
    int i;

    printf("\nHello, I'm misty, the MIST chatbot! What's your name? ");
    gets(name);

    char * p1, * p2;
    char find1[]="My name is";
    char find2[]="my name is";
    p1 = strstr(name, find1);
    p2 = strstr(name, find2);
    if(p1 || p2)
        {

        for(i=0; i<strlen(name)-11; i++)
        {
            name_show[i] = name[11+i];

        }
        name_show[i+1]='\0';

    }

    else
    {
         strcpy(name_show, name);

    }

    printf("\nNice to meet you %s !", name_show);


    printf("\nWhich dept are you studying in? ");
    gets(dept);


    printf("\nGreat! Find more info about your department at: ");

    if(strcmpi(dept,"CSE")==0)
    {
        printf("www.mist.ac.bd/department/cse");
    }

     else if(strcmpi(dept,"IPE")==0)
    {
        printf("www.mist.ac.bd/department/ipe");
    }


    while(1)
    {


    printf("\n\n%s, what can I help you with today? :) ", name_show);
    gets(question);

    char * p3;
    char * p4;
    char * p5;
    char * p6;
    char * p7;
    char find3[]="corona";
    char find4[]="admission";
    char find5[]="bye";
    char find6[]="trump";
    char find7[]= "fees";




    p3 = strstr(question, find3);
    p4 = strstr(question, find4);
    p5 = strstr(question, find5);
    p6= strstr(question,find6);
    p7 = strstr(question,find7);


    if (p3) {
		printf("\nSure! Find more info about corona update in Bangladesh at www.coronastate.mist.ac.bd" );
	}

      else if (p4) {
		printf("\nSorry, the admission for MIST is not open yet. Find more info at www.mist.ac.bd/admission" );
	}

	else if (p5) {
		printf("\nIt was great helping you. See you again! Bye. " );
		break;
	}

	else if (p6) {
		printf("\nwww.donaldjtrump.com " );
	}

	else if(p7)
    {
        printf("\nFind more about MIST tuition fees at www.mist.ac.bd/fees");
    }

	else
    {
        printf("\nSorry, I'm afraid i can't help you with that...yet! Search again?");
    }

    }

}
