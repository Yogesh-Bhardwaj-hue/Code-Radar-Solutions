#include <stdio.h>  

int main() {  
    char str1[100], str2[100]; 
    char result[200];           
    int i = 0, j = 0;    
    fgets(str1, sizeof(str1), stdin);    
    fgets(str2, sizeof(str2), stdin);  
    str1[strcspn(str1, "\n")] = '\0';  
    str2[strcspn(str2, "\n")] = '\0';    
    while (str1[i] != '\0') {  
        result[i] = str1[i];  
        i++;  
    }    
    while (str2[j] != '\0') {  
        result[i] = str2[j];  
        i++;  
        j++;  
    }   
    result[i] = '\0'; 
    printf("%s\n", result);  

    return 0;  
}