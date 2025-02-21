#include<stdio.h>
#include<string.h>
int main(){


    char str[100];
    int word=0;
    printf("Enter the sentence you want to count the words for: ");
    gets(str);

    for(int i=0 ; str[i]!='\0' ; i++)
        {
            if(str[i]==' ')
                {
                    word++;
                }
    }

    word++;
    printf("\nNumber of words in the sentence \"%s\" is %d\n",str,word);

}
