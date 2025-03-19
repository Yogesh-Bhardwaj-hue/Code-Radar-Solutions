#include <stdio.h>

void Fibo(int *a, int *b, int *c) {
    *c = *a + *b;  
    *a = *b;       
    *b = *c;       
}

int main() {
    int a = 0, b = 1, c, n;
    scanf("%d %d", &n);
    for (int i = 2; i < n; i++) { 
        Fibo(&a, &b, &c);
        printf(" %d", c);
    }
    printf("\n");

    return 0;
}
