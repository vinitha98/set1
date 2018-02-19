#include <stdio.h>
#include<string.h>
int main()
{
	char a[10],b[15];
	scanf("%s%s",&a,&b);
	if(strlen(a)>=strlen(b))
	{
		printf("%s",a);
	}
	else
	{
		printf("%s",b);
	}
	return 0;
}
