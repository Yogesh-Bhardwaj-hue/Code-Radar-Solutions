#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int prod1 = arr[0] * arr[1];             
    int prod2 = arr[n - 1] * arr[n - 2];    
    if(prod1 > prod2) {
        printf("%d", prod1);
    } else {
        printf("%d", prod2);
    }

    return 0;
}
