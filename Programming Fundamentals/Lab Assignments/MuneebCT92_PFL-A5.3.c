#include <stdio.h>
int main(void)
{
	float fsc, nts;
	printf("Enter your FSC marks (percentage): ");
	scanf("%f", &fsc);
	printf("Enter your NTS marks (percentage): ");
	scanf("%f", &nts);
	
	if (fsc >= 70 && nts >= 70)
	{
		printf("Your are eligible for IT at Oxford.");
	}
	else if (fsc >= 70 && nts >= 60 && nts < 70)
	{
		printf("Your are eligible for Electronics Engineering at Oxford.");
	}
	else if (fsc >= 70 && nts >= 50 && nts < 60)
	{
		printf("Your are eligible for Telecommunications Engineering at Oxford.");
	}
	else if (fsc >=  60 && fsc < 70 && nts >= 50 && nts < 60)
	{
		printf("Your are eligible for IT at MIT.");
	}
	else if (fsc >= 50 && fsc < 60 && nts >= 50 && nts < 60)
	{
		printf("Your are eligible for Chemical Engineering at MIT.");
	}
	else if (fsc >= 40 && fsc < 50 && nts >= 50 && nts < 60)
	{
		printf("Your are eligible for Computer Science at MIT.");
	}
	else
	{
		printf("Better luck next time!");
	}
	return 0;
}