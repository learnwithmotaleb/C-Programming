#include <stdio.h>
int main(){

     int num1,num2, large;

     printf("Enter to numbers: ");
     scanf("%d %d", &num1, &num2);

    large =  num1>num2 ? num1 : num2;
    printf("Largest number of : %d \n",large);





     return 0;
}