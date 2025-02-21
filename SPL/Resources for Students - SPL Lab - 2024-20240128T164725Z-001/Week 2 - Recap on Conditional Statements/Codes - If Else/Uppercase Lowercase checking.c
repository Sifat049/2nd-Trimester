#include<stdio.h>

int main()
{

    char a;

    printf("Enter a char to check: ");
    scanf("%c", &a);

    int check;
    check = (int)a; //typecasting to integer

    printf("\nThe ASCII value of the char you entered is:%d", check);

    //if(check>=65 && check <=90)
    if(check>=(int) 'A' && check <= (int) 'Z') //(int) 'A' gives the ASCII value of A, which is 65. Used typecasting.
        printf("\nThe char you entered is uppercase\n");

    else if(check>=97 && check <=122) //or we could use (int) 'a' && (int) 'z'
        printf("\nThe char you entered is lowercase\n");

    else
        printf("\nThe char you entered is not an alphabet");

}
