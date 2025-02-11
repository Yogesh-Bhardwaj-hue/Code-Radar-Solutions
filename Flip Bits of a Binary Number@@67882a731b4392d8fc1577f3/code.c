#include <stdio.h>  
int main() {  
    int number;    
    printf("Enter a single integer: ");  
    scanf("%d", &number);  
    int flippedNumber = ~number;
    printf("%d\n", flippedNumber);  
    return 0;  
}