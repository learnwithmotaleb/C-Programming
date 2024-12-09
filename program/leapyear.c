#include <stdio.h>
int main()
{
     int year;
     printf("Enter check leap year: ");
     scanf("%d", &year);

     if (year % 400 == 0)
     {

          // leap year
          printf("%d leap year\n", year);
     }
     else if (year % 4 == 0 && year % 100 != 0)
     {
          // leap year
          printf("%d leap year\n", year);
     }
     else
     {
          // no leap year
          printf("%d not leap year\n", year);
     }

     return 0;
}