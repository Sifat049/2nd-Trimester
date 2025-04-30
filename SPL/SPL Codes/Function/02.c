#include<stdio.h>

void function (char msg)
{
    
    printf("Value received from main: %c\n",msg);
}

int main()
{
    
    char input;
    scanf("%c",&input);
    function(input);
    return 0;
}