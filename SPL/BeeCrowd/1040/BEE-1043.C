 #include<stdio.h>  
    int main()    
    {  
      float A,B,C,Perimetro=0,Area=0;
      scanf("%f%f%f",&A,&B,&c);
      if(A+B>C && A+C>B && B+C>A)
      {
        Perimetro= (A+B+C);
        printf("%f",Perimetro);
      }  
      else
      Area=((A+B)/2)*C;
      printf("%f",Area);
    return 0;  
    }   