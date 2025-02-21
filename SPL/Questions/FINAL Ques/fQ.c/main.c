#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char string_length(char str[])
{
  int i=0;
  while(str[i]!='\0')
  {
      i++;
  }
   return i;

}

int main()
{
        char str[100];
        gets(str);
//        scanf("%s",str);
//        gets(str);
int len=string_length(str);
    printf("%d",len);
    return 0;
}
