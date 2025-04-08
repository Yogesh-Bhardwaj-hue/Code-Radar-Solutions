#include <stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);

    int arr[n] , rev[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0 ; i<n ; i++){
        arr[i] = rev[n-1-i];
    }
    if(arr[i] == rev[i]){
        printf("YES");
    }
    else{
        printf("NO");
    }

return 0;
}