#include <stdio.h>

int main() {
    float monthly_income;
    char has_existing_loan;
    char overdue_payments;

    // Get the monthly income of the person
    printf("Enter your monthly income: ");
    scanf("%f", &monthly_income);

    // Check if the monthly income is more than 30,000
    if (monthly_income > 30000) {
        // If income is more than 30,000, check if the person has an existing loan
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &has_existing_loan);  // The space before %c is to consume any leftover newline character

        if (has_existing_loan == 'Y' || has_existing_loan == 'y') {
            // If they have an existing loan, check for overdue payments
            printf("Do you have any overdue payments? (Y/N): ");
            scanf(" %c", &overdue_payments);

            if (overdue_payments == 'Y' || overdue_payments == 'y') {
                // If there are overdue payments, they are ineligible for the loan
                printf("Loan denied due to overdue payments on the existing loan.\n");
            } else {
                // If no overdue payments, they are eligible for the loan
                printf("You are eligible for the loan.\n");
            }
        } else {
            // If no existing loan, they are eligible for the loan
            printf("You are eligible for the loan.\n");
        }
    } else {
        // If monthly income is less than or equal to 30,000, they are ineligible
        printf("You are ineligible for the loan due to insufficient monthly income.\n");
    }

    return 0;
}

