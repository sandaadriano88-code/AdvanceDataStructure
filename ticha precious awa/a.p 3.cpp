#include<stdio.h>
int main()
{
	int score;
	printf("Enter students scores:");//result
	scanf("%d",&score);
	if("score>=80 && score <=100"){//my future  result
	printf("grade A");
	}
	else if (score>=70){
		printf("grade B");
	}
	else if(score>=60){
		printf("grade C");
	}
	else if(score>=50){
		printf("grade D");
	}
	else{
		printf("grade F");
	}
	return 0;
}
