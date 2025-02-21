#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];
    gets(input);
    int index=1;
    int index2=1;
    while(input[index]!='\0')
    {
        if(input[index]!=input[index-1] )
        {
            input[index2]=input[index];
            index2++;

        }
        index++;
    }
    input[index2]='\0';
    printf("%s",input);
    return 0;
}
/*
#include <stdio.h>
void go(int num){
printf("How are you?\n");
if(num==0){
return;
}
num /= 10;
go(num);
printf("I am fine\n");
}
int main(void){
int num = 45633;
go(num);
return 0;
} */