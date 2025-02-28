#include<stdio.h>
#include<conio.h>

void main()

{
	int amount;
	printf("Enter your Perchase amount :");
	scanf("%d",&amount);
	char user;
	

	if(amount > 2000){
		printf("You member of this shop then press M/m otherwise N/n :");
	    scanf("%s",&user);
		if(user == 'M'|| user == 'm'){
			printf("You have 20 perc discount then amount is : %d",amount*20/100);
		}

		else if(user == 'N'|| user == 'n'){
			printf("You have 10 perc discount the amount is : %d",amount*10/100);
		}
			}
	
		else if(amount <= 2000){
		printf("No discount on your this amount :");
		
	
	}
	       
	 getch();      
	
}
