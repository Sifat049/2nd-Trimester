#include <stdio.h>

int main()
{ 
    FILE *file;
    file = fopen("text.txt","w");

    if (file == NULL)
    {
        printf("File doesn't exit\n");
    }
    else{
        printf("File is Openned\n");
        fclose(file);
    }
    return 0;
}