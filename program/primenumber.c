#include <stdio.h>

int main()
{

     int count = 0;
     int num;
     int i;
     printf("Enter any number for check prime: ");
     scanf("%d", &num);

     for (i = 2; i < num; i++)
     {
          if (num % i == 0)
          {
               count++;
               break;
          }
     }
     if (count == 0)
     {
          printf("%d is prime number\n", num);
     }
     else
     {
          printf("%d is Not prime number\n", num);
     }

     return 0;
}