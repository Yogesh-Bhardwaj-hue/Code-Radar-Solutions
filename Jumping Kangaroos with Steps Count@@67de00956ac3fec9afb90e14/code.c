#include <stdio.h>
int kangaroo(int x1, int x2, int v1, int v2){
    int n;
    int jump_1 = x1 + n*v1;
    int jump_2 = x2 + n*v2;
    if(jump_1 == jump_2) {
        return n;
    }
    else{
        return -1;
    }
}