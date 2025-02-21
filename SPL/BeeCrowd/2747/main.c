#include <stdio.h>

void print_screen() {
    int i, j;

    // Print the first line with 39 dashes
    for (i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");

    // Print the middle lines with | and spaces
    for (i = 0; i < 5; i++) {
        printf("|");
        for (j = 0; j < 37; j++) {
            printf(" ");
        }
        printf("|\n");
    }

    // Print the last line with 39 dashes
    for (i = 0; i < 39; i++) {
        printf("-");
    }
    printf("\n");
}

int main() {
    // Call the function to print the screen
    print_screen();
    return 0;
}
