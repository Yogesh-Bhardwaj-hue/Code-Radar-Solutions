#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    a = a^b;
    b = a^b;
    a = a^b;
    pritnf("%d %d",a,b);
    return 0;

}