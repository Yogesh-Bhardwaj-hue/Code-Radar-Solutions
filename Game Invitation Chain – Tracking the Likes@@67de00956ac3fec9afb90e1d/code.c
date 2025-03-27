#include <stdio.h>
#include <math.h>
int totalLikes(int n){
    int initial =5,likes;
    for(int i=0; i<=n; i++){
        likes = n*initial/2;
        initial+=3;

    }
    return likes;
}