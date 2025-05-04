#include<stdio.h>
#include<string.h>
#include<windows.h>

int  main()
{   
    char str[100];
      gets(str);
      puts(str);
     // strlwr(str);
      int vowels=0;
      int i=0;
      while(str[i]!='\0')
      {
        str[i]= tolower (str[i]);
        i++;
      }
      puts(str);
     /* int i=0;
      while(str[i]!='\0')
      {
       // str[i]=tolower(str[i]);
        char ch=str[i];

        if(ch=='a' ||
           ch=='e' ||
           ch=='i' ||
           ch=='o' ||
           ch=='u' )
                 vowels++;    
                 i++;
    }*/
  //  printf("Number of Vowels :%d",vowels);

    return 0;
}
