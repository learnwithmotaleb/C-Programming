#include <stdio.h>
#include <ctype.h>

int main()
{

     int number, count = 0;
     printf("Enter any number: ");
     scanf("%d", &number);

     if(number <= 1){
          count=1;
     }

     for (int i = 2; i < number/2; i++)
     {

          if (number % i == 0)
          {
               count=1;
               break;
          }
     }
     if (count == 0)
     {
          printf("%d is prime number.\n", number);
     }
     else
     {
          printf("%d is not prime number.\n", number);
     }

     return 0;
}