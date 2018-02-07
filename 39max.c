#include <stdio.h>
int main() 
{
	int a[]={2,6,4,9,8,3,1,5,7,0};
	int maximum,i;
	maximum=a[0];
	for(i=1;i<=10;i++)
	{
		if(a[i]>maximum)
		{
			maximum=a[i];
		}
	}
		printf("the maximum element is %d",maximum);
	return 0;
}
