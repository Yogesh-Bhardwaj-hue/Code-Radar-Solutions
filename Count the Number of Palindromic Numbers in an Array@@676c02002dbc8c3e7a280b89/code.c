#include <Stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0 ; i<=n ; i++){
        scanf("%d",&arr[i]);
    }

    int count,rem , rev =0;
    for(int i=0 ; i<n ; i++){
        if(i != 0){
            rem = i%10;
            rev = rev*10 + rem;
            i = i/10;

            if(arr[i] == rev){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
 
}