#include<stdio.h>
#include<stdlib.h>

int sumOfNumbers(int n){
	
		if(n==0 || n == 1){
		return n;
	}
		else{
		return n + sumOfNumbers(n - 1);
		}

	
	
}

int main(){
	int number,i;
		printf("Enter a number you want to calculate its Nth sum: ");
	scanf("%d",&number);
	
	printf("The sum of the first %dth term(s) is: ",number);
	
	for(i = 1; i <= number; i++){	
		printf(" %d",i);
		if(i < number){
			printf(" +");
		}
		}
			
   printf(" = %d",sumOfNumbers(number));
		
}