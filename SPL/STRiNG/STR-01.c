#include<stdio.h>
#include<string.h>

int  main()
{   
    char str[100];
      gets(str);
      puts(str);
    // int length=strlen(str);           //Library Function
     int i=0;
    int length=0;
    while(str[i]!='\0')
    //for(int i=0; str[i]!='\0';i++)
    {
      length++;
       i++;
    }
    printf("Length : %d",length);
    return 0;
}
