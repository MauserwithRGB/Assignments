#include <stdio.h>
int main(void)
{
	int n, i, j, s, m = 1;
	printf("Enter rows you want: ");
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (s = n - i; s >= 0; s--)
	    {
		    printf(" ");
	   	}

		for (j = 1; j <= 2 * i - 1; j++)
		{                   
	        printf("%d", j);
    	}           
		printf("\n");
	}        
}
 