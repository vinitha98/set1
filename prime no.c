#include<stdio.h>
int main()
 {
    int number,i,count=0;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=2;i<=number/2;i++){
        if(number%i==0){
         count++;
            break;
        }
    }
   if(count==0 && number!= 1)
        printf("%d is a prime number",number);
   else
      printf("%d is not a prime number",number);
   return 0;
   }
