#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("sonia.txt", "r"); // Corrected: Use double quotes for the file mode
    char ch;

    if (file == NULL)
    {
        printf("File does not exist.\n");
    }
    else
    {
        printf("File Opened Successfully:\n");
        while ((ch = fgetc(file)) != EOF) // Read until EOF is reached
        {
            printf("%c", ch);
        }
        fclose(file);
    }

    return 0;
}
