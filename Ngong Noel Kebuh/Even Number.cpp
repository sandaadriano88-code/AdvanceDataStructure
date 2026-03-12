#include <stdio.h>

int main() {
    int i;

    printf("Even numbers between 1 and 20 are:\n");

    for(i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}