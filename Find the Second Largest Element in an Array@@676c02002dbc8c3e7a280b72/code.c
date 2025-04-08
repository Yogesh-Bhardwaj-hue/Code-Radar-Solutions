#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

        int max1 = arr[0];   
    int max2 = -1;       

    for(int i = 1; i < n; i++) {
        if(arr[i] > max1) {
            max1 = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] != max1) {
            if(max2 == -1 || arr[i] > max2) {
                max2 = arr[i];
            }
        }
    }


    printf("%d",max2);
    return 0;
}