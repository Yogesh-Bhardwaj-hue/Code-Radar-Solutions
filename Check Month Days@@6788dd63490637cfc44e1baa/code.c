#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==2){
        printf("28\n");

    }
    else if(n==2 || n==4 || n==6 || n==8 || n==10 || n==12){
        printf("30\n");
    }
    else if(n==1 || n==3 || n==5 || n==7 || n==9 || n==11){
        printf("31\n");
    }
    else if(n<=0 && n>12){
        printf("Invalid month");
    }
    return 0;
}