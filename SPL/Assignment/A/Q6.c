//Q-6
#include <stdio.h>
#include <math.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
// if (fahrenheit<0)
    //printf("%d is negative temperatures and temperatures outside the normal range.",celsius);
    if(fahrenheit>=100)
        printf("%.1f F\n", fahrenheit);
    else
        printf("%.f F\n", fahrenheit);


    return 0;
}
