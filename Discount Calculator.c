#include<stdio.h>
#include<conio.h>
int main() 
{
    float totalAmount, discount = 0.0, finalAmount;

    printf("Enter the total shopping amount: ");
    scanf("%f", &totalAmount);

        if (totalAmount > 5000) {
        discount = totalAmount * 0.20;  // 20% discount
    }
	 else if (totalAmount >= 3000) {
        discount = totalAmount * 0.10;  // 10% discount
    } 
	else {
        discount = 0.0;  // No discount
    }
    finalAmount = totalAmount - discount;
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to be paid: %.2f\n", finalAmount);

    return 0;
    getch();
}

