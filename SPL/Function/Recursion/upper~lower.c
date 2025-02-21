#include <stdio.h>
 

int print(int,int);

 int main ()
 {  int x,y;
    scanf("%d %d",&x,&y);
    print(x,y);
   // return 0;
 }

int print(int lower , int upper )
 {
       if(upper < lower) return ;
       print(lower, upper - 1);
       printf("%d\n", upper);

 }