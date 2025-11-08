#include <stdio.h>
int main(void)
{
	int in, co, a, b , c, d, e, n;
	int prime = 1;
	printf("Enter 5-digit number: ");
	scanf("%d", &in);
	
	co = in;
	
	a = in % 10; 
	in = in / 10;
	
	b = in % 10;
	in = in / 10;
	
	c = in % 10;
	in = in / 10;
	
	d = in % 10;
	in = in / 10;
	
	e = in % 10;
	in = in / 10;
	
	if (co % n == 0)
		{
				prime = 0;
		}
		if (prime == 1)
		{
			printf("\nNumber is Prime.");
		}
		else if (prime == 0)
		{
			printf("\nNumber is NOT Prime.");
		}
	
	if ((a + b + c + d + e) % 2 != 0)
	{
        if (a==e && b==d)
        {
		    printf("\nNumber is Palindrome.");
        }
    }
}