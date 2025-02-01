#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2){
        printf(28);

    }
    else if(n%2==0){
        printf(30);
    }
    else if(n%2 != 0){
        printf(31);
    }
    if(n<=0 && n>12){
        printf("Invalid month");
    }
    return 0;
}