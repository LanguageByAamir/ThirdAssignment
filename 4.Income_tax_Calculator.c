#include<stdio.h>
#include<conio.h>

void main()
{
	int income;
	printf("Enter your Income :");
	scanf("%d",&income);
	int tax;
	if(income <=250000){
		printf("No tax in your Income .");
	}
	else if(income >=250001 && income <=500000){
		tax = income *0.05;
		printf("Tax in your Income is : %d",tax);
	}
	else if(income >=500001 && income <=1000000){
		tax = income *0.1;
		printf("Tax in your Income is : %d",tax);
	}
	else if(income >1000000){
		tax = income *0.15;
		printf("Tax in your Income is : %d ",tax);
	}
	
	getch();

}
