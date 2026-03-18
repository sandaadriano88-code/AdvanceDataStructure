#include <stdio.h>

int main() {
    int score;
    char grade;
    
    printf("Enter student score (0-100): ");
    scanf("%d", &score);
    
    if(score >= 80 && score <= 100) {
        grade = 'A';
    }
    else {
        if(score >= 70 && score <= 79) {
            grade = 'B';
        }
        else {
            if(score >= 60 && score <= 69) {
                grade = 'C';
            }
            else {
                if(score >= 50 && score <= 59) {
                    grade = 'D';
                }
                else {
                    if(score < 50 && score >= 0) {
                        grade = 'F';
                    }
                    else {
                        printf("Invalid score! Please enter between 0-100.\n");
                        return 1;
                    }
                }
            }
        }
    }
    
    printf("Score: %d\n", score);
    printf("Grade: %c\n", grade);
    
    return 0;
}
