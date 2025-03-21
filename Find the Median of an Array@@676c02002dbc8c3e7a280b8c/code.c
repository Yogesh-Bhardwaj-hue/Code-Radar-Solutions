#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    
    int arr[n]; 
    for (int i = 0; i <= n - 1; i++) {
        scanf("%d", &arr[i]); 
    }


    if (n % 2 == 0) {
        int mid1 = arr[n / 2 - 1]; 
        int mid2 = arr[n / 2];
        printf("%d\n", (mid1 + mid2) / 2);
    } 
    else {
        printf("%d\n", arr[n / 2]);
    }

    return 0;
}
