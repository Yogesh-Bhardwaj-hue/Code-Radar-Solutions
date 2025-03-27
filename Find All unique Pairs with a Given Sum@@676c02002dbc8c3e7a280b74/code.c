#include <stdio.h>

void findPairs(int arr[], int n, int target) {
    int hash[100] = {0}; 

    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (complement >= 0 && hash[complement] == 1) {
            printf("(%d, %d)\n", complement, arr[i]);
        }
        hash[arr[i]] = 1;
    }
}

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &target);
    findPairs(arr, n, target);
    
    return 0;
}
