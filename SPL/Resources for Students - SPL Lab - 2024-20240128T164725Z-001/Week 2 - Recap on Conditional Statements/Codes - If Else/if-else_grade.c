#include<stdio.h>

void main()
{	int a;
    printf("Your number \n");
	scanf("%d", &a);

	if(a >= 80)
		printf("A+");
	else if(a >= 75 && a<80)
		printf("A");
	else if(a >= 70 && a<75)
		printf("A-");
	else if(a >= 65 && a<70)
		printf("B+");
    else if(a >= 60 && a<65)
		printf("B");
	else if(a >= 55 && a<60)
		printf("B-");
    else if(a >= 50 && a<55)
		printf("C+");
	else if(a >= 45 && a<50)
		printf("C");
	else if(a >= 40 && a<45)
		printf("D");
	else
		printf("F");
}


