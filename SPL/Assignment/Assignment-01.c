#include <stdio.h>
#include <string.h>
#include <ctype.h>

void sandwich_string(char *str, char *sandwich);

int main() {
    char str[100], sandwich[200];
    printf("Enter a string: ");
    scanf("%s", str);
    
    sandwich_string(str, sandwich);
    
    printf("Sandwich string: %s\n", sandwich);
    
    return 0;
}

void sandwich_string(char *str, char *sandwich) {
    char *ptr = sandwich;
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            *ptr = toupper(str[i]);
        } else {
            *ptr = str[len - i - 1];
        }
        ptr++;
    }
    *ptr = '\0';
}
