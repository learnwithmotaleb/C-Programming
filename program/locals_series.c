#include <stdio.h>

void genarateLucas(int number){
     int first = 2, second = 1;
     printf("Lucas Series up to %d terms: \n", number);
     printf("%d %d ", first, second);

     for (int i = 3; i <= number; i++)
     {
          int next = first + second;
          printf("%d ", next);
          first = second;
          second = next;
     }

     printf("\n");
}

int main()
{

   

     int numTerms;
     printf("Enter the number of terms in lucas series: ");
     scanf("%d", &numTerms);

     genarateLucas(numTerms);

     

     return 0;
}