#include <stdio.h>  

int main() {  
    int n;  
    scanf("%d", &n); 
    
    int arr[n];  
    for (int i = 0; i < n; i++) {  
        scanf("%d", &arr[i]);  
    }  

    int max_freq = 0;  
    int result = arr[0]; 

    for (int i = 0; i < n; i++) {  
        int current_freq = 1;  
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] == arr[j]) {  
                current_freq++;  
            }  
        }  

        if (current_freq > max_freq ||   
            (current_freq == max_freq && arr[i] < result)) {  
            max_freq = current_freq;  
            result = arr[i];  
        }  
    }  

    printf("%d\n", result);  
    return 0;  
}  