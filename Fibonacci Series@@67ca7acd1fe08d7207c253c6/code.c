#include <stdio.h>

void fibonacciSeries(int *a, int *b, int *c) {
    *c = *a + *b;  
    *a = *b;       
    *b = *c;       
}


