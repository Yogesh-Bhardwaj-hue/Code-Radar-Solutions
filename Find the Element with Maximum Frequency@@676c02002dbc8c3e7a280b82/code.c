#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, result;

    for(int i = 0; i < n; i++) {
        int freq = 0;
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) {
                freq++;
            }
        }
        if(freq > maxFreq || (freq == maxFreq && arr[i] < result)) {
            maxFreq = freq;
            result = arr[i];
        }
    }

    printf("%d", result);
    return 0;
}
