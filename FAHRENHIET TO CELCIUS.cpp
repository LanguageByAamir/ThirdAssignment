#include<stdio.h>
#include<conio.h>
  int main()
  {  float fahrenheit, calsius;
  printf("Temp in Fahrenheit:");
  scanf("%f", &fahrenheit );
  calsius = (fahrenheit - 32) * 5 / 9;
  printf("Temp in Calsius is %f", calsius);
  getch();
  }
