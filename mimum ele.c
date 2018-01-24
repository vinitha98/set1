#include <stdio.h>
#define MAX SIZE 100
int main() {
	int arr[MAX SIZE];
	int i,min,size;
	printf("Enter size of the array");
	scanf("%d",&size);
	printf("Enter elements of arrary");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	min=arr[0];
	for(i=1;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		printf("minimum element =%d\n",min);
		return 0;
	}
	}
