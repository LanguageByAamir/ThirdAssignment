#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	char illness;
	printf("Enter your Age :");
	scanf("%d",&age);
     if(age >= 18  && age <=45){
	printf("You are Eligible for Health ensurance");
   }
    else if(age > 45){
	printf("You have any serious illness Y/N:");
	scanf("%s",&illness);
	if(illness == 'Y'|| illness == 'y'){
		printf("You are not eligible for health ensurance");
	}
	else{
		printf("You are eligible");
	}
	
    }
    else{
	printf("You are not eligible for health ensurance");
	
    }


	getch();
}
