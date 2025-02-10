#include <stdio.h>
#include <string.h>
int  main(){
    char str[100];
    scanf("[^\n]",str);
    int len = strlen(str);
    
    printf("%d\n",len);
    return 0;
}