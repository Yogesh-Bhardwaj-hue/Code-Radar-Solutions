#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    scanf("%99s",str);
    printf("%s",tosupper(str));
    return 0;
}