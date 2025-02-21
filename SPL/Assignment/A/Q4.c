//Q-4
#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &start, &end);

    printf("Digit Prime between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
       int sum = 0;
        int temp = i;
        while (temp != 0) {
            sum += temp % 10;
            temp /= 10;
        }
        int prime = 1;
        for (int j = 2; j <= sum/2; j++) {
            if (sum % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime && sum >= 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
