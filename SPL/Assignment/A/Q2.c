//Q-2
#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2, result;
    char operator;

    printf("Enter an expression : ");
    scanf("%lf %c %lf", &num1, &operator, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf\n", result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf\n", result);
            } else {
                printf("Division by zero error!\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
            break;
    }

    return 0;
}
