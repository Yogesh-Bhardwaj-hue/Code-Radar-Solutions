#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1; i<=n ; i++){
        if(i==n ){
            printf("* ");
        }
        
        for(int j=1; j<= n ; j++){
            if(j==n && i==j){
                printf("* ");
            }
            else{
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}