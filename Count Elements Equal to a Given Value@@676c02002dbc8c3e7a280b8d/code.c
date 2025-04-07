#include <Stdio.h>
int main{
    int n;
    scanf("%d",&n);

    int k;
    scanf("%d",&k);

    int arr[n];
    for(int i =0; i<=n ; i++){
        scanf("%d",arr[i]);
    }

    int count =0;
    for(int i = 0 ; i<= n ; i++){
        if(arr[i] == arr[i+1]){
            count++;
        }
        printf("%d",count);
    }
}