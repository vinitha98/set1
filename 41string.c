#include <stdio.h>
#include<string.h>
int main()
{
	int i,k;
	printf("Enter the values of k");
	scanf("%d",&k);
	char a[10]="laptop";
	for(i=1;i<=k;i++)
	{
		printf("\n%s",a);
	}
	return 0;
}
