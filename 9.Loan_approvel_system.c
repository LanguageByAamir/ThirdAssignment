#include<stdio.h>
#include<conio.h>

void main()
{
	int loan;
	char existing;
	printf("Enter your Loan :");
	scanf("%d",&loan);
	
	if(loan >= 30000){
		
		printf("You have an existing Loan :");
			scanf("%s",&existing);
	
		
	    if(existing == 'y'){
			printf("You should not have any overdue payment");
		
		}
		else{
			printf("You qualify this ");
		}
		}
	else if(loan <30000){
		printf("You are ineligible ");
	}
	
	getch();
}


