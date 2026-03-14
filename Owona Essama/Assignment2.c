#include <stdio.h>
int main() {
	int score;
	printf("\nEnter the score: ");
	scanf("%d",&score);
	
	if(80<=score<=100){
		printf("A");
	}
	else if(score<=79){
		if(score>=70){
			printf("B");
		}
	}
	else if(score<=69){
		if(score>=60){
			printf("C");
		}
	}
	else if(score<=59){
		if(score>=50){
			printf("D");
		}
	}
	else if(score<50){
		printf("F");
	}


	return 0;
}
