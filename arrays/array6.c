#include <stdio.h>

int main()
{

     int num[] = {20, 22, 18, 35, 3, 26, 87, 70};
     int length = sizeof(num) / sizeof(num[0]);

     printf("%d\n", length);

     int lowNumer = num[0];

     for (int i = 0; i < length; i++)

     {
          if (lowNumer > num[i])
          {
               lowNumer = num[i];
          }
     }

     printf("Small number of %d\n", lowNumer);

     return 0;
}