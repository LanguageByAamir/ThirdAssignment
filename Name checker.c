#include<conio.h>
#include<stdio.h>
void main()
{
	int i, number;
	char name[25];
	printf("Enter your name:");
	scanf("%s",&name);
	
	
	for(i=0; name[i]!='\0';i++)
	{
		if(name[i]=='0'|| name[i]=='1'|| name[i]=='2'|| name[i]=='3'|| name[i]=='4'|| name[i]=='5'|| name[i]=='6'|| name[i]=='7'||name[i]=='8'||name[i]=='9')
	{
		
		printf("your name contain %c sign \n",name[i]);
		
		}	
	}
			
			printf("your name is fine");
		
getch();
		
	}
		
	
	
	

	
	
	

