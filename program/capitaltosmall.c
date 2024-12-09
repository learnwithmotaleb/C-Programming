#include <stdio.h>

int main(){


     char ch;
     printf("Enter any letter");
     scanf("%c", &ch);

     if(ch >= 'a' && ch <= 'z'){
          printf("The smal letter of %c",ch);

     }else if(ch >= 'A' && ch <= "Z"){
          printf("The capital letter of %c",ch);
     }else{
           printf("not letter %c",ch);

     }






     return 0;
}
