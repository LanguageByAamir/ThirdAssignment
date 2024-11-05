#include <stdio.h>

int main() {
    float balance, withdrawal_amount;
    char special_permit;

    // Get the current account balance from the user
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Get the withdrawal amount from the user
    printf("Enter the amount you wish to withdraw: ");
    scanf("%f", &withdrawal_amount);

    // Check if the withdrawal amount is less than or equal to the balance
    if (balance >= withdrawal_amount) {
        // Check if the withdrawal amount is greater than 10,000
        if (withdrawal_amount > 10000) {
            // Ask if the customer has a special withdrawal permit
            printf("You are attempting to withdraw more than 10,000.\n");
            printf("Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &special_permit);  // Note the space before %c to consume any extra newline character
            
            // If the customer has a special permit, allow the withdrawal
            if (special_permit == 'Y' || special_permit == 'y') {
                printf("Withdrawal successful! Your remaining balance is: %.2f\n", balance - withdrawal_amount);
            } else {
                printf("Withdrawal denied! You need a special permit to withdraw more than 10,000.\n");
            }
        } else {
            // If the withdrawal is not greater than 10,000, allow the withdrawal
            printf("Withdrawal successful! Your remaining balance is: %.2f\n", balance - withdrawal_amount);
        }
    } else {
        printf("Insufficient balance! You cannot withdraw more than your account balance.\n");
    }

    return 0;
}

