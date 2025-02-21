#include<stdio.h>
int main()
{
    char str1[20], str2[20];
    int len=0;

    gets(str1);
    gets(str2);

    for(int i=0;str1[i]!='\0';i++)
    {
        len++;
    }

    str1[len]=' ';
    len++;

    for(int j=0; str2[j]!='\0'; j++)
    {
        str1[len]=str2[j];
        len++;
    }

    str1[len+1]='\0';

    printf("\n\nStr1 after concat: %s\n\n", str1);
}
