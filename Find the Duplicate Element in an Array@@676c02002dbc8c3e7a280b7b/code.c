#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i< n ; i++){
        scanf("%d",&arr[i]);
    }

    int found =0;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(arr[j] == arr[j]){
                found = 1;
            }
        }
    }
    if(found == 1){
        printf("%d",arr[i]);
    }
    else{
        printf("-1");
    }
    return 0;
}