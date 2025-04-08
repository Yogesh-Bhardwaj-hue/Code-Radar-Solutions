#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        arr[i] += i;
    }
    printf("%d",arr[i]);
}