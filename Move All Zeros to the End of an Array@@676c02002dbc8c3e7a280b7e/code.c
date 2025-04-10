#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int temp;
    for(i =0; i<n ; i++){

        if(arr[i]==0){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
        else{
            printf("-1");
        }
    }
    printf("%d",arr[n]);
}