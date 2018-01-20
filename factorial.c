#include <stdio.h>
void main()
{
    int i, fact = 1, no; 
    printf("Enter the n0:\n");
    scanf("%d", &no);
    if (no<= 0)
    fact = 1;
    else
    {
    for (i = 1; i <= no; i++)
    {
    fact = fact * i;
    }
    }
    printf("Factorial of %d = %5d\n", num, fact)
    }
