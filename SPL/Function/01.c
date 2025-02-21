/*#include<stdio.h>

void function (char msg[])
{
    
    printf("%s\n",msg);
}

int main()
{
    char msg[]="This is a function";
    function(msg);
    return 0;
}
*/
#include<stdio.h>

void print( );

int main()
{ 
    print();
    return 0;
}
void print( )
{
     
    printf("This is a function\n");
    //recursion
   // print();    
}


/*
//RECURSIVE FUNCTION

 
#include<stdio.h>

void print_recursion(int );

int main()
{ 
    print_recursion(10);
    return 0;
}
void print_recursion(int n )
{
    
    printf("This is a function\n");
    if(n==1)
    {
        return;
    }
    else
    {
        print_recursion(n-1);
    }
     
}



*/
