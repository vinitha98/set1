include<stdio.h>
int main(){
int no,s=0,temp;
printf("Enter a no: ");
scanf("%d",&no);
temp=no;
while(no!=0)
{      
r=no%10;
no=no/10;
s=s+(r*r*r);
 }
 if(s==temp)
 printf("%d is the Armstrong number",temp);
 else
 printf("%d is not the Armstrong number",temp);
 return 0;
}
