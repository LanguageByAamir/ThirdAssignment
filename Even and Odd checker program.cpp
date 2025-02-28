#include<stdio.h>
#include<conio.h>
int main() {
    int number;

    printf("Enter an number ");
    scanf("%d", &number);

    if (number % 2 == 0)
	 {
        printf("%d is even.\n", number);
    }
	
	 else
	 {
        printf("%d is odd.\n", number);
    }

    return 0;
    
  getch();  
}

