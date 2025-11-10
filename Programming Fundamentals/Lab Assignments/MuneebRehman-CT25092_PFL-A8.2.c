#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
	char name[150], course[100], ch, b;
	printf("Enter your name: ");
	fgets(name, 50, stdin);
	name[strcspn(name, "\n")] = '\0';
	
	printf("Enter course name: ");
	fgets(course, 100, stdin);
	course[strcspn(course, "\n")] = '\0';
	
	strcat(name, course);
	
	int size = strlen(name), count = 0, a = 0;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		count = 0;
		for (int i=0; i<size; i++)
		{
			if (isalpha(name[i]))
			{
				name[i] = tolower(name[i]);
				if (ch == name[i])
				{
					count++;
					if (count > a)
					{
						a = count;
						b = ch;
					}
				}
			}
		}
	}
	printf("The letter '%c' has the maximum occurence of %d in the given strings.", b, a);
}
