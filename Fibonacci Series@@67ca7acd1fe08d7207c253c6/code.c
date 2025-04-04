#include <stdio.h>

void fibonacciSeries(int n) {
    int a = 0, b = 1, c; 
    if(n==1){
        printf("%d",a);
    }
    else{
        printf("%d %d",a,b);
    }

    for (int i = 2; i < n; i++) {
        c = a + b; 
       
        a = b;  
        b = c;
        printf(" %d", c);
    }
    printf("\n");
}


