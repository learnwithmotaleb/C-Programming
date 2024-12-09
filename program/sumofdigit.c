#include <stdio.h>
#include <ctype.h>

int main()
{

     int number, sum = 0, temp;
     int remainder;
     printf("Enter any number; ");
     scanf("%d", &number);

     temp = number;

     while (temp != 0)
     {
          remainder = temp%10;
          sum = sum + remainder;
          temp = temp / 10;
     }

     printf("Sum of digit: %d\n", sum);

     return 0;
}