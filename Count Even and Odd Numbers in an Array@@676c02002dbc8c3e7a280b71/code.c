#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int old_numbers = old(count);
    int even_numbers = even(temp);
    printf("%d ",old_numbers);
    printf("%d",even_numbers);
}

int old(int count){
    int count =0 ;
    for(int i=0; i<=n ; i++){
        if(arr[i]%2 != 0){
            count++;
        }
        return count;
    }
}

int even(int temp){
    int temp =0;
    for(i=0 ; i<=n ; i++){
        if(arr[i]%2 == 0){
            temp++;
        }
        return temp;
    }
}