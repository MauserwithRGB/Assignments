#include <stdio.h>
#include <string.h>
int main(void)
{
	char first[104], last[52];
	printf("Enter your first name (50 characters): ");
	fgets(first, 52, stdin);
	first[strcspn(first, "\n")] = '\0';
	
	printf("Enter your last name (50 characters): ");
	fgets(last, 52, stdin);
	last[strcspn(last, "\n")] = '\0';
	
	strcat(first, " ");
	strcat(first, last);
	
	int size = strlen(first);
	for(int i=size; i>=0; i--)
	{
		printf("%c", first[i]);
	}
}