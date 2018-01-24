#include<stdio.h>
int main()
{
int first,diff,terms,value,sum=0,i;
printf("Enter the number of terms in AP series");
scanf("%d",&terms);
printf("Enter 1 st term and common difference of AP series");
scanf("%d%d",&first,&diff);
value=first;
printf("AP series);
for(i=0;i<terms;i++)
{
printf("%d",value);
sum+=value;
value=value+diff;
}
printf("sum of AP series till %d terms is %d",terms,sum);
return 0;
}
