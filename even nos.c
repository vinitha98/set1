#include<stdio.h>
int main()
{
int f,l,i;
printf("Enter the values");
scanf("%d%d",&f,&l);
for(i=f;i<l;i++)
{
if(i%2==0)
{
printf("%d",i);
}
}
return 0;
}
