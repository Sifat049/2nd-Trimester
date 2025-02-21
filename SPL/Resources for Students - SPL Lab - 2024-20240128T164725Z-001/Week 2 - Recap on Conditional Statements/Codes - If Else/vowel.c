#include<stdio.h>

int main(){

    char a;
    printf("Enter alphabet to check:");
    scanf("%c", &a);

    if(a=='a' || a=='e' || a=='i'|| a=='o' || a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("\nEntered alphabet %c is a vowel", a);
    else
        printf("\nEntered alphabet %c is a consonant", a);

}
