void trackScores(int scores[], int n , int result[]) {  
    if (n == 0) {  
        printf("0 0\n");  
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

    return max_breaks , min_breaks;
}
