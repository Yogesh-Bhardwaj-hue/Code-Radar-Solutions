#include <stdio.h>n
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        int found =0;
        for(int j=0 ; j<n ; j++){
            if(arr[j] == arr[i]){
                found =1;
                break;
            }
        }
    }
    if(found){
        printf("%d",arr[i]);
    }

}