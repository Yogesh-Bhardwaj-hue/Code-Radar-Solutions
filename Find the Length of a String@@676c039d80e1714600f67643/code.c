#include <stdio.h>
#include <string.h>
int  main(){
    char str[100];
    scanf("[^\n]",str);
    int len = strlen(str);
     if (strcmp(str, " ") == 0) {  
        len++;  
    }  
    printf("%d",len);
    return 0;
}