#include <stdio.h>
#include <ctype.h>
int main(){

     char lowercase, uppercase;
     printf("Enter Upper letter: ");
     scanf("%c",&uppercase);

     // uppercase = lowercase - 32;

     // printf("%c\n",uppercase);

     lowercase = tolower(uppercase);
     printf("%c", lowercase);






     return 0;
}