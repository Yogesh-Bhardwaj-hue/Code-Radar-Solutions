#include <stdio.h>

void Fibo(int *a, int *b, int *c) {
    *c = *a + *b;  
    *a = *b;       
    *b = *c;       
}


