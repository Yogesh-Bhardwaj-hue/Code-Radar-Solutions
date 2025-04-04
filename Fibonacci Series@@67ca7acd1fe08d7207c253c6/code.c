#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c; 

    printf("Fibonacci Series: %d %d", a, b);

    for (int i = 2; i < n; i++) {
        c = a + b; 
        printf(" %d", c);
        a = b;  
        b = c;
    }
    printf("\n");
}


