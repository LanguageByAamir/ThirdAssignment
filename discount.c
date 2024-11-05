#include <stdio.h>

int main() {
    float purchase_amount, final_amount;
    char membership_status;

    // Get the purchase amount from the user
    printf("Enter the purchase amount: ");
    scanf("%f", &purchase_amount);

    // Check if the purchase amount is greater than 2000
    if (purchase_amount > 2000) {
        // Get the membership status
        printf("Are you a member? (Y/N): ");
        scanf(" %c", &membership_status);  // The space before %c is to consume any leftover newline character
        
        // Apply discount based on membership status
        if (membership_status == 'Y' || membership_status == 'y') {
            // 20% discount for members
            final_amount = purchase_amount - (purchase_amount * 0.20);
            printf("You are a member. Your final amount after a 20%% discount is: %.2f\n", final_amount);
        } else {
            // 10% discount for non-members
            final_amount = purchase_amount - (purchase_amount * 0.10);
            printf("You are not a member. Your final amount after a 10%% discount is: %.2f\n", final_amount);
        }
    } else {
        // No discount for purchase amount less than or equal to 2000
        final_amount = purchase_amount;
        printf("No discount applied. Your final amount is: %.2f\n", final_amount);
    }

    return 0;
}

