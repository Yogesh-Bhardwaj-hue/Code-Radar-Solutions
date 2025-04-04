#include <stdio.h>

void fibonacciSeries(int n) {
    int *a, int *b, int *c;
    *c = *a + *b;  
    *a = *b;       
    *b = *c;  
    return *c;     
}


