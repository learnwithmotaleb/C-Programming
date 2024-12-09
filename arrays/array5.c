#include <stdio.h>
int main(){

     int num[5];
     float sum = 0;

     printf("Enter 5 number: ");
     //scanf("%d %d %d %d %d", &num[0],&num[1],&num[2],&num[3], &num[4]);
     for(int i=0; i<5; i++){
          scanf("%d",&num[i]);
     }

     for (int i = 0; i < 5; i++)
     {
          sum = sum+num[i];
     }
     printf("The sum is : %d\n",sum);
     printf("The Avarage of %.2f \n",(float)sum/5);
     









     return 0;
}