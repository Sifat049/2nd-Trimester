    #include<stdio.h>  
    int main()    
    {    
    int n,r,sum=0,temp,add=0;    
    printf("enter the number=");    
    scanf("%d",&n);    
    temp=n;    
    while(n!=0)    
    {    
    r=n%10;    
    add+=r;
    sum=(sum*10)+r;    
    n=n/10;    
    }    
    printf("ADD = %d\n",add);
    if(temp==sum)    
    printf("%d palindrome number ",sum);    
    else    
    printf("%d not palindrome",sum);   
    return 0;  
    }   