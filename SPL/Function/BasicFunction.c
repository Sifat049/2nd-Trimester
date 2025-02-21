#include<stdio.h>
    void add(int num_1,int num_2)   
    {
     // int num_1,num_2,result;
     // num_1=10;
     // num_2=20;
     int result = num_1 + num_2;
      printf("Result : %d\n",result);
    }
    int sum(int num_1,int num_2)
    {
        return num_1 + num_2;
    }

int main()
{    int result = sum(20,2);
     printf("Sum =%d\n",result);
     add(10,20);
     add(24,16);
     

    return 0;
}
