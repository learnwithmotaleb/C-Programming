#include <stdio.h>
#include <string.h>

int main()
{

     FILE *file;
     char fname[100];
     char lname[20];
     int age;
 

     file = fopen("sonia.txt", "r");

     if (file == NULL)
     {

          printf("Do not exits file");
     }
     else
     {
          printf("File Open\n");

          fscanf(file,"%s %s %d",&fname, &lname, &age);
          printf("%s %s %d\n",fname,lname,age);


          fclose(file);
     }

     return 0;
}