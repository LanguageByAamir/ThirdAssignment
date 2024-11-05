#include <stdio.h>

int main() {
    float income, tax;

    // Get the income from the user
    printf("Enter your income: ");
    scanf("%f", &income);

    // Calculate tax based on the income range
    if (income <= 250000) {
        tax = 0;  // No tax for income up to 250,000
    } else if (income <= 500000) {
        tax = (income - 250000) * 0.05;  // 5% tax for income between 250,001 and 500,000
    } else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.10;  // 5% tax for first 250,000, 10% tax for next portion
    } else {
        tax = (250000 * 0.05) + (500000 * 0.10) + (income - 1000000) * 0.15;  // 5% for first 250,000, 10% for next 500,000, 15% for income above 1,000,000
    }

    // Display the calculated tax
    printf("Your income tax is: %.2f\n", tax);

    return 0;
}

