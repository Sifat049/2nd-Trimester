#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<windows.h>
int main()
{
    char letter[50],cc;
    printf("Enter the Sentence :");
   // scanf("%s",&letter); 
    fgets(letter, sizeof(letter) , stdin);
        int length=strlen(letter);
     puts(letter);
     Sleep(20);
    printf("Sentence : %d\n",length);
    int i=0;
    while(letter[i]!='\0')
    {
       printf("%c \n",letter[i]);
       Sleep(500);
       i++; 
    }
   
}