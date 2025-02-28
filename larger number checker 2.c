#include<stdio.h>
#include<conio.h>
  void main()
  {
  	int a,b,c,d;
  	
  	printf("Enter a number");
  	
  	if(a>b && a>c && a>d){
  		printf ("num A:%d ids greater",a);
	  }
	  if (b>c && b>d){
	  	printf("num B: greater",b);
	  }
	  if ( c>d){
	  	printf("num C: greater ",c);
	  }else {
	  	printf("num D:greater",d);
	  }
	  
  }
