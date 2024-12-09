#include <stdio.h>
int main()
{

     int marks;
     printf("Enter markes ");
     scanf("%d", &marks);

     if (marks > 100 || marks < 0)
     {
          printf("Invalid marks\n");
     }
     else if (marks >= 80 && marks <= 100)
     {
          printf("A+\n");
     }
     else if (marks >= 70 && marks <= 79)
     {
          printf("A-\n");
     }
     else if (marks >= 60 && marks <= 69)
     {
          printf("A\n");
     }
     else if (marks >= 50 && marks <= 59)
     {
          printf("B\n");
     }
     else if (marks >= 40 && marks <= 49)
     {
          printf("C\n");
     }
     else if (marks >= 33 && marks <= 39)
     {
          printf("D\n");
     }
     else
     {
          printf("Tume fail\n");
     }

     return 0;
}