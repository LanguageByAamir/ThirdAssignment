#include<stdio.h>
#include<conio.h>
void main()
{
	
	int units;
	
	printf("Enter units :");
	scanf("%d",&units);
	
	if(units<=100){
		printf("No charge !");
	}
	else if(units >= 101 && units <=200){
//	     units *5;
			printf("5 rupees per unit and Total amount is %d ",units*5);
		}
		else if(units >= 201 && units < 300){
//			units *8;
			printf("8 rupees per unit and Total amount is %d ",units *8);
		}
		else if(units >= 300){
//			units*10;
			printf("10 rupees per unint and Total amount is %d",units *10);
		}
	
	getch();	
}
