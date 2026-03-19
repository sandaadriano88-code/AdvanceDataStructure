#include<stdio.h>

int main(){
	float totalPrice, finalPrice,discount;
	double discountFactor = 10.0 / 100;
	
	
	printf("Enter the total price of the items: ");
	scanf("%f",&totalPrice);
	
	if(totalPrice > 10000){
		printf("You optain 10%% discount \n");
		discount = totalPrice * discountFactor;
		finalPrice = totalPrice - discount;	
		
	}
	else{
		printf("You optain no discount \n");
		discount = 0;
		finalPrice = totalPrice;
	}
	printf("Your discount is: %.2f \n",discount);
	printf("Your final amount is: %.2f frs",finalPrice);
}