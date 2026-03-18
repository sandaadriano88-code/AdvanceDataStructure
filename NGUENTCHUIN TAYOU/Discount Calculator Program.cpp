#include <stdio.h>

int main() {
    float total_price, discount, final_amount;
    
    printf("Enter total price of items: ");
    scanf("%f", &total_price);
    
    if(total_price > 10000) {
        discount = total_price * 0.10;
        final_amount = total_price - discount;
        printf("Original amount: %.2f FCFA\n", total_price);
        printf("Discount applied: %.2f FCFA\n", discount);
        printf("Final amount after discount: %.2f FCFA\n", final_amount);
    }
    else {
        final_amount = total_price;
        printf("No discount applied.\n");
        printf("Final amount: %.2f FCFA\n", final_amount);
    }
    
    return 0;
}
