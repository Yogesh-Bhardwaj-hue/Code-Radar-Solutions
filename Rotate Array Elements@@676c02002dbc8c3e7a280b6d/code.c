#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    int k;
    scanf("%d",&k);

    int rota[n];
    for(int i=0 ; i<n ; i++){
        arr[i] = rota[n - i -1];
    }

    for(int i=0 ; i<n ; i++){
        printf("%d\n",rota[i]);
    }
    return 0;
}