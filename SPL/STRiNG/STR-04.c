#include<stdio.h>
#include<string.h>
int main()
{   char word[100];
    gets(word);
   // puts(word);
    int space=0;
    int i=0;
    while(word[i] != '\0')
    {
        if(word[i]==' ')
        {
            space++;
        }
        i++;
    }
    printf("Number of Words : %d\n",space+1);
    return 0;
}