#include<stdio.h>
#include<conio.h>

 void main ()
 {
 	int stored_pin,pin;
 	
 	printf("Well come to Jamali ATM\n\n");
 	
 	printf("Enter your 4 digit pin for account creation\n ");
 	scanf("%d",&stored_pin);
 	
 	printf("Account creat successfully\n ");
 	
 	printf("Enter your 4 digit pin ");
 	scanf("%d",&pin);
 	
 	
 	if (stored_pin==pin){
 		
 		printf("Balance Inquire\n");
 		printf("Cash With Draw\n");
 		printf("Write Amount\n");
 		printf("Cash Deposite\n");
 		printf("fund transfer\n");
 		printf("Thank you for using this ATM\n");
 			
	 }
	 
	 else {
	 
	 printf("Invalid pin\n");
	 printf("THANK YOU FOR USING THIS ATM\n");
}
     getch;
     

}
