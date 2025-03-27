#include <stdio.h>
int countGlovePairs(int gloves[], int n) {
    int count[101] = {0}; 
    int pairs = 0;

    for (int i = 0; i < n; i++) {
        count[gloves[i]]++;
    }
    for (int i = 0; i < 101; i++) {
        pairs += count[i] / 2; 
    }

    return pairs;
}