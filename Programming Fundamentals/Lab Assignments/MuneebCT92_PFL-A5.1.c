#include <stdio.h>
int main(void)
{
	char menu;
	printf("Are you sure you want to delete this? Y/N\n");
	scanf("%c", &menu);
	
	switch (menu)
	{
		case 'Y':
			printf("File deleted successfully!");
			break;
		case 'y':
		    printf("File deleted successfully!");
		    break;
		case 'N':
		    printf("Deletion cancelled!");
		    break;
		case 'n':
		    printf("Deletion cancelled!");
		    break;
		default:
			printf("Invalid input!");
	}
	return 0;
}