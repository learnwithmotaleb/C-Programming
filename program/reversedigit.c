#include <stdio.h>
#include <ctype.h>

int main(){

     int number, sum = 0, remainder, temp;

     printf("Enter any number: ");
     scanf("%d",&number);
     temp = number;

     while (temp != 0)
     {
          remainder = temp % 10;
          sum = sum * 10 + remainder;
          temp = temp/10;
     }

     printf("Reverse Number: %d\n",sum);
     





     return 0;
}