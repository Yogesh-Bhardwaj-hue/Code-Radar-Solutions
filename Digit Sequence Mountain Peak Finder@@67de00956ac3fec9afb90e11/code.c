#include <stdio.h>

int mountainPeak(int N) {
    int arr[10], len = 0;
    while (N > 0) {
        arr[len++] = N % 10;
        N /= 10;
    }
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - i - 1];
        arr[len - i - 1] = temp;
    }
    int i = 0;
    while (i < len - 1 && arr[i] < arr[i + 1]) {
        i++;
    }
    if (i == 0 || i == len - 1) {
        return -1;
    }
    int peak = arr[i];
    while (i < len - 1 && arr[i] > arr[i + 1]) {
        i++;
    }
    if (i != len - 1) {
        return -1;
    }

    return peak;
}


