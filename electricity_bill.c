#include <stdio.h>

int main() {
    int units;
    float bill;

    // Get the number of units from the user
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill based on units consumed
    if (units <= 100) {
        bill = 0;  // No charge for units less than or equal to 100
    } else if (units <= 200) {
        bill = (units - 100) * 5;  // 5 rupees per unit for units between 101 and 200
    } else if (units <= 300) {
        bill = (100 * 5) + (units - 200) * 8;  // 5 rupees per unit for first 100, 8 rupees for next 100
    } else {
        bill = (100 * 5) + (100 * 8) + (units - 300) * 10;  // 5 rupees for first 100, 8 rupees for next 100, 10 rupees for above 300
    }

    // Display the total bill
    printf("Total electricity bill: %.2f rupees\n", bill);

    return 0;
}

