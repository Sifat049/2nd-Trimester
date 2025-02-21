#include <stdio.h>

void main()
{
    float principal,  simple_interest, time, rate;


    printf("Enter the principal you have in your account:");
    scanf("%f", &principal);

    printf("\nEnter the interest rate:");
    scanf("%f", &rate);


    printf("\nEnter the time this principal has been in the bank (years):");
    scanf("%f", &time);


    simple_interest = (principal * rate * time) / 100 ;


    printf("\n\n\t\tSimple Interest Calculation for your account\n\n");
    printf("Principal Amount = BDT %.2f\n", principal);
    printf("Rate =  %.2f\n", rate);
    printf("Time = %.2f years\n", time);
    printf("Simple interest = %.2f\n", simple_interest);
}
