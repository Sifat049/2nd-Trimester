#include<stdio.h>

struct patient
{
    char name[30];
    int age;
    float symptomps[10];
    char answer[10];

};

float sum (float a[], int n)

{

    int i =0; float sum=0;

    for(i=0;i<n;i++)
    {
        sum+=a[i];
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

    int i,c=0;
    struct patient p1[1000];

    while(1)  //for 10 patients

    {

    printf("\nPlease Enter your name: ");
    gets(p1[c].name);
    printf("\nPlease Enter your age: ");
    scanf("%d",&p1[c].age);
    getchar();


    for(i=0;i<10;i++)
    {
        p1[c].symptomps[i]=0;
    }


    printf("\nDo you have fever? (Y/N): ");
    scanf("%c", &p1[c].answer[0]);


    if((p1[c].answer[0]=='Y') || (p1[c].answer[0]=='y')) p1[c].symptomps[0]=1;



    getchar();

    printf("\nDo you have Fatigue? (Y/N): ");
    scanf("%c", &p1[c].answer[1]);

    if(p1[c].answer[1]=='Y' || p1[c].answer[1]=='y') p1[c].symptomps[1]=0.5;



    getchar();

    printf("\nDo you have Dry Cough? (Y/N): ");
    scanf("%c", &p1[c].answer[2]);

    if(p1[c].answer[2]=='Y' || p1[c].answer[2]=='y') p1[c].symptomps[2]=1;



    getchar();

    printf("\nDo you have Sneezing? (Y/N): ");
    scanf("%c", &p1[c].answer[3]);

    if(p1[c].answer[3]=='Y' || p1[c].answer[3]=='y') p1[c].symptomps[3]=-1;




    getchar();

    printf("\nDo you have Muscle Aches? (Y/N): ");
    scanf("%c", &p1[c].answer[4]);

    if(p1[c].answer[4]=='Y' || p1[c].answer[4]=='y') p1[c].symptomps[4]=0.5;


    getchar();

    printf("\nDo you have a stuffy/runny nose? (Y/N): ");
    scanf("%c", &p1[c].answer[5]);

    if(p1[c].answer[5]=='Y' || p1[c].answer[5]=='y') p1[c].symptomps[5]=-0.5;


    getchar();

    printf("\nDo you have a sore throat? (Y/N): ");
    scanf("%c", &p1[c].answer[6]);

    if(p1[c].answer[6]=='Y' || p1[c].answer[6]=='y') p1[c].symptomps[6]=0.5;


    getchar();

    printf("\nDo you have Diarrhea ? (Y/N): ");
    scanf("%c", &p1[c].answer[7]);

    if(p1[c].answer[7]=='Y' || p1[c].answer[7]=='y') p1[c].symptomps[7]=-0.5;


    getchar();

    printf("\nDo you have a headache? (Y/N): ");
    scanf("%c", &p1[c].answer[8]);

    if(p1[c].answer[8]=='Y' || p1[c].answer[8]=='y') p1[c].symptomps[8]=0.5;


    getchar();

    printf("\nDo you have shortness of breath? (Y/N): ");
    scanf("%c", &p1[c].answer[9]);

    if(p1[c].answer[9]=='Y' || p1[c].answer[9]=='y') p1[c].symptomps[9]=1;




    float result=0, percentage;


    result=sum(p1[c].symptomps,10);


    printf("\n\n\t\t\t\t***Results***");
    printf("\n\nResult: %.1f", result);

    if(result<0)
        result=0;

    percentage= (result/5.0)*100;


    printf("\n\nMr. %s, You have %.2f percent  probability of being COVID-19 positive. Stay safe.\n", p1[c].name, percentage);
    age_risk(p1[c].age);
    getchar();

//    puts(p1[0].name);

    c++;

    }

}

