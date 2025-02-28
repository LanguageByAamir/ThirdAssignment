#include<stdio.h>
#include<conio.h>

void main ()
{
	 float math,science,Average;
	 
	 printf("Enter Percentage for math:\n") ;
	 scanf("%f",&math);
	 printf("Enter Percentage for science:\n");
	 scanf("%f",&science);
	 
	 Average = math+science ;
	 	 printf("Total percentage  is %f\n",math+science);
	 	 
	 
	 if(Average >= 50)
	 {
	 	printf("you are pass and eligible for admission\n");
	     if (Average>=80)
	     {printf("You are eligilble for Scholorship\n");	
		 }
		 else
		 {
		 printf("You Are Not Eligible for Scholorship\n");
		 }
	}
	else
	 	printf("You are fail\n");
     
	 getch();
	 
}
 
