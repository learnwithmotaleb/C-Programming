#include <stdio.h>
#include <ctype.h>

int main(){

     //Palindrom Number 

       int number, reverseNumber = 0, remainder, temp;

     printf("Enter any number: ");
     scanf("%d",&number);
     temp = number;

     while (temp != 0)
     {
          remainder = temp % 10;
          reverseNumber = reverseNumber * 10 + remainder;
          temp = temp/10;
     }

     if(number == reverseNumber){
     printf("Palindrom Number: %d\n",number);

     }else{
              printf("Not Palindrom Number: %d\n",number);
 
     }

}