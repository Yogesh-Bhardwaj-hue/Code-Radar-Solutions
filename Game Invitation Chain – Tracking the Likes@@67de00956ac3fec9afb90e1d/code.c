#include <stdio.h>
#include <math.h>
int totalLikes(int n){
    int initial =5,likes;
    for(int i=1; i<=n; i++){
        likes = initial/2;
        initial+=3;

    }
    return likes;
}