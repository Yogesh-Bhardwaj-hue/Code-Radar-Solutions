#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

        int min1 = arr[0];   
    int min2 = -1;       

    for(int i = 1; i < n; i++) {
        if(arr[i] < min1) {
            min1 = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] != min1) {
            if(min2 == -1 || arr[i] < min2) {
                min2 = arr[i];
            }
        }
    }


    printf("%d",min2);
    return 0;
}