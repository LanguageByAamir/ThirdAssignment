#include <stdio.h>

void main() {
    // Declare variables to store marks
    float mathScore, scienceScore;
    
    // Get input from the user
    printf("Enter the Math score (out of 100): ");
    scanf("%f", &mathScore);
    
    printf("Enter the Science score (out of 100): ");
    scanf("%f", &scienceScore);
    
    // Check eligibility based on the marks
    if (mathScore >= 50 && scienceScore >= 50) {
        // Check if the student qualifies for a scholarship
        if (mathScore > 80 && scienceScore > 80) {
            printf("The student is eligible for admission and qualifies for a scholarship.\n");
        } else {
            printf("The student is eligible for admission but does not qualify for a scholarship.\n");
        }
    } else {
        printf("The student is not eligible for admission.\n");
    }
    
    }

