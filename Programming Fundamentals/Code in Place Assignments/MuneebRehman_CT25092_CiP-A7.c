#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char username[5][50] = {"ghufran@gmail.com", "aina@gmail.com", "saif@gmail.com"}, password[5][50] = {"Hello12345", "0nepieceisreal", "xyz987654321"}, tempuser[50], temppassword[50];
    int choice, usercount = 3;

    while (1)
    {
        printf("\n======Welcome!======\n1. Sign in\n2. Sign up\n(0 to exit)\nChoice: ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Program terminated.\n");
            break;
        }

        else if (choice == 1)
        {
            printf("Enter username: ");
            scanf("%s", tempuser);
            printf("Enter password: ");
            scanf("%s", temppassword);

            int found = 0;
            for (int i = 0; i < usercount; i++)
            {
                if (strcmp(tempuser, username[i]) == 0 && strcmp(temppassword, password[i]) == 0)
                {
                    found = 1;
                    break;
                }
            }

            if (found)
                printf("Login successful!\n");
            else
                printf("Invalid username or password!\n");
        }

        else if (choice == 2)
        {
            if (usercount >= 5)
            {
                printf("User limit reached.\n");
                continue;
            }

            printf("Enter new username (email): ");
            scanf("%s", tempuser);

            int emailexists = 0;
            for (int i = 0; i < usercount; i++)
            {
                if (strcmp(username[i], tempuser) == 0)
                {
                    emailexists = 1;
                    break;
                }
            }

            if (emailexists)
            {
                printf("Email already exists!\n");
                continue;
            }

            printf("Enter new password: ");
            scanf("%s", temppassword);

            int letters = 0, digits = 0, length = strlen(temppassword);
            if (length < 8)
            {
                printf("Password must be at least 8 characters long!\n");
            }

            for (int i = 0; i < length; i++)
            {
                if (isalpha(temppassword[i])) 
                {
                	letters = 1;
				}
                if (isdigit(temppassword[i]))
                {
                	digits = 1;
				}
            }

            if (letters && digits)
            {
                strcpy(username[usercount], tempuser);
                strcpy(password[usercount], temppassword);
                usercount++;
                printf("Account created successfully!\n");
            }
            else
            {
                printf("Password must contain at least one letter and one number!\n");
            }
        }

        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}