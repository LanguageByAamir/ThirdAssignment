#include<stdio.h>
#include<conio.h>

void main()
{
	int total_amount , withdrawal;
	char permit;
	printf("Enter your Acount balance :");
	scanf("%d",&total_amount);
	
	printf("Enter your withdrawal amount :");
	scanf("%d",&withdrawal);
	
	if(total_amount >= withdrawal){
		if(withdrawal >=10000){
			printf("You have special withdrawal permit Y/N :");
			scanf("%d",&permit);
			if(permit = 'N'){
				printf("Withdrawal succesfully!!");
			}
			
		}
	}
	else{
		printf("Your Acount balance is low !");
	}
	
	getch();
	
	
}
