#include <stdio.h>
int kangaroo(int x1, int v1, int x2, int v2) {
    if (v1 == v2) {
        if (x1 == x2) {
            return 1; 
        } else {
            return -1; 
        }
    }
    if ((x2 - x1) % (v1 - v2) == 0) {
        int n = (x2 - x1) / (v1 - v2);
        if (n >= 0) {
            return n; 
        }
    }

    return -1; 
}