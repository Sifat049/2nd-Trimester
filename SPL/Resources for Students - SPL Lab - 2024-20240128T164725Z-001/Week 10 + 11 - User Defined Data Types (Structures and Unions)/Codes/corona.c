#include<stdio.h>

float sum (float symptomps[], int n)
{

    int i;
    float sum=0;

    for(i=0;i<n;i++)
    {
        sum+=symptomps[i];
    }
return sum;

}

void age_risk(int age)
{
    if(age>60)
        printf("\nYour age puts you at high risk of complications from COVID-19\n\n");
    else if (age>40)
        printf("\nYour age puts you at moderate risk of complications from COVID-19\n\n");
    else if (age>25)
        printf("\nYour age puts you at mild risk of complications from COVID-19\n\n");
    else
        printf("\nYour age puts you at minimal risk of complications from COVID-19\n\n");
}

int main()
{
    float symptomps [10];
    char answer[10];
    char name[25];
    int i,age;

    printf("\nEnter your name: ");
    gets(name);
    printf("\nEnter your age: ");
    scanf("%d",&age);
    getchar();

    for(i=0;i<10;i++)
    {
        symptomps[i]=0;
    }


    printf("\nDo you have fever? (Y/N): ");
    scanf("%c", &answer[0]);

    if(answer[0]=='Y' || answer[0]=='y') symptomps[0]=1;


    //getchar();

    printf("\nDo you have Fatigue? (Y/N): ");
    scanf("%c", &answer[1]);

    if(answer[1]=='Y' || answer[1]=='y') symptomps[1]=0.5;



    getchar();

    printf("\nDo you have Dry Cough? (Y/N): ");
    scanf("%c", &answer[2]);

    if(answer[2]=='Y' || answer[2]=='y') symptomps[2]=1;



    getchar();

    printf("\nDo you have Sneezing? (Y/N): ");
    scanf("%c", &answer[3]);

    if(answer[3]=='Y' || answer[3]=='y') symptomps[3]=-1;




    getchar();

    printf("\nDo you have Muscle Aches? (Y/N): ");
    scanf("%c", &answer[4]);

    if(answer[4]=='Y' || answer[4]=='y') symptomps[4]= 0.5;


    getchar();

    printf("\nDo you have a stuffy/runny nose? (Y/N): ");
    scanf("%c", &answer[5]);

    if(answer[5]=='Y' || answer[5]=='y') symptomps[5]= -0.5;


    getchar();

    printf("\nDo you have a sore throat? (Y/N): ");
    scanf("%c", &answer[6]);

    if(answer[6]=='Y' || answer[6]=='y') symptomps[6]=0.5;


    getchar();

    printf("\nDo you have Diarrhea ? (Y/N): ");
    scanf("%c", &answer[7]);

    if(answer[7]=='Y' || answer[7]=='y') symptomps[7]=-0.5;


    getchar();

    printf("\nDo you have a headache? (Y/N): ");
    scanf("%c", &answer[8]);

    if(answer[8]=='Y' || answer[8]=='y') symptomps[8]=0.5;


    getchar();

    printf("\nDo you have shortness of breath? (Y/N): ");
    scanf("%c", &answer[9]);

    if(answer[9]=='Y' || answer[9]=='y') symptomps[9]=1;




    float result=0, percentage;

    result = sum (symptomps,10);

    printf("\nResult: %.1f", result);

       if(result<0) //can't be neg percentage, force 0
        result=0;

    percentage = (result/5.0)*100;


    printf("\n\nHello, %s, You have %.2f percent  probability of being COVID-19 positive. Stay safe.\n\n", name, percentage);
    age_risk(age);

}
