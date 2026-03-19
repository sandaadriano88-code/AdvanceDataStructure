#include<stdio.h>

int main(){
	float grade;
	
	printf("Enter your grade(0 - 100): ");
	scanf("%f",&grade);
	
	if(grade > 100){
		printf("Invalid inputed grade!\n"); 
		  main();
		}
	
	else if(grade >= 80 ){
		if(grade <= 100){
		   printf("You score an: A");	
		}	
	}	
	
	if(grade >= 70){
	    if(grade <= 79){
		   printf("You score a: B");	
		}
	}
    
    if(grade >= 60){
	    if(grade <= 69){
		   printf("You score a: C");	
		}
	}
	
	else if(grade >= 50){
		    if(grade <= 59){
			   printf("You score a: D");	
			}
		}
		
	else if(grade >= 0){
		    if(grade <= 50){
			   printf("You score an: F");	
			}
		}
		
	else{
		printf("Invalid inputed grade!\n"); 
		  main();
		}
		

}