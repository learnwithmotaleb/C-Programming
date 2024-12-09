#include <stdio.h>
int main(){


     float c,F;
     printf("Enter Centigrade : ");
     scanf("%f", &c);

     F = (c*1.8)+32;
      
     printf("The Fahrenheit Of %.2f ",F);

     return 0;


}