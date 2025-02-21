#include<stdio.h>
#include<string.h>


int main()
{
    char str[10];
    int str_size;

    /*printf("Enter a word: ");
    scanf("%s", str);
    printf("\nYou entered: %s", str);*/

    printf("\nEnter a word: ");
    gets(str);
    printf("\nYou entered:");
    puts(str);

    str_size = strlen(str);
    printf("\nThe len is: %d", str_size);






}

