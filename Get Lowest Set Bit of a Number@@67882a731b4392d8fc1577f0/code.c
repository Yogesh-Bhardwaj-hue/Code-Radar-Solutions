#include <stdio.h>  

int main() {  
    int number; 
    scanf("%d", &number);    
    if (number == 0) {  
        printf("-1\n");    
        return 0;  
    }   
    int position = 0;  
    while ((number & 1) == 0) {  
        number >>= 1;  
        position++;       
    }   
    printf("%d\n", position);  

    return 0;  
}