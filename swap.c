#include<stdio.h>
int main()
{
int c,d;
scanf("%d %d",&c,&d);
{
c=c^d;
d=c^d;
c=c^d;
}
printf("%d %d",c,d);
return 0;
}
