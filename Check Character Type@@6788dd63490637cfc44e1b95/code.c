#include <stdio.h>
int main(){
    char character;
    if(character == "aeiouAEIOU"){
        printf("Vowel");
    }
    else if(character == "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ"){
        printf("Consonant");
    }
    else if(character == "0123456789"){
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}