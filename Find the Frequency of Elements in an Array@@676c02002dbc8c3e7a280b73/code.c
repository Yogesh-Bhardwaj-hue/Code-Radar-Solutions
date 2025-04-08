#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    int freq[max + 1];
    for(int i = 0; i <= max; i++) {
        freq[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int printed[max + 1];
    for(int i = 0; i <= max; i++) {
        printed[i] = 0;
    }

    for(int i = 0; i < n; i++) {
        if(!printed[arr[i]]) {
            printf("%d %d\n", arr[i], freq[arr[i]]);
            printed[arr[i]] = 1;
        }
    }

    return 0;
}
