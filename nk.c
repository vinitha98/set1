#include<stdio.h>
int main()
{
inta[100],k,i,j,n,s=1;
printf("\n enter the no ofelement in array");
scanf("%d",&n);
printf("\n enter the values");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n enter the no of element to be added");
scanf("%d",&k);
for(j=0;j<k;j++)
{
s=s+a[j];
}
printf("\n the sum value is %d",s);
return 0;
}
