#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        int num = arr[i];
        int rev = 0, rem;
        int original = num;

        while(num != 0) {
            rem = num % 10;
            rev = rev * 10 + rem;
            num = num / 10;
        }

        if(original == rev) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
