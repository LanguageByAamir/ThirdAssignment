#include<stdio.h>
#include<conio.h>

int main() {
    char username[50];
    char password[50];
    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0)
	 {
     if (strcmp(password, "1234") == 0) 
   {
    printf("Login Successful\n");
        }
	 else {
     printf("Login Failed\n");
    }
    
    }
	 else {
        printf("Login Failed\n");
    }

    return 0;
    getch();
}

