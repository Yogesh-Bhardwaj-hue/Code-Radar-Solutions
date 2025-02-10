#include <stdio.h>
#include <string.h>
int  main(){
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    if(str == " "){
        len++;
    }
    printf("%d",len);
    return 0;
}