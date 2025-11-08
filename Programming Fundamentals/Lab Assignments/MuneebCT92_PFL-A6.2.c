#include <stdio.h>
int main (void)
{
	int rng, m = 1, p = 0, n = 0, sum = 0;
	printf("Enter Range: ");
	scanf("%d", &rng);
	
	if (rng > 1000 || rng < 0)
	{
		printf("Range too big!");
	}
	else
	{
		printf("Fibonacci numbers upto %d are:\n", rng);
	    while (n <= rng)
	    {
	    	printf("%d\n", n);
	    	p = m;
	    	m = n;
	    	n = m + p;
	    	
	    	if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	    	{
	    		sum += n;
			}
		}
		printf("The sum of Fibonacci numbers divisible by 3, 5 or 7 in the given range is: %d", sum);
	}
}

// In this question, I think, the use a while loop is better because the range is still user-input dependent, thus variable.