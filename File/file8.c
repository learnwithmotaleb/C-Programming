#include <stdio.h>
#include <string.h>

int main()
{

     FILE *file;

     char name[30];
     int num, age, studentId, phone;

     file = fopen("student.txt", "a");

     if (file == NULL)
     {
          printf("Do not exit file");
     }
     else
     {
          printf("File is opened\n");

          printf("Enter number of students detalis: ");
          scanf("%d", &num);

          for (int i = 1; i <= num; i++)
          {

               printf("Enter Student name: ");
               scanf("%s",&name);

               printf("Enter Student Age: ");
               scanf("%d", &age);

               printf("Enter Student Id: ");
               scanf("%d", &studentId);

               printf("Enter your phone Number: ");
               scanf("%d", &phone);

               fprintf(file,"%s\t\t%d\t\t%d\t\t%d",name,age,studentId,phone);


               printf("Succesfully Added");

          }

          fclose(file);
     }

     return 0;
}