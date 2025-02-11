#include <stdio.h>  
int main() {  
    int number;    
    scanf("%d", &number);    
    int trailingZeros = 0; 
    while ((number > 0) && ((number & 1) == 0)) {  
        trailingZeros++;  
        number >>= 1;    
    }  
    printf("%d\n", trailingZeros);  
    return 0;  
}