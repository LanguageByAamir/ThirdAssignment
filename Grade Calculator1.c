#include <stdio.h>
#include<conio.h>
int main() {
    float mark1, mark2, mark3, average;
    
    printf("Enter marks for subject 1: ");
    scanf("%f", &mark1);
    
    printf("Enter marks for subject 2: ");
    scanf("%f", &mark2);

    printf("Enter marks for subject 3: ");
    scanf("%f", &mark3);
    average = (mark1 + mark2 + mark3) / 3;
    printf("Average Marks: %.2f\n", average);
    
    if (average >= 90) {
        printf("Grade: A\n");
    }
	 else if (average >= 80) {
        printf("Grade: B\n");
    }
	 else if (average >= 70) {
        printf("Grade: C\n");
    }
	 else if (average >= 60) {
        printf("Grade: D\n");
    }
	 else {
        printf("Grade: F\n");
    }

    return 0;
    getch();
}

