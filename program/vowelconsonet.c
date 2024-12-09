#include <stdio.h>
#include <ctype.h>

int main()
{

     char ch;
     printf("Enter any letter; ");
     scanf("%c", &ch);

     char letter = tolower(ch);
     

     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
     {

          printf("The vowel: of %c ", ch);
     }
     else
     {
          printf("The Consonent: of %c ", ch);
     }

     return 0;
}