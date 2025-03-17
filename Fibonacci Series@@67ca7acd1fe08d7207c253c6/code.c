#include <stdio.h>

void Fibo(int *a, int *b, int *c) {
    *c = *a + *b;  
    *a = *b;       
    *b = *c;       
}

int main() {
    int a, b, c, n;
    scanf("%d %d", &n);
    scanf("%d", &a,&b);
    for (int i = 2; i < n; i++) { 
        Fibo(&a, &b, &c);
        printf(" %d", c);
    }
    printf("\n");

    return 0;
}
