#include <stdio.h>

int main()
{
    int n, number, rev=0;
    printf("Enter any number: ");
    scanf("%d", &n);
    number= n; 
    while(n != 0)
    {
        rev = (rev * 10) + (n % 10);
        n  /= 10;
    }

    if(rev == number)
    {
        printf("%d is palindrome.", number);
    }
    else
    {
        printf("%d is not palindrome.", number);
    }

    return 0;
}
