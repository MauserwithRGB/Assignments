#include <stdio.h>
int main(void)
{
	int n, p;
	long long fact = 1;
	printf("Enter number: ");
	scanf("%d", &n);
	
	if (n < 0)
	{
		printf("Invalid input!");
	}
	
	else
	{
	    for (p = 1; p <= n; p++)
	    {
	        fact = fact * p;
	    }
	    printf("Factorial of %d is %lld", n, fact);
    }
}