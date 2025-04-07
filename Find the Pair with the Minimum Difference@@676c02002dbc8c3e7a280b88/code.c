#include <stdio.h>
int main(){
    int i,n,diff = 0;
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i<= n ; i++){
        scanf("%d",arr[i]);
    }
    int lead = arr[i] - arr[i+1];

    if(diff > lead){
        diff = lead;
    }
    return lead;
}