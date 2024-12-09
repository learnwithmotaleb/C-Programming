#include <stdio.h>
int main()
{

     FILE *file;

     file = fopen("sonia.txt", "w");
     if (file == NULL)
     {
          printf("File dossn't exit\n");
     }
     else
     {

          printf("File is open\n");
          fclose(file);
     }

     return 0;
}