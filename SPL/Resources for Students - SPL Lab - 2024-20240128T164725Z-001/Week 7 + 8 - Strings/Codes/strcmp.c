#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int len=0;

    gets(str1);
    gets(str2);

    if(strcmp(str1, str2)==0)
    {
        printf("The strings are equal");
    }
    else if(strcmp(str1, str2)==1)
    {
        printf("The first string is greater than the second");
    }
    else if(strcmp(str1, str2)==-1)
    {
        printf("The second string is greater than the first");
    }

}
