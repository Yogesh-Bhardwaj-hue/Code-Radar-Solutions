#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i = 'A';i<=n;i++){
        for(int j = 'A';j<= i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}