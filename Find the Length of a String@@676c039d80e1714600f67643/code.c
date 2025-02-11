#include <stdio.h>  
int main() {  
    char str[100];  
    scanf("%99s", str);   
    int len = 0; 
    while (str[len] == " ") {  
        len++;  
    }  
    printf("%d\n", len); 
    return 0;  
}