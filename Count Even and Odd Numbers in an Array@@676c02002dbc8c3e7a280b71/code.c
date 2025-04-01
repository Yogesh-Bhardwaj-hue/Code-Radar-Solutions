#include <stdio.h>

int odd(int arr[], int n);
int even(int arr[], int n);

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int odd_numbers = odd(arr, n);
    int even_numbers = even(arr, n);
    
    printf("%d ", odd_numbers);
    printf("%d", even_numbers);

    return 0;
}

int odd(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int even(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}
