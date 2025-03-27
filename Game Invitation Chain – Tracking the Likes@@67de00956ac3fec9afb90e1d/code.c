#include <stdio.h>
#include <math.h>
int totalLikes(int n) {
    int initial = 5, likes = 0;
    
    for (int i = 1; i <= n; i++) {
        int liked = initial / 2;  
        likes += liked;           
        initial = liked * 3;      
    }
    
    return likes;
}