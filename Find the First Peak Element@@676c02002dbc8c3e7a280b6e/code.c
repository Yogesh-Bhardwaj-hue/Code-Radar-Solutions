#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int  max = arr[0];
    for (int i = 1; i < n; i++) {


        if (arr[i] > max) {
            max = arr[i];
        }

         if(arr[i] == arr[i+1]){
            printf("-1");
            break;
        }
        
    }
    printf("%d\n", max);
    
    return 0;
}
