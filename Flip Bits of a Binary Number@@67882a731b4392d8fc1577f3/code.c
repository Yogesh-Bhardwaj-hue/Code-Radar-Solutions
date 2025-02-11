#include <stdio.h>  
int main() {  
    int number;      
    scanf("%d", &number);  
    int flippedNumber = ~number;
    printf("%d\n", flippedNumber);  
    return 0;  
}