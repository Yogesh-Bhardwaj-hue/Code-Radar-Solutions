#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i = sizeof(str[100]); i>=0; i++){
        for(int j = sizeof(str[100]) ; j>=0; j++){
            printf("%s ",str);
        }
    }
    return 0;
}