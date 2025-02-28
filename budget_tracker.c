#include<stdio.h>
#include<conio.h>
void main(){
	int daily_amount,Total_budget;
	int i;
	for(i=1;i<=7;i++)
	{
		printf("enter amount on %d day ",i);
		scanf("%d",&daily_amount);
		Total_budget += daily_amount;
			printf("Total amount is %d\n",Total_budget);
	}
        
	printf("Total amount is %d\n",Total_budget);
    printf("The average of this week is %d",Total_budget/7);
    
	getch();
	
}
