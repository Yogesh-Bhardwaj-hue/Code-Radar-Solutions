#include <stdio.h>

int main(){
    int i,n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<=n; i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    for(int i=0 ; i<n ; i++){
        if(arr[i] == i){
            count++;
        }
    }
    printf("arr[i] %d %d\n ",arr[i],max);
    return 0;
}