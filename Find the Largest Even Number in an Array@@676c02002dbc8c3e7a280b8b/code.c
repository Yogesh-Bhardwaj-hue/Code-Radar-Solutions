#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    int foundEven = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (!foundEven || arr[i] > max) {
                max = arr[i];
                foundEven = 1;
            }
        }
    }

    if (foundEven) {
        printf("%d", max);
    } else {
        printf("-1");
    }

    return 0;
}
