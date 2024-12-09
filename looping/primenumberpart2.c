#include <stdio.h>
#include <math.h>
int main()
{
     int number, count = 0, totalPrimeNumber = 0;

     for (number = 1; number <= 100; number++)
     {
          count = 0;
          if (number <= 1)
          {
               count = 1;
          }

          for (int i = 2; i < number; i++)
          { 

               if (number % i == 0)
               {
                    count = 1;
                    break;
               }
          }
          if (count == 0)
          {
               printf("%d is prime number.\n", number);
               totalPrimeNumber++;
          }
          else
          {
               // printf("%d is not prime number.\n", number);
          }
     }
     printf("\nTotal PrimeNumber Of : %d\n",totalPrimeNumber);

     return 0;
}