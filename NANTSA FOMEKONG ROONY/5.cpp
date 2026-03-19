#include<stdio.h>
#include<stdlib.h>

int fact(int n){
	
		if(n==0 || n == 1){
		return 1;
	}
		else{
		return n * fact(n - 1);
		}

	
	
}

int main(){
	int number,i;
		printf("Enter a number you want to calculate its factorial: ");
	scanf("%d",&number);
	
	printf("The factorial of the first %d is: ",number);
	
	for(i = 1; i <= number; i++){	
		printf(" %d",i);
		if(i < number){
			printf(" *");
		}
		}
			
   printf(" = %d",fact(number));
		
}