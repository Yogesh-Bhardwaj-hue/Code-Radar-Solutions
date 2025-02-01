#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c  ){
        printf("Equilateral");
    }
    else if(a==b || a==c ||b==c ){
        printf("Isosceles");
    }
    else if(a ==0 && b==0 && c==0){
        printf("Invalid ");
    }
    else{
        printf("scalene");
    }
    return 0;
}