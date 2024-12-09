#include <stdio.h>
#include <ctype.h>

int main()
{

     // factorial number of sum that strong number

     int number, sum = 0, temp, remainder, fact, i;
     printf("Enter a number: ");
     scanf("%d", &number);

     temp = number;

     while (temp != 0)
     {
          remainder = temp % 10;

          fact = 1;
          for (i = 1; i <= remainder; i++)
          {
               fact = fact * i;
          }

          sum = sum + fact;
          temp = temp / 10;
     }
     if (sum == number)
     {
          printf("%d is a Strong number ", number);
     }
     else
     {
          printf("%d is Not a Strong number ", number);
     }
}