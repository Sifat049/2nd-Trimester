#include<stdio.h>
#include<string.h>

int main(){
    char str1[50],str2[50];
    int len = 0;

    gets(str1);
    gets(str2);
    for(int i=0;str1[i]!='\0';i++)
        {
            len++;
        }

    for(int i=0 ; str2[i]!='\0' ; i++)
        {
            str1[len++] = str2[i];
        }

    str1[len]='\0';
    printf("Concatenation is: \"%s\" \n",str1);

}
