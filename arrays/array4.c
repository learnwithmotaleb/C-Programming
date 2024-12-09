#include <stdio.h>
int main()
{

     int myNumbers[] = {29, 4, 45, 5, 6, 2, 55};
     float avg, sum = 0;
     int length = sizeof(myNumbers) / sizeof(myNumbers[0]);

     for (int i = 0; i < length; i++)
     {

          sum = sum + myNumbers[i];
     }
     printf("%f \n", sum);
     avg = sum / length;
     printf("The Avarage of %.2f \n", avg);

     return 0;
}