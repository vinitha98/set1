 #include <stdio.h>
int main()
{
	int N,i,t1=0,t2=1,nt;
	printf("Enter the number");
	scanf("%d",&N);
	for(i=1;i<=N;i++)
	{
		printf("%d",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
	}
	return 0;
}
