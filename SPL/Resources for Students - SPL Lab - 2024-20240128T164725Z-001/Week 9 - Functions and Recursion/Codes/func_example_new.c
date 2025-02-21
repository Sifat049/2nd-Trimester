#include<stdio.h>
#include<string.h>

int mysum (int a,int b, int c); //function prototype
void greet (char name[],int res); //this func takes a string as input


int main()

{
    int n1, n2, n3;
    printf("\nEnter first num: ");
    scanf("%d",&n1);
    printf("\nEnter second num: ");
    scanf("%d",&n2);
    printf("\nEnter second num: ");
    scanf("%d",&n3);
    //getchar is a library function to consume one character. hence, it's named get char
    //we use it to consume the auto-inserted whitespace after scanf, otherwise it'll be a problem if we use gets() below
    getchar();

    int res;
    char name1[20];

    res = mysum(n1, n2, n3);
    printf("\nTotal mark achieved in 3 CTs is: %d", res);

    printf("\nEnter your name:");
    //while using gets, if there's a scanf above, use a getchar() after that scanf to consume a white space that is auto inserted
    //otherwise, gets() will take that whitespace and what you won't be able to take the input for your variable
    gets(name1);

    //greet is a function that takes the students name and sum of as input
    greet(name1,res);




}

int mysum (int a, int b, int c)
{
    return a+b+c;
}

void greet (char name[],int res)

{
     printf("Hello, %s you got %d counting all 3 of your CTs", name, res);
}






