#include<stdio.h>
#include "maxx.h"
#include "TasbirsFuncHeader.h"

int main()
{
    float CT1, CT2, CT3, CT4;
    float max_CT_2;
    float max_CT_3;
    float max_CT_4;

    char name[20];

    printf("\nEnter CT1 number:");
    scanf("%f",&CT1);
    printf("\nEnter CT2 number:");
    scanf("%f",&CT2);
    printf("\nEnter CT3 number:");
    scanf("%f",&CT3);
    printf("\nEnter CT4 number:");
    scanf("%f",&CT4);

    max_CT_2= max_ct_func(CT1,CT2); //this is a function call
    max_CT_3=max_ct_func(max_CT_2,CT3); //called again
    max_CT_4=max_ct_func(max_CT_3,CT4); //called again

    //or you can nest the function to write the code from line 29-33 in one line and save the space of 3 extra variables (max_CT_2-4

    printf("\n\nThe max CT among all 4 CT is: %.2f (using nested function here)\n", max_ct_func(max_ct_func(max_ct_func(CT1,CT2), CT3),CT4));
    //the above line was a nested function call.



}
