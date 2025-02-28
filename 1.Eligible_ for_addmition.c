#include<stdio.h>
#include<conio.h>
void main()
{
	
	int math, science;
	int total_perc;
	printf("Enter percentage of math and science\n:");
	scanf("%d%d",&math, &science);
    total_perc = math+science;
    if(total_perc>=50){
    	printf("Eligible for addmition .");
    	if(total_perc>=80){
    		printf("Eligible for scholorship .");
		}
		
		}
		else{
			printf("Not eligible for addmition");
		}
	
	getch();
}
