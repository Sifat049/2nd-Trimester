#include <stdio.h>
#include <string.h>

int main()
{ 
    FILE *file;
    char name[30] ;
    int age;
    file = fopen("text.txt","a");

    if (file == NULL)
    {
        printf("File doesn't exit\n");
    }
    else
    {
        printf("File is Openned\n");
        printf("Enter Your Name :");
        gets(name);
        printf("Enter Your Age :");
        scanf("%d",&age);
        fprintf(file, "Name = %s, Age =%d\n",name,age);
        printf("File is succesfully written\n");
        fclose(file);
    }
    return 0;
}