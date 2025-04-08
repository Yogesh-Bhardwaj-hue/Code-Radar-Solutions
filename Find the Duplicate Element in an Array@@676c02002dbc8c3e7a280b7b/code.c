#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int printed[n]; 
    for(int i = 0; i < n; i++) {
        printed[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(printed[i]) continue; 

        int isDuplicate = 0;
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                isDuplicate = 1;
                printed[j] = 1; 
            }
        }

        if(isDuplicate) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
