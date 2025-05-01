#include <stdio.h>

int main() {
    int i, j, n;

    printf("Enter the number of rows (odd number): ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    int middleRow = n / 2;

    // Upper part of the pattern
    for (i = 0; i <= middleRow; i++) {
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // Lower part of the pattern
    for (i = middleRow - 1; i >= 0; i--) {
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j < 2 * i + 1; j++)
            printf("*");
        printf("\n");
    }

    // Print "Eid Mubarak" centered
    printf("\n");
    for (i = 0; i < n / 2; i++)
        printf(" ");
    printf("Eid Mubarak\n");

    return 0;
}
