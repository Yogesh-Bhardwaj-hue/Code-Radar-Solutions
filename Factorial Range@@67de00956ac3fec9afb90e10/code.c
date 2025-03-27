#include <stdio.h>

void factorialRange(int start, int end) {
    if (start < 0 && start >end) {
        printf("Invalid range\n");
        return; 
    }
    if (start == 0) {
        printf("1\n"); 
        start = 1;
    }

    int fact = 1;
    for (int i = 1; i < start; i++) {
        fact *= i; 
    }
    
    for (int i = start; i <= end; i++) {
        fact *= i;
        printf("%d\n", fact); 
    }
}

