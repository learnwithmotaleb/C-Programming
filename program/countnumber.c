#include <stdio.h>

int main(){

     int n;
     int count = 0;


     printf("Enter a number: ");
     scanf("%d",&n);

     while (n !=0)
     {
          n = n/10;
          ++count;
     }

     printf("Total number of Count: %d\n", count);
     
     








     return 0;
}