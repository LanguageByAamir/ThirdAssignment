#include <stdio.h>
#include<conio.h>
   int main() 
{
    float subject1, subject2, subject3, average;
    printf("Enter marks for subject 1: ");
    scanf("%f", &subject1);   
    printf("Enter marks for subject 2: ");
    scanf("%f", &subject2);
    printf("Enter marks for subject 3: ");
    scanf("%f", &subject3);
    average = (subject1 + subject2 + subject3) / 3;
    printf("Average Marks: %.2f\n", average);
    if (average >= 90) {
        printf("Grade: A\n");
    } 
	else if (average >= 80) {
        printf("Grade: B\n");
    }
	 else if (average >= 70) 
	 {
        printf("Grade: C\n");
	} 
	else if (average >= 60) 
	{
        printf("Grade: D\n");
    }
	 else {
        printf("Grade: F\n");
    }

    return 0;
    getch();
}

