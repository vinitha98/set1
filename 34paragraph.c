#include<stdio.h>
int main()
{
	int i,count=0;
	char a[100];
	scanf("%[^\n]",a);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='.')
		{
			count++;
		}
	}
	printf("%d",count+1);
	return 0;
}
