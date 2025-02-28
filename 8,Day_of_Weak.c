#include<stdio.h>
#include<conio.h>

void main()
{
	int number ;
	printf("Enter the Number 1 to 7 for Days of Weaks :");
	scanf("%d",&number);
	if(number >= 1 && number <=7 ){
		switch(number){
		  case 1:
				printf("Monday");
				break;
		 case 2:
				printf("Tuesday");
				
				break;
		case 3:
				printf("Wednesday");
				break;
		case 4:
				printf("Thersday");
				break;
		case 5:
				printf("Friday");
				break;
		case 6:
				printf("Seturday");
				break;
		case 7:
				printf("Sunday");
				break;
		}
	}
		else{
			printf("Invalid Number!!!!!");
			
		}
		
	getch();
}
