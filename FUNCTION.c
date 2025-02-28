#include<stdio.h>
#include<conio.h>
  
  void even_odd_checker();
  void main(){
  
  int num;
  printf("Enter a num");
  scanf("%d",&num);
  even_odd_checker();  
  
  getch();
  
}
void even_odd_checker(num){
	if(num%2 !=0){
		printf("the number is odd");
		
	}else{
		printf("the number is even");
		
	}
}
