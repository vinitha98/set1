#include <stdio.h>
int main(void) 
{
	int n,i,c=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("yes it is prime number");
	}
	else
	{
		printf("no it is not a prime number");
	}
	return 0;
}
