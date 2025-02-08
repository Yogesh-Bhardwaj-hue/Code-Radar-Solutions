
#include <stdio.h>  

int main() {  
    int n;  
  
    scanf("%d", &n);    
    int rollnumber[n];  
    int marks[n];  
    char name[n][100];  
    for (int i = 0; i < n; i++) {  
         
        scanf("%d %d %s", &rollnumber[i], &marks[i], name[i]);  
    }   
    for (int i = 0; i < n; i++) {  
        printf("Roll Number: %d, Name: %s, Marks: %d\n", rollnumber[i], name[i], marks[i]);  
    }  

    return 0;  
}  