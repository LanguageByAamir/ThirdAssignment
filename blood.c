#include <stdio.h>

int main() {
    int age;
    float weight;

    // Get input from the user
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your weight (in kg): ");
    scanf("%f", &weight);
    
    // Check if the person meets the age criteria
    if (age >= 18 && age <= 65) {
        // Check if the person meets the weight criteria
        if (weight >= 50) {
            printf("You are eligible to donate blood.\n");
        } else {
            printf("You are not eligible to donate blood because your weight is below 50 kg.\n");
        }
    } else {
        printf("You are not eligible to donate blood because your age is not between 18 and 65.\n");
    }

    return 0;
}

