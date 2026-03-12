

#include <stdio.h>

int main() {
    float totalPrice, discount = 0, finalAmount;

  
    printf("Enter total price of items: ");
    scanf("%f", &totalPrice);

  
    if (totalPrice > 10000) {
        discount = totalPrice * 0.10;  
    }

 
    finalAmount = totalPrice - discount;

  
    printf("Total Price: %.2f\n", totalPrice);
    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}