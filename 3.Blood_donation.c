#include<stdio.h>
#include<conio.h>

void main()
{
	int age, weight;
	
	printf("Enter the Age :");
	scanf("%d",&age);
	
	printf("Enter the Weight :");
	scanf("%d",&weight);
	
	if(age >= 18 &&  age <=65){
		if(weight >=50){
			printf("Eligible for blood donation .");
		}
	}
	else {
		printf("Not Eligible for blood donation .");
	}
	
	
	getch();
}
