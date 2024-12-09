#include <stdio.h>
#include <ctype.h>

int main()
{

     // armstrong Number

     int number, reverseNumber = 0, remainder, temp;

     printf("Enter any number: ");
     scanf("%d", &number);
     temp = number;

     while (temp != 0)
     {
          remainder = temp % 10;
          reverseNumber = reverseNumber + remainder * remainder * remainder;
          temp = temp / 10;
     }

     if (number == reverseNumber)
     {
          printf("Armstrong Number: %d\n", number);
     }
     else
     {
          printf("Not Armstrong Number: %d\n", number);
     }
}