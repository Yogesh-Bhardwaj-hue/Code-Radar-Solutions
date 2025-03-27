#include <stdio.h>
#include <math.h>
int totalLikes(int n){
    int initial =5,likes=0;
    for(int i=1; i<=n; i++){
        likes += n*initial/2;
        initial+=3;

    }
    return likes;
}