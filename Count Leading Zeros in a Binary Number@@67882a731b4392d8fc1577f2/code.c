#include <stdio.h>  
int main() {  
    unsigned int number;   
    scanf("%u", &number);    
    int leadingZeros = 0;  
    for (int i = 31; i >= 0; i--) {  
        if ((number & (1 << i)) == 0) {  
            leadingZeros++;  
        } else {  
            break;  
        }  
    }  
    printf("%d\n", leadingZeros);  

    return 0;  
}