#include <stdio.h>
#include <string.h>

int main()
{ 
    FILE *file;
    char name[30] ;
    file = fopen("text.txt","w");

    if (file == NULL)
    {
        printf("File doesn't exit\n");
    }
    else
    {
        printf("File is Openned\n");
        printf("Enter Your Name :");
        gets(name);
        fputs(name,file);
        printf("File is succesfully written\n");
        fclose(file);
    }
    return 0;
}