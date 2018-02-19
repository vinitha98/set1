#include<stdio.h>
int main()
{
int n,count=0;
scanf("%d",&n);
while(n!=0)
{
n=n/10;
count++;
}
printf("No of digits in an integer is %d",count);
}
