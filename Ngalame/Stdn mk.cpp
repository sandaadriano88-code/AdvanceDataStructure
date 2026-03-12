#include <stdio.h>
int main(){
    int score;
	printf("Enter student scores: ");// results
	scanf("%d", &score);
	
	if(score >= 80 && score <= 100){// my future marks
	printf("Grade A");
}
    else if(score >= 70){
    	printf("Grade B");
}
    else if(score >= 60){
    	printf("Grade C");
	}
	else if(score >= 50){
    	printf("Grade D");
}
 else{
        printf("Grade F");
    }

	return 0;
	}
