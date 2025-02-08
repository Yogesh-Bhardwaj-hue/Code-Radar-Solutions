#include <stdio.h>  

void printBinary(int number) {  
    
    int foundOne = 0;  

    for (int i = 31; i >= 0; i--) {  
         
        if ((number >> i) & 1) {  
            foundOne = 1;  
            printf("1");  
        } else if (foundOne) {  
            printf("0");  
        }  
    }   
    if (!foundOne) {  
        printf("0");  
    }  

    printf("\n");  
}  

int main() {  
    int number; 
    scanf("%d", &number);   
    printBinary(number);  

    return 0;  
}
