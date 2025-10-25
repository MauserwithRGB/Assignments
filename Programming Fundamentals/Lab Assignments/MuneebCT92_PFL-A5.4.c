#include <stdio.h>
int main(void)
{
	char choice;
	int qnty, price;
	printf("\t\t\t\t\tWELCOME To XYZ Restaurant's digital menu!\n\n");
	
	printf("Choose from the following options: \nB: Burger (Rs. 200/)\t\tF: French Fries (Rs. 50/) \nP: Pizza (Rs. 500/) \t\tS: Sandwich (Rs. 150/)\n");
	scanf("%c", &choice);
	printf("\nHow many do you want? Enter quantity: ");
	scanf("%d", &qnty);
	
	switch (choice)
	{
		case 'B':
		case 'b':
			price = qnty * 200;
			printf("Your total bill is Rs. %d.", price);
		break;
		case 'F':
		case 'f':
			price = qnty * 50;
			printf("Your total bill is Rs. %d.", price);
		break;
		case 'P':
		case 'p':
			price = qnty * 500;
			printf("Your total bill is Rs. %d.", price);
		break;
		case 'S':
		case 's':
			price = qnty * 150;
			printf("Your total bill is Rs. %d.", price);
		break;
		default:
			printf("Invalid Selection!");
	}
}