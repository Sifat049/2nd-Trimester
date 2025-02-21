#include<stdio.h>

int main()

{

    int b_year, age_check_year, age;

    printf("Enter the year you were born: ");
    scanf("%d", &b_year);

    printf("\nEnter the year to calculate your age in: ");
    scanf("%d", &age_check_year);

    age = age_check_year - b_year;

    printf("\n\nYou'll be %d years old in %d\n\n", age, age_check_year);


}
