#include<stdio.h>
int main(){

     char ch;
     printf("Enter any letter: ");
     scanf("%c",&ch);

     if(ch >= 'a'  && ch <='z'){

          printf("%c is small letter\n",ch);


     }
     else if(ch >= 'A'  && ch <='Z'){
          printf("%c is Capital letter\n",ch);

     }
     else{
          printf("Not A Letter\n");
     }





     return 0;
}