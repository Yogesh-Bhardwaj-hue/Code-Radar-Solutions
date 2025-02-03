#include <stdio.h>
#include <ctype.h>
int main(){
    char x;
    scanf(" %c",&x);
    if(issupper(x)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}