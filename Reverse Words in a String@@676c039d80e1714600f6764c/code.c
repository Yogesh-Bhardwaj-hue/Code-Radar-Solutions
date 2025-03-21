#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    scanf("%s",str);
    for(int i = 0; i<= sizeof(str[100]); i++){
        for(int j = 0; j<= sizeof(str[100]); j++){
            printf("%s ",str);
        }
    }
    return 0;
}