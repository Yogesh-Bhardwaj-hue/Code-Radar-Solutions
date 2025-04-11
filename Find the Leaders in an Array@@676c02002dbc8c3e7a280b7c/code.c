#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], leaders[n], count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_from_right = arr[n - 1];
    leaders[count++] = max_from_right; 

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            leaders[count++] = arr[i];
        }
    }

    for (int i = 0; i < count / 2; i++) {
        int temp = leaders[i];
        leaders[i] = leaders[count - i - 1];
        leaders[count - i - 1] = temp;
    }

    for (int i = 0; i < count - 2; i++) {
        for (int j = i + 1; j < count - 1; j++) {
            if (leaders[i] < leaders[j]) {
                int temp = leaders[i];
                leaders[i] = leaders[j];
                leaders[j] = temp;
            }
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d ", leaders[i]);
    }

    return 0;
}
