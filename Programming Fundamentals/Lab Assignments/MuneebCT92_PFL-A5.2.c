#include <stdio.h>
int main(void)
{
	char coffee, size;
	printf("What type of coffee do you want? Press 'W' for white or 'B' for black: ");
	scanf(" %c", &coffee);
	printf("\nDo you want it double or single? Press 'D' for double and 'S' for single: ");
	scanf(" %c", &size);
	
	switch (coffee)
	{
		case 'W':
		case 'w':
			switch (size)
			{
		    	case 'S':
		    	case 's':
		     	    printf("Your coffee will be ready in 76 minutes. Thank you for waiting!");
		    	    break;
		     	case 'D':
		    	case 'd':
			    	printf("Your coffee will be ready in 114 minutes. Thank you for waiting!");
			    	break;
	    	}
		break;
		case 'B':
		case 'b':
			switch (size)
			{
		    	case 'S':
		     	case 's':
		     	    printf("Your coffee will be ready in 105 minutes. Thank you for waiting!");
		    	    break;
		    	case 'D':
		     	case 'd':
			    	printf("Your coffee will be ready in 158 minutes. Thank you for waiting!");
		    	break;
		    }
        break;
        default:
        	printf("Invalid Selection!");
	}
}