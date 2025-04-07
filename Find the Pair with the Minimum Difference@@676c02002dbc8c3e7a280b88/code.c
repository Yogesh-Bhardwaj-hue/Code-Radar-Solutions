#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_diff = 0;

    for(int i = 0; i < n - 1; i++) {
        int lead = abs(arr[i] - arr[i + 1]);
        if(lead > max_diff) {
            max_diff = lead;
        }
    }

    printf("%d\n", max_diff);
    return 0;
}
