#include <stdio.h>

void trackScores(int scores[], int n, int result[]) {  
    if (n == 0) {  
        result[0] = 0;
        result[1] = 0;
        return;  
    }  

    int max_score = scores[0];  
    int min_score = scores[0];  
    int max_breaks = 0;  
    int min_breaks = 0;  

    for (int i = 1; i < n; i++) {  
        if (scores[i] > max_score) {  
            max_score = scores[i];  
            max_breaks++;  
        } else if (scores[i] < min_score) {  
            min_score = scores[i];  
            min_breaks++;  
        }  
    }  

    result[0] = max_breaks;  
    result[1] = min_breaks;  
}
