#include <stdio.h>

int main()
{
	int n,i,a[50],sum=0,avg;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/n;
	printf("%d",avg);
				
	return 0;
}
