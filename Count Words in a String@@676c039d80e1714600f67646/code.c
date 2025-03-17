#include <stdio.h>
#include <ctype.h>
int countWords(const char *str) {
    int count = 0, inWord = 0;

    while (*str) {
        if (isspace((unsigned char)*str)) {
            inWord = 0; 
        } else if (!inWord) {
            inWord = 1; 
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    printf("%d\n", countWords(str));
    return 0;
}