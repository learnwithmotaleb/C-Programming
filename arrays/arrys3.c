#include <stdio.h>

int main(){

     //type of arrays

     //1 D array or One Dimensional(1D) arrays or Linear arrrys
     //example
     // int marks[0] //is one dimensional arrays


     //2 Dimensional arrays
     //Multi Dimensional Arrays(2D Arrays) or Matrix arrays
     //example
     //int marks[2][3]


     //Three Dimensional Arrays(3D Arrays) 
     //Example
     // int marks [2][3][4]


// int myNumbers[] = {10, 25, 50, 75, 100};
// printf("%lu\n", sizeof(myNumbers)/sizeof(myNumbers[0])); // Prints 20

int myNumbers[] = {10, 25, 50, 75, 100};

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
for (int i = 0; i <length; i++)
{
     printf("%d ", myNumbers[i]);
}
printf("\n");













     return 0;
}