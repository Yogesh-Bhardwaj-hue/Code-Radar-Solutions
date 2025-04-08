#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], rev[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        rev[i] = arr[n - 1 - i];
    }
    int isPalindrome = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] != rev[i]) {
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
