#include <stdio.h>  
int main() {  
    int number, n;    
    scanf("%d %d", &number, &n);  
    int mask = 1 << n;  
    int updatedNumber = number ^ mask;  
    printf("%d",updatedNumber);  

    return 0;  
}