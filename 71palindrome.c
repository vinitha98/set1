 #include<stdio.h>
#include<string.h>
int main() {
	char str,str1;
	scanf("%s",&str);
	str1=strrev(str);
	if(str1=str)
	{
		printf("yes it is palindrome");
	}
	else
	{
		printf("no it is not a palindrome");
	}
	return 0;
}
