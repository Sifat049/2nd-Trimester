#include <stdio.h>
#include <string.h>

int main()
{ 
    FILE *file;
    char ch;
    file = fopen("text.txt","r");

    if (file == NULL)
    {
        printf("File doesn't exit\n");
    }
    else
    {
        printf("File is Openned\n");
        while (!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        
       
        fclose(file);
    }
    return 0;
}