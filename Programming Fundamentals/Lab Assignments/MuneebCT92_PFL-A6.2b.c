#include <stdio.h>
int main(void)
{
	int rng, p = 0, m = 1, n, sum = 0;
	printf("Enter range: ");
	scanf("%d", &rng);
	
	if (rng > 1000 || rng < 0)
	{
		printf("Range too big!");
	}
	else
	{
		printf("Fibonacci numbers upto %d are:\n", rng);
		for (n = 0; n <= rng;)
		{
			printf("%d\n", n);
			p = m;
			m = n;
			n = p + m;   // I updated the value of n here instead of inside the loop, because this way all the logic is in one place
			
			if (n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	    	{
	    		sum += n;
			}
		}
		printf("The sum of Fibonacci numbers divisible by 3, 5 or 7 in the given range is: %d", sum);
	}
}

// In this question, I think, the use a while loop is better because the range is still user-input dependent, thus variable.