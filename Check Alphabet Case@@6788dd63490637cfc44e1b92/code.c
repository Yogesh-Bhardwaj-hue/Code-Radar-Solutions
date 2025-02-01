#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    if(issupper(a)){
        printf("Uppercase");
    }
    else if(islower(a)){
        printf("Lowercase");
    }
    return 0;
    
}