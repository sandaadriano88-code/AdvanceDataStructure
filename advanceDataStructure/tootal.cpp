#include <stdio.h>

int main() {
    float total_price, discount, final_amount;

    printf("Enter total price: ");
    scanf("%f", &total_price);

    if (total_price > 10000) {
        discount = total_price * 0.10;
        final_amount = total_price - discount;
    } else {
        final_amount = total_price;
    }

    printf("Final amount after discount: %.2f\n", final_amount);

    return 0;
}