#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    
    for(int i=1 ; i<=N ; i++){
        for(int j=1 ; j< N ;j++){
            printf(" ");}
        for(int k = 1;k<= i ; k++){
            printf(" %d",k); 
             
        }
        printf("\n");
        
    }
    return 0;

}