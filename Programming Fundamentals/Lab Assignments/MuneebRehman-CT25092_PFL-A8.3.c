#include <stdio.h>
#include <string.h>
int main(void)
{
	char string1[52], string2[52];
	
	printf("Enter the first string: ");
	fgets(string1, 52, stdin);
	string1[strcspn(string1, "\n")] = '\0';
	
	printf("Enter the second string: ");
	fgets(string2, 52, stdin);
	string2[strcspn(string2, "\n")] = '\0';
	
	int cmp = strcmp(string1, string2);
	
	if (cmp==0)
	{
		printf("Both strings are equal.");
	}
	else if (cmp>0)
	{
		printf("The first string is greater than the second.");
	}
	else
	{
		printf("The second string is greater than the first.");
	}
}