#include <stdio.h>

int main() {
    int day;

    // Ask the user to enter a number between 1 and 7
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);

    // Validate the input using if-else and then use switch for day determination
    if (day >= 1 && day <= 7) {
        switch(day) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                // This default will never be reached because of the input validation above
                printf("Invalid input\n");
                break;
        }
    } else {
        // If input is not in the range 1-7
        printf("Invalid input\n");
    }

    return 0;
}

