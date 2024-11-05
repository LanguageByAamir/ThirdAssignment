#include <stdio.h>

int main() {
    int age;
    char serious_illness;

    // Get the age of the person
    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the person is above 18 years
    if (age > 18) {
        // Check if the person is above 45 years
        if (age > 45) {
            // Ask if the person has had any serious illness
            printf("Have you had any serious illness? (Y/N): ");
            scanf(" %c", &serious_illness);  // The space before %c is to consume any leftover newline character
            
            // If the person has had a serious illness, they are not eligible
            if (serious_illness == 'Y' || serious_illness == 'y') {
                printf("You are not eligible for health insurance due to a serious illness.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
            // If the person is not above 45 years, they are eligible for health insurance
            printf("You are eligible for health insurance.\n");
        }
    } else {
        // If the person is 18 years or younger, they are not eligible
        printf("You are not eligible for health insurance because you are below 18 years of age.\n");
    }

    return 0;
}

