#include <stdio.h>
#include <string.h>

void main()
{
    char string[25],string2[25], reverse_string[25] = {'\0'};
    int  i, length = 0, flag = 0;

    fflush(stdin);
    printf("Enter a string \n");
    gets(string);

    //strcpy(string2,string); maam


    //strrev(string); maam

    for (i = 0; string[i] != '\0'; i++)
    {
        length++;  maam
    }
    for (i = length - 1; i >= 0; i--)
    {
       reverse_string[length - i - 1] = string[i];
    }  Hello|| olleh  5-3-1=1 || 3


    for (i = 0; i < length; i++)
    {
        if (reverse_string[i] == string[i])
            flag = 1;
        else
            flag = 0;
    }
   /* if (strcmp(string2,string)==0)
        printf("%s is a palindrome \n", string2);
    else
        printf("%s is not a palindrome \n", string2);*/
}
