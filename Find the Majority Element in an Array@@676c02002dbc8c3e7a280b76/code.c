#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxCount = 0;
    int majorityElement = -1;

    for(int i = 0; i < n; i++) {
        int count = 0;
        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        if(count > n / 2) {
            majorityElement = arr[i];
            break; 
        }
    }

    printf("%d", majorityElement);
    return 0;
}
