#include <stdio.h>
int main()
{
     int i, fact = 1, n;

     printf("Enter any Positive number: ");
     scanf("%d", &n);

     for (i = 1; i <= n; i++)
     {
          fact = fact * i;
     }
     printf("Factorial number of %d = %d\n",n, fact);

     return 0;
}