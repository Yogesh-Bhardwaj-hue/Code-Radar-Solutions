#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count;
    count=0;
    for(int i =1;i<=n;i++){
        for(int j=1;j<=i;j++){
            count++;
            printf("%d ",count);
        }
        printf("\n");
    }
    return 0;
    

}