#include<stdio.h>
#include<conio.h>


     void main()
	 {
     	printf("\t\t=========GRADE CALCULATOR==========\n\n");
     	
     	  int english , physics , chemistry, math, biology;
     	  printf("Marks of English :");
     	  scanf("%d",&english);
     	  
     	  printf("Marks of Physics :");
     	  scanf("%d",&physics);
     	  
     	  printf("Marks of Chemistry :");
     	  scanf("%d",&chemistry);
     	  
     	  printf("Marks of Math :");
     	  scanf("%d",&math);
     	  
     	  printf("Marks of Biology:");
     	  scanf("%d",&biology);
     	  
     	
//     	  int obtained_marks;
     	  float obtained_marks = english + physics+ chemistry+ math +biology;
     	  
     	  float percentage = (obtained_marks/500 )*100.00;
     	
     	  printf("Otained Marks is %f\n",obtained_marks);
     	  printf("percentage is %f\n",percentage);
     	  if(percentage >=80){
     	  	printf("Grade : A1");
		   }
		   else if(percentage>=70){
		   	printf("Grade : A");
		   }
		   else if(percentage>=60){
		   	printf("Grade : B");
		   }
		   else if(percentage>=50){
		   	printf("Grade : C");
		   }
		   else if(percentage>=44){
		   	printf("Grade : D");
		   }
		   else if(percentage<=44){
		   	printf("FAIL");
		   }
		  
		  getch();
	 }
