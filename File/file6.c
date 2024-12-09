#include <stdio.h>
#include <string.h>

int main()
{

     FILE *file;
     char name[40];
     file = fopen("sonia.txt", "r");

     if (file == NULL)
     {

          printf("file do not exit");
     }
     else
     {

          printf("file open");
          while (!feof(file))
          {
               fgets(name, 20, file);
               printf("%s\n", name);
          }

          fclose(file);
     }

     return 0;
}
