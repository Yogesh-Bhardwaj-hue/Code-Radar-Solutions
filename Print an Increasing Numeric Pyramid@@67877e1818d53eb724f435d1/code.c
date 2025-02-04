#include <stdio.h>
int main(){
    int n,m = 1;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        for(int j=1 ; j<=n ;j++){
            printf(" ");}
        for(int j = 1;j< 2*i ; j++){
            printf("%2d",m); 
             m++;
        }
        printf("\n");
        
    }
    return 0;

}