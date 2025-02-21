#include <stdio.h>
#include <string.h>

int main()
{ 
    FILE *file;
    char name[30] ="Mishkat_uL Sifat";
    int legnth = strlen(name);
    file = fopen("text.txt","w");

    if (file == NULL)
    {
        printf("File doesn't exit\n");
    }
    else{
        printf("File is Openned\n");
        for(int i=0; i<legnth; i++)
        {
                     fputc(name[i] , file);

        }
        fclose(file);
    }
    return 0;
}