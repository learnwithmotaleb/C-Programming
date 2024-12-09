#include <stdio.h>
#include <string.h>

int main()
{

     FILE *file;
     char name[20];
     file = fopen("sonia.txt", "a");

     if (file == NULL)
     {
          printf("File do not exit.");
     }
     else
     {

          printf("File is Open");

          printf("Enter your University name: ");
          gets(name);
          fputs(name, file);
            fputs("\n", file);

          printf("Succesfull added");
          fclose(file);
     }

     return 0;
}