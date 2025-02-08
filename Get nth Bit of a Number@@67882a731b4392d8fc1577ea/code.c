#include <stdio.h>
int  main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int nthBit = (a >> b) & 1;
    printf("%d",nthBit);
    return 0;
}