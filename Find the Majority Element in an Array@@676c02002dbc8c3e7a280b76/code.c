#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int count=0;
    for(int i=0 ; i<n-1 ; i++){
        for(int j=0 ; j<n-1 ; j++){
            if(arr[i] == arr[j]){
                count++;
            }
        }
    }
    if(count > n/2){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
    return 0;
}