#include <stdio.h>
#include <string.h>

int main()
{

     char name[30];
     int age;

     FILE *file;
     file = fopen("sonia.txt", "a");

     if (file == NULL)
     {

          printf("file is not exits");
     }
     else
     {
          printf("Flie is Open\n");

          printf("Enter your name: ");
          gets(name);

          printf("Enter your age: ");
          scanf("%d",&age);

          fprintf(file, "Name : %s,\nAge: %d\n",name, age);


          printf("File is written successfully");

          fclose(file);
     }

     return 0;
}