#include<stdio.h>
#include<string.h>
int main()
{   char word[100]="",rev_word[300]="";
    gets(word);
   // puts(word);
    // strrev(word);
    // puts(word);
    int length =strlen(word);
    int flag=-1;
    for(int i=0 ; i<length ; i++)
    {
       if( rev_word[i] != word[length -1-i])
      flag=0 ;
       
           }
           if(flag==-1)
        printf("YES\n");
           else
        printf("NO\n");
       // puts(rev_word);
    return 0;
}