#include <stdio.h>
int main()
{ 

     for (int i = 1; i < 20; i++)
     {
          if (i % 3 == 0)
               continue;
          printf("%d\n", i);

          if (i == 10)
               break;
     }

     return 0;
}