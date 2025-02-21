#include<stdio.h>
#include<string.h>
int main()
{
    char word[100];
    gets(word);
    // puts(word);
    // strrev(word);
    // puts(word);
    //int length =strlen(word);
    for(int i=0 ; word[i]!='\0' ; i++)
    {
        char toupper(word[i])= toupper(word);
        printf("%c",word);
    }

    return 0;
}
