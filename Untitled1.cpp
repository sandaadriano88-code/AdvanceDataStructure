 #include <stdio.h>
int main(){
	float total_price, discount, final_price;
	printf("enter total price:");
	scanf("%f", &total_price);
	if (total_price > 10000) {
		discount = total_price * 0.10;
		final_price = total_price - discount;
	} else{
		final_price = total_price;
	}
	printf("final price after discount: %.2f" , final_price);
	return 0;	
	
}
