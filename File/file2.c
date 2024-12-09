#include <stdio.h>
#include <string.h>

int main()
{
    // To write something to a file
    // fputc(), fputw(), fputs(), fprintf(), fwrite()

    char name[30] = " Lean With Motaleb";
    int length = strlen(name);
    int i;
    FILE *file;
    file = fopen("sonia.txt", "a"); // Corrected here: use double quotes

    if (file == NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        printf("File opened successfully.\n");
        for (i = 0; i < length; i++)
        {
            fputc(name[i], file);
        }
        printf("File written successfully!\n");
        fclose(file);
    }

    return 0;
}
